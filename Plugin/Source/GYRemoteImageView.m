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
//  GYRemoteImageView.m
//  Giphy
//
//  Created by Fabian Jäger on 25/10/2016.
//  Copyright © 2016 Mailbutler. All rights reserved.
//

#import "GYRemoteImageView.h"

#import <AFNetworking/AFNetworking.h>

@interface GYRemoteImageView ()
{
    NSURL* _remoteImageURL;
}

@property BOOL imageAvailable;
@end

@implementation GYRemoteImageView

- (NSURL*)remoteImageURL { return _remoteImageURL; }

- (void) setRemoteImageURL:(NSURL *)remoteImageURL
{
    _remoteImageURL = remoteImageURL;
    
    if(_remoteImageURL)
        [self downloadImage];
}


- (void)mouseDown:(NSEvent *)theEvent
{
    // see
    // http://www.cocoabuilder.com/archive/cocoa/115981-nsimageview-subclass-and-mouseup.html
    if (theEvent.type != NSLeftMouseDown) {
        [super mouseDown:theEvent];
    }
}

- (void)mouseUp:(NSEvent *)theEvent
{
    if (theEvent.type == NSLeftMouseUp) {
        NSPoint pt = [self convertPoint:[theEvent locationInWindow] fromView:nil];
        if (self.imageAvailable && self.action && NSPointInRect(pt, self.bounds)) {
            [NSApp sendAction:self.action to:self.target from:self];
        }
    } else {
        // this should never be called, but...
        [super mouseUp:theEvent];
    }
}

- (void) resetCursorRects
{
    [super resetCursorRects];
    
    if(self.action)
        [self addCursorRect:self.bounds cursor:[NSCursor pointingHandCursor]];
}

- (NSImage*) image {
    if(self.imageAvailable) {
        return [super image];
    } else {
        return [PLUGIN_BUNDLE imageForResource:@"Giphy"];
    }
}

#pragma mark Private Methods

- (void) downloadImage
{
    self.imageAvailable = NO;
    
    AFURLSessionManager* manager = [[AFURLSessionManager alloc] initWithSessionConfiguration:[NSURLSessionConfiguration defaultSessionConfiguration]];
    manager.responseSerializer = [AFImageResponseSerializer serializer];
    
    NSMutableURLRequest* request = [[NSMutableURLRequest alloc] initWithURL:_remoteImageURL];
    
    [[manager dataTaskWithRequest:request completionHandler:^(NSURLResponse * _Nonnull response, id  _Nullable responseObject, NSError * _Nullable error) {
        
        if(responseObject && error == nil) {
            self.image = responseObject;
            self.imageAvailable = YES;
        } else {
            self.imageAvailable = NO;
        }
        
    }] resume];
}

@end
