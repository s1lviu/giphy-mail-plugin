//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

@class ACAccount, NSString;

@protocol EMAccountFactory
- (id <EMAccount>)accountWithIdentifier:(NSString *)arg1;
- (id <EMAccount>)accountWithSystemAccount:(ACAccount *)arg1;
@end

