// Copyright (C) 2019 Mailbutler GmbH
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  GYGiphyViewController.m
//  Giphy
//
//  Created by Fabian Jäger on 25/10/2016.
//  Copyright © 2016 Mailbutler. All rights reserved.
//

#import "GYGiphyViewController.h"

#import "GYRemoteImageView.h"
#import <AFNetworking/AFNetworking.h>

#import "EditingMessageWebView.h"

#define GIPHY_API_KEY   @"***REMOVED***"

@interface GYGiphyViewController ()

@property (strong) AFHTTPSessionManager *sessionManager;

@end

@implementation GYGiphyViewController

+ (GYGiphyViewController*) sharedController
{
    static GYGiphyViewController* _sharedObject = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedObject = [[GYGiphyViewController alloc] initWithNibName:@"GiphyView" bundle:PLUGIN_BUNDLE];
        [_sharedObject view];
    });
    return _sharedObject;
}

- (instancetype) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    if(self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])
    {
        self.images = [NSMutableArray arrayWithCapacity:30];
        
        self.sessionManager = [[AFHTTPSessionManager alloc] initWithBaseURL:[NSURL URLWithString:@"http://api.giphy.com"]];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}

- (void)viewWillAppear {
    [super viewWillAppear];
}

- (IBAction)search:(id)sender
{
    NSSearchField* searchField = sender;
    NSString* searchText = searchField.stringValue;
    
    self.poweredByGiphyOverlay.hidden = (searchText.length > 0);

    [self.sessionManager.operationQueue cancelAllOperations];

    [self.sessionManager GET:@"/v1/gifs/search" parameters:@{@"q":searchText, @"api_key":GIPHY_API_KEY} progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {

        [self willChangeValueForKey:@"images"];

        [self.images removeAllObjects];

        NSArray* foundImages = responseObject[@"data"];

        for(NSDictionary* foundImage in foundImages)
        {
            NSURL* imageURL = [NSURL URLWithString:foundImage[@"images"][@"fixed_height"][@"url"]];
            NSURL* previewImageURL = [NSURL URLWithString:foundImage[@"images"][@"fixed_height_downsampled"][@"url"]];

            if(!(imageURL && previewImageURL))
                continue;

            NSDictionary* imageDict = @{@"previewURL":previewImageURL, @"url":imageURL};

            [self.images addObject:imageDict];
        }

        [self didChangeValueForKey:@"images"];

    } failure:nil];
}

- (IBAction)insertImage:(id)sender
{
    if(![sender isKindOfClass:[GYRemoteImageView class]])
        return;
    
    GYRemoteImageView* imageView = sender;
    NSURL* imageURL = [self imageURLForPreviewImageURL:imageView.remoteImageURL];
    
    if(imageURL) {
        NSImage* image = imageView.image;
        
        EditingMessageWebView* webView = [self.webViewEditor webView];
        
        DOMHTMLElement *imageElement = (DOMHTMLElement*)[webView.contentElement.ownerDocument createElement:@"img"];
        [imageElement setAttribute:@"src" value:imageURL.absoluteString];
        [imageElement setAttribute:@"alt" value:@"Giphy Image"];
        [imageElement setAttribute:@"width" value:[NSString stringWithFormat:@"%d", (int)image.size.width]];
        [imageElement setAttribute:@"height" value:[NSString stringWithFormat:@"%d", (int)image.size.height]];
        
        [webView insertNode:imageElement atRange:webView.selectedDOMRange];
    }
    
}

#pragma mark Private Methods

- (NSURL*) imageURLForPreviewImageURL:(NSURL*)previewURL
{
    NSDictionary* imageDict = [[self.images filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(NSDictionary* _Nullable anImageDict, NSDictionary<NSString *,id> * _Nullable bindings) {
        return [anImageDict[@"previewURL"] isEqualTo:previewURL];
    }]] firstObject];
    
    return [imageDict valueForKey:@"url"];
}

@end
