//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray;

@protocol MailboxesOutlineViewControllerDelegate <NSObject>
- (void)focusMessages;
- (void)selectAllMessages;
@property(readonly, nonatomic) long long viewerNumber;

@optional
- (void)mailboxSelectionChanged:(NSArray *)arg1;
@end

