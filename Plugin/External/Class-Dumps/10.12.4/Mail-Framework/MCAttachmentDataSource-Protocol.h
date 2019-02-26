//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSNumber;

@protocol MCAttachmentDataSource <NSObject>
- (NSNumber *)approximateSizeForAccessLevel:(long long)arg1;
@property(readonly, nonatomic) BOOL canResultsBeCached;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(void (^)(NSData *, NSError *))arg2;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(void (^)(MCFileWrapper *, NSError *))arg2;
@property(readonly, nonatomic) BOOL isDirectory;
@end

