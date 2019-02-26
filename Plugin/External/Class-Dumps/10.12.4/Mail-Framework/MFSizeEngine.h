//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCActivityTarget-Protocol.h"

@class MCActivityMonitor, MCQuotaUsage, MFMailAccount, NSString;

@interface MFSizeEngine : NSObject <MCActivityTarget>
{
    BOOL _isActive;
    MFMailAccount *_account;
    MCActivityMonitor *_monitor;
    long long _monitorAccessKey;
    MCQuotaUsage *_totalUsage;
}

- (void)_startWorkerThreadIfNeeded;
- (void)_workerThreadFinished:(id)arg1;
@property(readonly, nonatomic) MFMailAccount *account; // @synthesize account=_account;
- (void)cancel;
- (id)init;
- (id)initWithAccount:(id)arg1;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) long long monitorAccessKey; // @synthesize monitorAccessKey=_monitorAccessKey;
- (void)refresh;
@property(readonly, nonatomic) BOOL shouldStartWorkerThread;
- (void)start;
- (void)stop;
@property(readonly, nonatomic) MCQuotaUsage *totalUsage; // @synthesize totalUsage=_totalUsage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

