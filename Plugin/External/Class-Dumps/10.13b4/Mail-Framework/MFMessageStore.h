//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCMessageDataSource-Protocol.h"

@class MCActivityMonitor, MCInvocationQueue, MFMailAccount, MFMailbox, NSArray, NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, NSTimer;

@interface MFMessageStore : NSObject <MCMessageDataSource>
{
    id _retainCountLock;
    BOOL _haveOpenLockFile;
    BOOL _isWritingChangesToDisk;
    BOOL _isTryingToClose;
    id _cacheLock;
    NSCache *_headerCache;
    NSCache *_bodyCache;
    // Error parsing type: Ai, name: _storeState
    NSTimer *_timer;
    MFMailbox *_mailbox;
    NSMutableArray *_allMessages;
    MFMailAccount *_account;
    NSMutableSet *_uniqueStrings;
    BOOL _isReadOnly;
    BOOL _compactOnClose;
    BOOL _hasUnsavedChangesToMessageData;
    BOOL _forceInvalidation;
    MCActivityMonitor *_openMonitor;
    NSOperationQueue *_deleteQueue;
    MCInvocationQueue *_openAndCloseMailboxQueue;
}

+ (void)_autosaveMessageStore:(id)arg1;
+ (id)_copyRawAvailableStoreForMailbox:(id)arg1 wantsCreate:(BOOL)arg2 shouldCreate:(char *)arg3;
+ (id)_storeCreationMarker;
+ (long long)copyMessages:(id)arg1 toMailbox:(id)arg2 shouldDelete:(BOOL)arg3;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1 notIndexable:(BOOL)arg2;
+ (id)currentlyAvailableStoreForMailbox:(id)arg1;
+ (id)currentlyAvailableStoresForAccount:(id)arg1;
+ (id)descriptionOfOpenStores;
+ (void)initialize;
+ (NSUInteger)numberOfCurrentlyOpenStores;
+ (void)registerAvailableStore:(id)arg1 forMailbox:(id)arg2;
+ (void)removeStoreFromCache:(id)arg1;
+ (id)succesfulMessagesFromMessages:(id)arg1 missedMessages:(id)arg2;
- (BOOL)_acquireLockFile;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)_cancelAutosave;
- (void)_cleanupSynchronouslyIfCancelOpenPosted;
- (id)_defaultRouterDestination;
- (void)_flushAllMessageData;
- (void)_invalidate;
- (void)_invalidateInBackground;
- (void)_invalidateObjectCachesForKey:(id)arg1;
- (BOOL)_isReadyToBeInvalidated;
- (void)_messageStoreCommonInit;
- (NSUInteger)_numberOfMessagesToCache;
- (void)_removeLockFile;
- (void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (void)_setFlagsAndColorForMessages:(id)arg1;
- (void)_setNeedsAutosave;
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;
- (BOOL)_updateFlagColor:(BOOL)arg1 forMessage:(id)arg2;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
@property(readonly, nonatomic) MFMailAccount *account;
- (void)addMessagesToAllMessages:(id)arg1;
- (void)addUniquedStrings:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allMailboxRepresentations;
@property(readonly, nonatomic) BOOL allowsAppend;
@property(readonly, nonatomic) BOOL allowsDeleteInPlace;
@property(readonly, nonatomic) BOOL allowsOverwrite;
- (long long)appendMessages:(id)arg1 missedMessages:(id)arg2 newMessages:(id)arg3 newDocumentIDsByOld:(id)arg4 flagsToSet:(id)arg5 appendReason:(long long)arg6 userInitiated:(BOOL)arg7 error:(id *)arg8;
- (void)async_deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)async_setLocalFlagsForMessages:(id)arg1;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
@property(readonly, nonatomic) BOOL canCompact;
@property(readonly) BOOL canRebuild;
- (void)cancelOpen;
- (void)cleanupAsynchronously;
- (void)cleanupSynchronously;
- (id)colorForMessage:(id)arg1;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createDummyMailboxIfNecessary;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
@property(readonly, nonatomic) NSOperationQueue *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(readonly, copy) NSString *description;
- (void)didOpenWithMessages:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) const char *displayNameForLogging;
- (void)doCompact;
- (void)fetchSynchronouslyForKnownChanges;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (void)flushAllCaches;
@property BOOL forceInvalidation; // @synthesize forceInvalidation=_forceInvalidation;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7;
@property BOOL hasUnsavedChangesToMessageData; // @synthesize hasUnsavedChangesToMessageData=_hasUnsavedChangesToMessageData;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (NSUInteger)indexOfMessageInAllMessages:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;
- (void)invalidateMessage:(id)arg1;
- (void)invalidateMessages:(id)arg1;
- (void)invalidateSavingChanges:(BOOL)arg1;
- (void)invalidateSyncEngine;
@property BOOL isFirstTimeSync;
@property(readonly, nonatomic) BOOL isOpened;
@property BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly) BOOL isSortedAscending;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly) NSDate *lastSyncDate;
@property(readonly, copy, nonatomic) NSString *lockFilePath;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1;
- (id)messagesForDocumentID:(id)arg1;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereUpdated:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (id)objectSpecifier;
- (id)objectSpecifierForMessage:(id)arg1;
@property(readonly, nonatomic) MCInvocationQueue *openAndCloseMailboxQueue; // @synthesize openAndCloseMailboxQueue=_openAndCloseMailboxQueue;
- (void)openAsynchronously;
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;
@property(retain) MCActivityMonitor *openMonitor; // @synthesize openMonitor=_openMonitor;
- (void)openSynchronously;
- (void)queueSaveChangesInvocation;
- (void)rebuildTableOfContentsAsynchronously;
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;
- (oneway void)release;
- (void)removeAllMessagesAtIndexes:(id)arg1;
- (void)removeMessageFromAllMessages:(id)arg1;
- (void)reset;
- (void)resetAllMessages;
- (id)retain;
- (NSUInteger)retainCount;
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;
- (id)routeMessages:(id)arg1 isUserAction:(BOOL)arg2 fetchingBodies:(BOOL)arg3 messagesNeedingBodies:(id)arg4;
- (void)saveChanges;
- (void)saveSnippetsForMessages:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(id)arg3;
- (void)setAllMessages:(id)arg1;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)setPrimitiveFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)setStoreState:(int)arg1 fromState:(int)arg2;
- (void)setUniquedStrings:(id)arg1;
@property(readonly, nonatomic) BOOL shouldCallCompactWhenClosing;
- (BOOL)shouldSendUserNotificationForMessage:(id)arg1;
- (id)snippetsForMessages:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sortOrder;
@property(readonly, copy, nonatomic) NSString *status;
@property(readonly) int storeState;
- (void)structureDidChange;
- (void)suggestSortOrder:(id)arg1 ascending:(BOOL)arg2;
@property(readonly, nonatomic) BOOL supportsSnippets;
@property(readonly) NSUInteger totalCount;
- (long long)undoAppendOfLibraryIDs:(id)arg1;
- (id)uniquedString:(id)arg1;
- (void)updateBodyFlagsForMessage:(id)arg1 topLevelMimePart:(id)arg2;
- (void)updateMessageColorsSynchronouslyForMessages:(id)arg1 postingNotification:(BOOL)arg2;
- (void)updateMessages:(id)arg1 updateColor:(BOOL)arg2 updateNumberOfAttachments:(BOOL)arg3;
- (long long)updateMessages:(id)arg1 withLibraryIDs:(id)arg2 newMessages:(id)arg3;
- (void)updateMetadataAsynchronously;
- (id)willDeallocPerformingInStoreCacheLock:(char *)arg1;
- (void)willOpen;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

