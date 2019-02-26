//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFMessageStore.h>

@class MFTableOfContents, NSArray, NSData;

@interface MFNeXTStore : MFMessageStore
{
    NSData *_mboxData;
    MFTableOfContents *_toc;
    BOOL _mboxIsOnSMB;
    BOOL _haveUpdatedMetadata;
    BOOL _importMode;
    NSData *_incomingMboxData;
    BOOL _rebuildingTOC;
}

+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
- (void)_addIDsForAppendedMessages:(id)arg1 toArray:(id)arg2;
- (id)_appendMessage:(id)arg1 toFile:(id)arg2;
- (long long)_appendMessages:(id)arg1 successes:(id *)arg2 failures:(id *)arg3 mboxName:(id)arg4 tableOfContents:(id)arg5;
- (void)_deleteAttachments:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)_flushAllMessageData;
- (void)_incorporateMailFromIncoming;
- (void)_invalidate;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_releaseMboxData;
- (void)_resetAllMessages;
- (long long)_writeMessagesToIncomingMail:(id)arg1 missedMessages:(id)arg2 newMessageIDs:(id)arg3;
- (BOOL)allowsAppend;
- (long long)appendMessages:(id)arg1 missedMessages:(id)arg2 newMessages:(id)arg3 newDocumentIDsByOld:(id)arg4 flagsToSet:(id)arg5 appendReason:(long long)arg6 userInitiated:(BOOL)arg7 error:(id *)arg8;
- (BOOL)canCompact;
- (BOOL)canRebuild;
- (void)dealloc;
- (void)doCompact;
- (id)incomingMessages;
- (id)init;
- (BOOL)isSortedAscending;
- (id)lockFilePath;
- (id)messageForMessageID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *messagesForImporter;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
@property BOOL rebuildingTOC; // @synthesize rebuildingTOC=_rebuildingTOC;
- (BOOL)shouldCallCompactWhenClosing;
- (id)sortOrder;
- (void)suggestSortOrder:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)tableOfContents:(id)arg1 loadedMessages:(id)arg2;
- (long long)undoAppendOfLibraryIDs:(id)arg1;
- (void)updateMetadata;
- (void)writeUpdatedMessageDataToDisk;

@end

