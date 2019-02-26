//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MFConversationCalculator : NSObject
{
    BOOL _logConversationCalculationPerformance;
    BOOL _logConversationCalculationTrace;
    BOOL _logConversationCalculationSubjectPrefixTrace;
    BOOL _forceConversationSplits;
    BOOL _alwaysValidateConversations;
    BOOL _recordConversationCalculationPerformanceMetrics;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)_addMessage:(id)arg1 toConversation:(long long)arg2 withConversationPosition:(int)arg3;
- (void)_calculateConversationForMessage:(id)arg1;
- (int)_conversationPositionForMessageWithRowID:(long long)arg1 dateReceived:(int)arg2 conversationID:(long long)arg3 context:(id)arg4;
- (long long)_createNewConversationFromMessage:(id)arg1;
- (void)_fixupConversationPositionsForConversation:(id)arg1;
- (void)_mergeMessagesInConversations:(id)arg1 withConversation:(id)arg2;
- (void)_updateAllRowsMissingFuzzyAncestorWithHandle:(id)arg1;
- (void)_updateAllRowsMissingRootValueWithHandle:(id)arg1;
- (void)_updatePrefixWithHandle:(id)arg1 withNewPrefix:(id)arg2 forMessagesWithSubject:(long long)arg3;
@property(nonatomic) BOOL alwaysValidateConversations; // @synthesize alwaysValidateConversations=_alwaysValidateConversations;
- (void)dealloc;
@property(nonatomic) BOOL forceConversationSplits; // @synthesize forceConversationSplits=_forceConversationSplits;
- (id)init;
- (BOOL)isRootMessageSubject:(id)arg1;
- (BOOL)isRootSubjectPrefix:(id)arg1;
@property(nonatomic) BOOL logConversationCalculationPerformance; // @synthesize logConversationCalculationPerformance=_logConversationCalculationPerformance;
@property(nonatomic) BOOL logConversationCalculationSubjectPrefixTrace; // @synthesize logConversationCalculationSubjectPrefixTrace=_logConversationCalculationSubjectPrefixTrace;
@property(nonatomic) BOOL logConversationCalculationTrace; // @synthesize logConversationCalculationTrace=_logConversationCalculationTrace;
@property(nonatomic) BOOL recordConversationCalculationPerformanceMetrics; // @synthesize recordConversationCalculationPerformanceMetrics=_recordConversationCalculationPerformanceMetrics;
- (void)updateAllRowsMissingConversationsWithHandle:(id)arg1 conversationUserInfo:(id)arg2 conversationsWereReset:(BOOL)arg3 activityProgressUpdater:(id)arg4;
- (void)updateConversationRootsWithHandle:(id)arg1 onlyForMessagesMissingRoots:(BOOL)arg2;
- (void)updateConversationsIfNeededWithHandle:(id)arg1;
- (BOOL)updateSubjectPrefixesWithHandle:(id)arg1 onlyForMessagesMissingConversations:(BOOL)arg2;

@end

