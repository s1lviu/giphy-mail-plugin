//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MailUsageStatistics : NSObject
{
}

+ (BOOL)_imapAccount:(id)arg1 hasCapability:(NSUInteger)arg2;
+ (void)_messageTrace:(id)arg1;
+ (void)_messageTraceAccounts;
+ (void)_messageTraceLoadedBundles;
+ (void)_messageTracePreferences;
+ (void)_messageTraceUILayout;
+ (void)_messageTraceUsage;
+ (void)startMessageTracing;

@end

