//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFMailbox.h>

@interface MFSpecialMailbox : MFMailbox
{
}

+ (id)VIPSendersMailbox;
+ (id)appleScriptNameForMailboxType:(int)arg1;
+ (id)archiveMailbox;
+ (id)draftsMailbox;
+ (id)flagMailboxes;
+ (id)flagsMailbox;
+ (id)inboxMailbox;
+ (id)junkMailbox;
+ (id)outboxMailbox;
+ (id)sentMessagesMailbox;
+ (id)specialMailboxForMailboxType:(int)arg1;
+ (id)specialMailboxWithIdentifier:(id)arg1;
+ (id)trashMailbox;
+ (void)updateVisibleFlagMailboxes;
+ (id)visibleFlagMailboxes;
- (id)_initWithName:(id)arg1 type:(int)arg2 uuid:(id)arg3;
- (id)_loadUserInfo;
- (void)_updateDontIndexFlagFile;
- (id)_viewerAttributesKey;
- (id)account;
- (BOOL)allCriteriaMustBeSatisfied;
- (id)appleScriptKey;
- (id)childAtIndex:(NSUInteger)arg1;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)children;
- (id)criteria;
- (id)criterion;
- (NSUInteger)displayCount;
- (id)displayName;
- (NSUInteger)indexOfChild:(id)arg1;
- (NSUInteger)indexToInsertChildMailbox:(id)arg1;
- (id)messages;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)arg1 hidingGmail:(BOOL)arg2;
- (NSUInteger)numberOfChildren;
- (NSUInteger)numberOfSortedChildrenHidingGmail:(BOOL)arg1;
- (NSUInteger)numberOfVisibleChildrenHidingGmail:(BOOL)arg1;
- (id)objectSpecifier;
- (void)saveUserInfo;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)setCriteria:(id)arg1;
- (id)sortedChildAtIndex:(NSUInteger)arg1 hidingGmail:(BOOL)arg2;
- (id)tildeAbbreviatedPath;
- (id)visibleChildAtIndex:(NSUInteger)arg1;

@end

