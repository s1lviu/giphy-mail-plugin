//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCAttachmentDataSource.h"

@class NSMutableSet, NSString, NSURL;

@interface MCFileURLAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    NSMutableSet *_operations;
    NSURL *_fileURL;
}

- (id)_backgroundFileReadingQueue;
- (NSUInteger)approximateSizeForAccessLevel:(long long)arg1;
@property(readonly, nonatomic) BOOL canResultsBeCached;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (void)dealloc;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(id)arg2;
- (id)init;
- (id)initWithFileURL:(id)arg1;
@property(readonly, nonatomic) BOOL isDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

