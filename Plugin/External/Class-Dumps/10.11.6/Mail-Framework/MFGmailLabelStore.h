//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFLibraryStore.h>

@interface MFGmailLabelStore : MFLibraryStore
{
}

- (id)_allMailStore;
- (void)_messagesAddedToLibrary:(id)arg1;
- (id)_messagesFromAllMailWithRemoteIDs:(id)arg1;
- (long long)_removeOurLabelFromMessages:(id)arg1;
- (BOOL)allowsOverwrite;
- (long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 forMove:(BOOL)arg7 error:(id *)arg8;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (id)lastMessageWithHeaders:(id)arg1 inMailbox:(id)arg2;
- (long long)undoAppendOfMessageIDs:(id)arg1;

@end

