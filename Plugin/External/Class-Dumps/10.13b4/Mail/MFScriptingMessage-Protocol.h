//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSScriptObjectSpecifier, NSString;

@protocol MFScriptingMessage <NSObject>
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
@property(readonly) NSScriptObjectSpecifier *objectSpecifier;
@property(readonly, copy, nonatomic) NSArray *toRecipients;

@optional
- (void)replaceFormattedAddress:(NSString *)arg1 withAddress:(NSString *)arg2 forKey:(NSString *)arg3;
@end

