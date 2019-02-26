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
//  GYGiphyViewController.h
//  Giphy
//
//  Created by Fabian Jäger on 25/10/2016.
//  Copyright © 2016 Mailbutler. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "WebViewEditor.h"

@interface GYGiphyViewController : NSViewController

@property (weak) WebViewEditor* webViewEditor;

@property (strong) IBOutlet NSPopover *popover;
@property (strong) IBOutlet NSImageView *poweredByGiphyOverlay;

@property (strong) NSMutableArray<NSDictionary*>* images;

+ (GYGiphyViewController*) sharedController;

- (IBAction)search:(id)sender;
- (IBAction)insertImage:(id)sender;
@end
