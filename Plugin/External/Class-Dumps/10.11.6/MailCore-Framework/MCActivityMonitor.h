//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class MCError, NSArray, NSInvocation, NSMachPort, NSMutableSet, NSString;

@interface MCActivityMonitor : NSObject <NSMachPortDelegate>
{
    NSString *_taskName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    NSMutableSet *_subMonitors;
    NSMachPort *_cancelPort;
    id _delegate;
    id <MCActivityTarget> _target;
    double _doneValue;
    double _previousDoneness;
    double _itemValue;
    double _itemMaxValue;
    double _startTime;
    double _itemLastNotifiedTime;
    double _percentDone;
    long long _shouldUnifyDoneness;
    long long _currentProgressStage;
    long long _numberOfProgressStages;
    long long _key;
    NSUInteger _itemsDone;
    NSUInteger _itemsTotal;
    NSUInteger _itemFudgeFactor;
    int _changeCount;
    long long _activityType;
    BOOL _canCancel;
    BOOL _shouldCancel;
    BOOL _isActive;
    BOOL _isProgressing;
    unsigned char _priority;
    BOOL _shouldPromptUserOnTermination;
    NSInvocation *_cancelInvocation;
    NSString *_itemDescription;
    double _itemMinValue;
    MCError *_error;
}

+ (BOOL)automaticallyNotifiesObserversOfCanBeCancelled;
+ (BOOL)automaticallyNotifiesObserversOfIsProgressing;
+ (BOOL)automaticallyNotifiesObserversOfPercentDone;
+ (BOOL)automaticallyNotifiesObserversOfStatusMessage;
+ (id)currentMonitor;
+ (id)currentMonitorIfExists;
+ (double)determinateProgress;
+ (void)setCurrentMonitor:(id)arg1;
- (void)_didChange;
- (long long)acquireExclusiveAccessKey;
- (id)activityDescription;
@property(retain) id <MCActivityTarget> activityTarget;
@property(readonly, copy, nonatomic) NSArray *activityTargets;
@property long long activityType;
- (void)addActivityTarget:(id)arg1;
- (void)addSubMonitor:(id)arg1;
- (void)beginProgressFor:(long long)arg1;
@property(nonatomic) BOOL canBeCancelled;
- (void)cancel;
@property(retain) NSInvocation *cancelInvocation; // @synthesize cancelInvocation=_cancelInvocation;
@property(copy) NSMachPort *cancelPort;
@property(readonly, nonatomic) int changeCount;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double doneValue;
@property(retain) MCError *error; // @synthesize error=_error;
- (void)handlePortMessage:(id)arg1;
- (void)incrementItemValue:(double)arg1;
- (void)incrementItemsDone:(NSUInteger)arg1;
- (void)incrementItemsTotal:(NSUInteger)arg1;
- (id)init;
@property(readonly, nonatomic) BOOL isActive;
@property(nonatomic) BOOL isProgressing;
@property(copy) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(nonatomic) double itemMaxValue;
@property(nonatomic) double itemMinValue; // @synthesize itemMinValue=_itemMinValue;
@property(nonatomic) double itemValue;
@property(nonatomic) NSUInteger itemsDone;
@property(nonatomic) NSUInteger itemsTotal;
- (void)markCompleted:(BOOL)arg1;
@property double percentDone;
- (void)postActivityFinished;
- (void)postActivityStarting;
@property(nonatomic) unsigned char priority; // @synthesize priority=_priority;
- (void)relinquishExclusiveAccessKey:(long long)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)removeSubMonitor:(id)arg1;
- (void)resetActivityType;
- (void)resetItemValue;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setItemFudgeFactor:(NSUInteger)arg1;
- (void)setItemIndeterminateValue;
- (void)setPercentDone:(double)arg1 withKey:(long long)arg2;
- (void)setPrimaryTarget:(id)arg1;
@property(nonatomic) BOOL shouldCancel;
@property BOOL shouldPromptUserOnTermination; // @synthesize shouldPromptUserOnTermination=_shouldPromptUserOnTermination;
@property(copy) NSString *statusMessage;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(long long)arg3;
- (void)setStatusMessage:(id)arg1 withKey:(long long)arg2;
@property(copy) NSString *taskName;
@property(readonly, copy) NSString *taskDescriptionString;
- (void)updateDoneValue;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

