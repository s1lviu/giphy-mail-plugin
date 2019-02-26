//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MFMessageStore.h"

@class MFLibraryStoreMessageConsumer, MFMessageCriterion, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface MFLibraryStore : MFMessageStore
{
    id _openOptionsLock;
    unsigned int _openOptions;
    NSMutableSet *_memberMessageIDs;
    id _allMessagesDuringOpeningLock;
    NSMutableArray *_allMessagesDuringOpening;
    id _consumerLock;
    MFLibraryStoreMessageConsumer *_consumer;
    NSString *_url;
    MFMessageCriterion *_criterion;
}

+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (unsigned int)defaultLoadOptions;
+ (id)filterMessages:(id)arg1 throughSmartMailbox:(id)arg2;
+ (void)initialize;
+ (id)sharedInstance;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
- (void)_asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (void)_cancelAutosave;
- (void)_cancelQueryAndClearConsumer:(BOOL)arg1;
- (BOOL)_criterionContainsGmailLabelCriterion:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)_flushAllMessageData;
- (void)_invalidate;
- (void)_invalidateObjectCachesForKey:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_messagesAddedToLibrary:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_messagesUpdated:(id)arg1;
- (NSUInteger)_numberOfMessagesToCache;
- (unsigned int)_openOptions;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_setFlagsAndColorForMessages:(id)arg1;
- (id)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 async:(BOOL)arg3;
- (id)_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 async:(BOOL)arg3;
- (void)_setNeedsAutosave;
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (void)_updateCriterionFromMailbox:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (BOOL)allowsAppend;
- (BOOL)allowsOverwrite;
- (long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 forMove:(BOOL)arg7 error:(id *)arg8;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)async_setLocalFlagsForMessages:(id)arg1;
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (BOOL)canCompact;
- (void)cancelOpen;
- (void)cancelQuery;
- (void)cleanupAsynchronously;
- (void)cleanupSynchronously;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
@property(retain) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
- (id)dataForMimePart:(id)arg1;
- (void)dealloc;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)doCompact;
- (id)duplicateCopiesOfMessages:(id)arg1;
- (id)duplicateCopiesOfMessages:(id)arg1 withDocumentIDs:(id)arg2 excludingMessageIDs:(id)arg3;
- (id)filterMessagesByMembership:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (BOOL)hasCacheFileForMessage:(id)arg1;
- (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithCriterion:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;
- (id)lastMessageWithHeaders:(id)arg1 inMailbox:(id)arg2;
- (void)libraryFinishedSendingMessagesToLibraryStoreMessageConsumer:(id)arg1;
@property(readonly, nonatomic) long long mailboxID;
- (id)messageForMessageID:(id)arg1;
- (BOOL)messageHasBeenDeleted:(id)arg1;
- (id)messagesForDocumentID:(id)arg1;
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3 options:(id)arg4;
- (id)mutableCopyOfAllMessages;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromLibraryStoreMessageConsumer:(id)arg3 options:(id)arg4;
@property(readonly, copy) NSArray *notificationMessagesFromOpen;
- (id)objectSpecifierForMessage:(id)arg1;
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (id)openSynchronouslyUpdatingMetadata:(BOOL)arg1 returnRetainedMessages:(BOOL)arg2;
- (void)rebuildTableOfContentsAsynchronously;
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;
- (void)reset;
- (void)saveSnippetsForMessages:(id)arg1;
- (void)setFlagsAndColorForMessages:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
@property(copy) NSString *url; // @synthesize url=_url;
- (BOOL)shouldCallCompactWhenClosing;
- (id)snippetsForMessages:(id)arg1;
- (BOOL)supportsSnippets;
- (NSUInteger)totalCount;
- (long long)undoAppendOfMessageIDs:(id)arg1;
- (void)updateMetadata;
- (void)writeUpdatedMessageDataToDisk;

@end

