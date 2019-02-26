//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFEWSResponseOperation.h>

@class EWSCopyItemResponseType, NSArray;

@interface MFEWSCopyItemsResponseOperation : MFEWSResponseOperation
{
    NSArray *_newEWSItemIdStrings;
    NSUInteger _expectedResponseCount;
}

@property(copy) NSArray *destinationEWSItemIdStrings; // @synthesize destinationEWSItemIdStrings=_newEWSItemIdStrings;
- (void)executeOperation;
@property(nonatomic) NSUInteger expectedResponseCount; // @synthesize expectedResponseCount=_expectedResponseCount;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSCopyItemResponseType *response;

@end

