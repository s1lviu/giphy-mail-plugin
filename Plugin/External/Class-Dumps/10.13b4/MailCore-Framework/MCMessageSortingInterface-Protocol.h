//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

@class NSArray, NSString;

@protocol MCMessageSortingInterface <NSObject>
@property(readonly, nonatomic) int colorForSort;
@property(readonly) double dateLastViewedAsTimeIntervalSince1970;
@property(readonly) double dateReceivedAsTimeIntervalSince1970;
@property(readonly) double dateSentAsTimeIntervalSince1970;
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) id mailbox;
@property(readonly, nonatomic) long long messageFlags;
@property(readonly, nonatomic) NSUInteger messageSize;
@property(readonly, nonatomic) NSUInteger numberOfAttachments;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly, copy) NSString *subject;
@property(readonly) NSUInteger subjectPrefixLength;
@property(readonly, copy) NSArray *to;
@end

