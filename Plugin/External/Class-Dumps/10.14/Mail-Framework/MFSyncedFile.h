//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSOperationQueue, NSSet, NSString, NSURL;

@interface MFSyncedFile : NSObject <NSFilePresenter>
{
    NSURL *_cloudURL;
    id _cloudURLLock;
    id _cloudFileLock;
    NSURL *_URL;
    long long _syncState;
}

+ (void)_checkForiCloudMetadata;
+ (id)_currentiCloudAccount;
+ (id)_metadata;
+ (id)_metadataURL;
+ (void)_setMetadata:(id)arg1;
+ (void)initialize;
+ (id)log;
+ (id)syncedFileForRelativePath:(id)arg1;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_clearMetadata;
- (BOOL)_deleteLocalFileAndReturnError:(id *)arg1;
- (BOOL)_fileExistsInCloud;
- (void)_handleIdentityChange:(id)arg1;
- (id)_iCloudAccount;
- (BOOL)_mergeUpdateLocal:(char *)arg1 error:(id *)arg2;
- (id)_readPlistWithOptions:(NSUInteger)arg1 error:(id *)arg2;
- (void)_resolveConflicts;
- (void)_setiCloudAccount;
- (BOOL)_signedInState;
- (BOOL)_syncWithCloudPostNotification:(BOOL)arg1 error:(id *)arg2;
- (id)_ubiquitousFileForVersion:(long long)arg1;
- (BOOL)_updateLocalPostNotification:(BOOL)arg1 didUpdate:(char *)arg2 error:(id *)arg3;
- (id)_upgradedLegacyDataIsReachable:(char *)arg1;
- (BOOL)_waitForMetadata;
- (BOOL)_writeData:(id)arg1 options:(NSUInteger)arg2 error:(id *)arg3;
- (BOOL)_writeDataAfterResolvingConflict:(id)arg1 options:(NSUInteger)arg2 error:(id *)arg3;
- (BOOL)_writeDataLocally:(id)arg1 options:(NSUInteger)arg2 setMetadata:(BOOL)arg3 postNotification:(BOOL)arg4 error:(id *)arg5;
- (BOOL)_writeDataToCloud:(id)arg1 options:(NSUInteger)arg2 error:(id *)arg3;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
@property(readonly) NSURL *cloudURL;
- (void)dealloc;
- (void)deleteFile;
@property(nonatomic) BOOL hasMigratedFromLegacy;
- (id)init;
- (id)initWithRelativePath:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)readDataWithOptions:(NSUInteger)arg1;
- (id)readPlistWithOptions:(NSUInteger)arg1;
@property long long syncState; // @synthesize syncState=_syncState;
- (void)writeData:(id)arg1 options:(NSUInteger)arg2;
- (void)writePlist:(id)arg1 options:(NSUInteger)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

