//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSButton, NSMatrix, NSPopUpButton, NSTextField;

@interface ComposingPreferences : NSPreferencesModule
{
    BOOL _endEditingSimply;
    NSPopUpButton *_defaultFormatButton;
    NSButton *_alwaysCCMyselfSwitch;
    NSPopUpButton *_ccOrBccButton;
    NSButton *_replyUsingSameFormatSwitch;
    NSButton *_expandAliasesSwitch;
    NSButton *_useQuoteBarsSwitch;
    NSPopUpButton *_spellCheckingPopUpButton;
    NSButton *_replyQuotingSwitch;
    NSMatrix *_quotingBehaviorMatrix;
    NSTextField *_quotingBehaviorLabel;
    NSButton *_matchDomainsSwitch;
    NSTextField *_matchingDomainField;
    NSPopUpButton *_sendingAccountButton;
}

- (void)_postComposePreferencesChanged;
- (void)_setComposeMode:(long long)arg1;
- (void)_sizeToFitWithinSuperview:(id)arg1;
- (void)alwaysCCMyselfClicked:(id)arg1;
@property(nonatomic) __weak NSButton *alwaysCCMyselfSwitch; // @synthesize alwaysCCMyselfSwitch=_alwaysCCMyselfSwitch;
@property(nonatomic) __weak NSPopUpButton *ccOrBccButton; // @synthesize ccOrBccButton=_ccOrBccButton;
- (void)controlTextDidEndEditing:(id)arg1;
@property(nonatomic) __weak NSPopUpButton *defaultFormatButton; // @synthesize defaultFormatButton=_defaultFormatButton;
- (void)defaultMessageFormatChanged:(id)arg1;
@property(nonatomic) BOOL endEditingSimply; // @synthesize endEditingSimply=_endEditingSimply;
- (void)expandAliasesClicked:(id)arg1;
@property(nonatomic) __weak NSButton *expandAliasesSwitch; // @synthesize expandAliasesSwitch=_expandAliasesSwitch;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)initializeFromDefaults;
- (BOOL)isResizable;
- (void)matchDomainsClicked:(id)arg1;
@property(nonatomic) __weak NSButton *matchDomainsSwitch; // @synthesize matchDomainsSwitch=_matchDomainsSwitch;
@property(nonatomic) __weak NSTextField *matchingDomainField; // @synthesize matchingDomainField=_matchingDomainField;
- (void)quotingBehaviorChanged:(id)arg1;
@property(nonatomic) __weak NSTextField *quotingBehaviorLabel; // @synthesize quotingBehaviorLabel=_quotingBehaviorLabel;
@property(nonatomic) __weak NSMatrix *quotingBehaviorMatrix; // @synthesize quotingBehaviorMatrix=_quotingBehaviorMatrix;
- (void)replyQuotingBehaviorChanged:(id)arg1;
@property(nonatomic) __weak NSButton *replyQuotingSwitch; // @synthesize replyQuotingSwitch=_replyQuotingSwitch;
- (void)replyUsingSameFormatClicked:(id)arg1;
@property(nonatomic) __weak NSButton *replyUsingSameFormatSwitch; // @synthesize replyUsingSameFormatSwitch=_replyUsingSameFormatSwitch;
@property(nonatomic) __weak NSPopUpButton *sendingAccountButton; // @synthesize sendingAccountButton=_sendingAccountButton;
- (void)sendingAccountClicked:(id)arg1;
@property(nonatomic) __weak NSPopUpButton *spellCheckingPopUpButton; // @synthesize spellCheckingPopUpButton=_spellCheckingPopUpButton;
@property(nonatomic) __weak NSButton *useQuoteBarsSwitch; // @synthesize useQuoteBarsSwitch=_useQuoteBarsSwitch;
- (void)spellCheckingBehaviorChanged:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (void)useQuoteBarsClicked:(id)arg1;

@end

