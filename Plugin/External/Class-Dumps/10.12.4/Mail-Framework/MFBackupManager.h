//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MFMailbox, NSArray, NSDictionary, NSEnumerator, NSMapTable, NSMutableDictionary, NSString, NSURL;

@interface MFBackupManager : NSObject
{
    NSMapTable *_mailboxBackupPaths;
    NSMutableDictionary *_mailboxesWithKnownContents;
    id _editableMessagesLock;
    id _timeMachineRestoreLock;
    BOOL _registeredForEditableMessageNotifications;
    MFMailbox *_topLevelRecoveryMailbox;
    NSDictionary *_lastSavedTableOfContents;
    NSArray *_messagePathsToRestore;
    NSURL *_mailboxDirectoryToRestore;
    NSString *_mailboxNameForRestoring;
}

+ (id)sharedManager;
- (void)_addMailbox:(id)arg1 toSection:(long long)arg2 sections:(id)arg3 messagePool:(id)arg4;
- (id)_backupPathForMailbox:(id)arg1 withParentPath:(id)arg2 pathsCache:(id)arg3;
- (id)_dictionaryForMailbox:(id)arg1 parent:(id)arg2 messagePool:(id)arg3;
- (id)_dictionaryForMessage:(id)arg1 includeRecipients:(BOOL)arg2;
- (id)_dictionaryForSection:(long long)arg1;
- (id)_expandedMailboxes:(id)arg1;
- (id)_recoveryMailboxWithSuggestedName:(id)arg1 reuseMailbox:(BOOL)arg2;
- (id)_reducedPathFromFullPath:(id)arg1;
- (id)_reducedPathFromFullPath:(id)arg1 supportDirectory:(id)arg2;
- (BOOL)_restoreMailboxAtURL:(id)arg1 intoMailbox:(id)arg2 newMessages:(id)arg3;
- (long long)_sectionForMailbox:(id)arg1;
- (void)_setupDefaultTopLevelRecoveryMailbox;
- (BOOL)_shouldSaveDisplayNameForMailbox:(id)arg1;
@property(readonly, nonatomic) NSEnumerator *backupMailboxesEnumerator;
- (id)backupPathForMailbox:(id)arg1;
- (id)backupPathForMailbox:(id)arg1 pathsCache:(id)arg2;
- (void)dealloc;
- (void)editableMessagesWereAdded:(id)arg1;
- (void)editableMessagesWereDeleted:(id)arg1;
- (BOOL)hasPendingRestoreIsMailbox:(char *)arg1;
- (id)init;
- (void)invalidateCaches;
@property(copy) NSDictionary *lastSavedTableOfContents; // @synthesize lastSavedTableOfContents=_lastSavedTableOfContents;
@property(retain) NSURL *mailboxDirectoryToRestore; // @synthesize mailboxDirectoryToRestore=_mailboxDirectoryToRestore;
@property(copy) NSString *mailboxNameForRestoring; // @synthesize mailboxNameForRestoring=_mailboxNameForRestoring;
@property(readonly, copy) NSString *mailboxNameToBeRestored;
@property(copy) NSArray *messagePathsToRestore; // @synthesize messagePathsToRestore=_messagePathsToRestore;
@property(readonly) NSUInteger numberOfMessagesToBeRestored;
- (void)performPendingRestore;
- (void)prepareToRestoreMailboxAtURL:(id)arg1 intoMailboxNamed:(id)arg2;
- (void)prepareToRestoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2;
@property BOOL registeredForEditableMessageNotifications; // @synthesize registeredForEditableMessageNotifications=_registeredForEditableMessageNotifications;
- (id)restoreMailboxAtURL:(id)arg1 intoMailboxNamed:(id)arg2 postNotification:(BOOL)arg3;
- (BOOL)restoreMailboxesAtURL:(id)arg1 intoMailbox:(id)arg2 restoredMessages:(id)arg3;
- (id)restoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2 reuseMailbox:(BOOL)arg3 createdMailboxNamed:(id *)arg4 postNotification:(BOOL)arg5;
- (BOOL)saveTableOfContents:(id)arg1;
@property(retain) MFMailbox *topLevelRecoveryMailbox; // @synthesize topLevelRecoveryMailbox=_topLevelRecoveryMailbox;
- (BOOL)shouldSaveMessagesForMailbox:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *tableOfContents;
- (void)timeMachineRestoreFinished:(id)arg1;

@end

