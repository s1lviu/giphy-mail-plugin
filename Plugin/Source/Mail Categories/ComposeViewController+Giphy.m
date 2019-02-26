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
//  ComposeViewController+Giphy.m
//  Giphy
//
//  Created by Fabian Jäger on 22/09/15.
//  Copyright © 2015 Mailbutler. All rights reserved.
//

#import "ComposeViewController+Giphy.h"

#import "GYGiphyViewController.h"

#import "ComposeViewController.h"
#import "BorderlessToolbarItem.h"

static NSString* GiphyToolbarItemIdentifier = @"Giphy";

@interface ComposeViewController_Giphy ()

@end

@implementation ComposeViewController_Giphy

#pragma mark Swizzled Methods

- (NSToolbarItem*)giphy_toolbar:(NSToolbar *)toolbar itemForItemIdentifier:(NSString *)itemIdentifier willBeInsertedIntoToolbar:(BOOL)flag
{
    if( [itemIdentifier isEqualToString:GiphyToolbarItemIdentifier] )
    {
        BorderlessToolbarItem *toolbarItem = [[@class(BorderlessToolbarItem) alloc] initWithItemIdentifier:itemIdentifier];
        
        // Set the text label to be displayed in the
        // toolbar and customization palette
        [toolbarItem setLabel:@"Giphy"];
        [toolbarItem setPaletteLabel:@"Giphy"];
        
        // Set up a reasonable tooltip, and image
        // you will likely want to localize many of the item's properties
        [toolbarItem setToolTip:NSLocalizedString(@"Add animated Giphy images.", nil)];
        
        NSImage* itemImage = [PLUGIN_BUNDLE imageForResource:@"TB_Giphy"];
        
        NSButton *button = [[NSButton alloc] initWithFrame:NSMakeRect(0.,0.,41.,27.)];
        [button setBezelStyle:NSTexturedRoundedBezelStyle];
        [button setImagePosition:NSImageOnly];
        [button setImage:itemImage];
        [button.cell setImageScaling:NSImageScaleProportionallyDown];
        
        [toolbarItem setView:button];
        
        [toolbarItem setAction:@selector(showGiphyPanel:)];
        [toolbarItem setEnabled:YES];

        [button setKeyEquivalentModifierMask: NSAlternateKeyMask | NSCommandKeyMask];
        [button setKeyEquivalent:@"g"];

        // Create the custom menu
        NSMenuItem *menuFormRep = [[NSMenuItem alloc] initWithTitle:[toolbarItem label] action:@selector(showGiphyPanel:) keyEquivalent:@""];
        menuFormRep.target = self;
        [toolbarItem setMenuFormRepresentation:menuFormRep];

        [menuFormRep setKeyEquivalentModifierMask: NSAlternateKeyMask | NSCommandKeyMask];
        [menuFormRep setKeyEquivalent:@"g"];
        
        return toolbarItem;
    }
    else
        return [self giphy_toolbar:toolbar itemForItemIdentifier:itemIdentifier willBeInsertedIntoToolbar:flag];
}

- (NSArray*)giphy_toolbarDefaultItemIdentifiers:(NSToolbar *) toolbar
{
    NSArray* normalIdentifiers = [self giphy_toolbarDefaultItemIdentifiers:toolbar];

    // find emoji
    NSInteger emojiIndex = [normalIdentifiers indexOfObject:@"insertEmoji:"];
    if(emojiIndex == NSNotFound) {
        emojiIndex = normalIdentifiers.count - 2;
    }
    
    NSMutableArray* updatedIdentifiers = [normalIdentifiers mutableCopy];
    [updatedIdentifiers insertObject:GiphyToolbarItemIdentifier atIndex:emojiIndex];
    
    return updatedIdentifiers;
}

- (NSArray*)giphy_toolbarAllowedItemIdentifiers:(NSToolbar *) toolbar
{
    NSArray* normalIdentifiers = [self giphy_toolbarAllowedItemIdentifiers:toolbar];

    // find emoji
    NSInteger emojiIndex = [normalIdentifiers indexOfObject:@"insertEmoji:"];
    if(emojiIndex == NSNotFound) {
        emojiIndex = normalIdentifiers.count - 2;
    }
    
    NSMutableArray* updatedIdentifiers = [normalIdentifiers mutableCopy];
    [updatedIdentifiers insertObject:GiphyToolbarItemIdentifier atIndex:emojiIndex];
    
    return updatedIdentifiers;
}

- (BOOL)giphy_validateToolbarItem:(NSToolbarItem *)toolbarItem
{
    if ([[toolbarItem itemIdentifier] isEqualToString:GiphyToolbarItemIdentifier])
        return YES;
    else
        return [self giphy_validateToolbarItem:toolbarItem];
}

+ (void) load
{
    NSError* swizzleError;
    
    // add our methods as category
    GYAddClassAsCategory([self class], @class(ComposeViewController));
    GYAddClassAsCategory([self class], @class(ComposeWindowController));

    // swizzling
    [@class(ComposeWindowController) jr_swizzleMethod:@selector(toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:) withMethod:@selector(giphy_toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:) error:&swizzleError];
    if(swizzleError) NSLog(@"💥 GIPHY: Swizzle Error: %@", swizzleError);
    [@class(ComposeWindowController) jr_swizzleMethod:@selector(toolbarDefaultItemIdentifiers:) withMethod:@selector(giphy_toolbarDefaultItemIdentifiers:) error:&swizzleError];
    if(swizzleError) NSLog(@"💥 GIPHY: Swizzle Error: %@", swizzleError);
    [@class(ComposeWindowController) jr_swizzleMethod:@selector(toolbarAllowedItemIdentifiers:) withMethod:@selector(giphy_toolbarAllowedItemIdentifiers:) error:&swizzleError];
    if(swizzleError) NSLog(@"💥 GIPHY: Swizzle Error: %@", swizzleError);
    [@class(ComposeViewController) jr_swizzleMethod:@selector(validateToolbarItem:) withMethod:@selector(giphy_validateToolbarItem:) error:&swizzleError];
    if(swizzleError) NSLog(@"💥 GIPHY: Swizzle Error: %@", swizzleError);
    
    NSAssert(swizzleError==nil, @"Something went wrong during method swizzling: %@", swizzleError);
}

# pragma mark - Internal Methods

- (void)showGiphyPanel:(id)sender
{
    GYGiphyViewController* giphyViewController = [GYGiphyViewController sharedController];
    giphyViewController.webViewEditor = [(ComposeViewController*)self webViewEditor];

    [[giphyViewController popover] showRelativeToRect:NSZeroRect ofView:sender preferredEdge:NSMinYEdge];
}

@end
