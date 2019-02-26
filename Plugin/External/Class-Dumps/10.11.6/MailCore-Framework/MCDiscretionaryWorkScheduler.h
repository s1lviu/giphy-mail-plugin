//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MCDiscretionaryWorkScheduler : NSObject
{
    id _schedulerLock;
    NSUInteger _conditions;
    NSUInteger _unsatisfiedConditions;
    BOOL _overrideConditions;
    id <MCNetworkTracker> _networkTracker;
    BOOL _hasDeferrableWork;
    BOOL _suspended;
}

+ (id)keyPathsForValuesAffectingDeferDiscretionaryWork;
- (void)_conditions:(NSUInteger)arg1 becameSatified:(BOOL)arg2;
- (void)_startTrackingConditions:(NSUInteger)arg1;
- (void)_stopTrackingConditions:(NSUInteger)arg1;
@property NSUInteger conditions;
- (void)dealloc;
@property(readonly) BOOL deferDiscretionaryWork;
@property BOOL hasDeferrableWork; // @synthesize hasDeferrableWork=_hasDeferrableWork;
- (id)init;
@property(nonatomic) __weak id <MCNetworkTracker> networkTracker;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property BOOL overrideConditions; // @synthesize overrideConditions=_overrideConditions;
@property BOOL suspended; // @synthesize suspended=_suspended;
@property(readonly) NSUInteger unsatisfiedConditions;

@end

