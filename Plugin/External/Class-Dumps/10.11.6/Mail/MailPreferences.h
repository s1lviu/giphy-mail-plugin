//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MailPreferences : NSPreferences
{
}

+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (void)configureFetchFrequencyPopUp:(id)arg1;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
- (void)changeFont:(id)arg1;
- (NSUInteger)validModesForFontPanel:(id)arg1;
- (id)windowTitle;
- (void)windowWillClose:(id)arg1;

@end

