//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFEWSLocalMessageAction.h>

@class NSArray;

@interface MFEWSDeleteMessageAction : MFEWSLocalMessageAction
{
    NSArray *_itemIDs;
}

- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 itemIDs:(id)arg5;
@property(readonly, copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (id)newSyncOperation;

@end

