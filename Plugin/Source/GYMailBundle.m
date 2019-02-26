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
//  GYMailBundle.m
//  Giphy
//
//  Created by Fabian Jäger on 15/09/15.
//  Copyright (c) 2015 Mailbutler. All rights reserved.
//

#import "GYMailBundle.h"

@implementation GYMailBundle

+ (void)initialize
{
    static BOOL initialized = NO;
    
    // initialize only once!
    if (initialized)
        return;
    initialized = YES;
    
    if (class_getSuperclass(self) != NSClassFromString(@"MVMailBundle"))
    {
        Class mvMailBundleClass = NSClassFromString(@"MVMailBundle");
        if (mvMailBundleClass) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
            class_setSuperclass([self class], mvMailBundleClass);
#pragma clang diagnostic pop
        }
    }
    
    if([[self class] isKindOfClass:@class(MVMailBundle)]) {
        // register our bundle now
        [[self class] registerBundle];
    }
    
    NSLog(@"📯 GIPHY: Loaded Mail bundle 'Giphy'.");
}

+ (BOOL)hasPreferencesPanel
{
    return NO;
}

@end
