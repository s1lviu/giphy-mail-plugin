//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFSyncedFile.h>

@interface MFSyncedSmartMailboxesFile : MFSyncedFile
{
}

+ (id)syncedSmartMailboxesFile;
- (id)readSmartMailboxes;
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;
- (void)writeSmartMailboxes:(id)arg1;

@end

