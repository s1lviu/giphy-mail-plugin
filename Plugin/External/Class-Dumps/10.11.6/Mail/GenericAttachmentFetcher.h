//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCActivityTarget-Protocol.h"

@class NSArray, NSMutableSet, NSString;

@interface GenericAttachmentFetcher : NSObject <MCActivityTarget>
{
    NSMutableSet *_attachmentsBeingDownloaded;
    NSArray *_attachments;
    GenericAttachmentFetcher *_me;
}

- (void)_downloadCompleted:(id)arg1;
- (void)_saveAttachments:(id)arg1 itemManager:(id)arg2;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void)beginBackgroundLoad;
- (void)beginSaveOfAttachments:(id)arg1 toTemporaryFolderWithName:(id)arg2 taskName:(id)arg3;
- (void)cancelBackgroundLoad;
- (void)dealloc;
- (void)didFinishBackgroundLoadOfAttachment:(id)arg1;
- (void)didSaveAttachment:(id)arg1 toPath:(id)arg2;
- (void)didSaveAttachments:(id)arg1 paths:(id)arg2;
- (void)downloadedAllAttachments;
@property(readonly, copy, nonatomic) NSArray *downloadedAttachments;
- (id)init;
- (id)initWithAttachments:(id)arg1;
@property(retain, nonatomic) GenericAttachmentFetcher *me; // @synthesize me=_me;
@property(readonly, nonatomic) double temporaryFolderTimeout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

