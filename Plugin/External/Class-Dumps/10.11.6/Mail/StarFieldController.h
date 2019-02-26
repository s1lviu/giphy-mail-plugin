//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MTMMailbox, NSDictionary, NSMutableArray, NSMutableDictionary, NSTimer, NSURL;

@interface StarFieldController : NSObject
{
    NSMutableDictionary *_windowControllers;
    NSMutableDictionary *_bufferedControllers;
    id <MTMMailboxControllerProtocol> _activeWindowController;
    NSMutableArray *_thumbnailUpdateQueue;
    BOOL _isInTimeMachine;
    BOOL _showChangedItemsOnly;
    BOOL _timeMachineStarted;
    BOOL _firstThumbnailUpdateRequest;
    BOOL _hasAtLeastSentOneThumbnail;
    BOOL _dismissed;
    NSDictionary *_sharedDisplayState;
    id <MTMMailboxControllerProtocol> _currentTimeWindowController;
    NSDictionary *_mailDisplayState;
    NSTimer *_updateTimer;
    MTMMailbox *_pausedMailbox;
    struct CGRect _mailFrame;
    struct CGRect _initialFrame;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)keyPathsForValuesAffectingIsInTimeMachine;
+ (id)sharedController;
- (id)_activateWindowForURL:(id)arg1 changedItemsOnly:(unsigned char)arg2 atFrame:(struct CGRect)arg3;
- (id)_correctedURLForURL:(id)arg1 proposedQueryString:(id)arg2;
- (void)_enterTransitionDidEnd:(id)arg1;
- (void)_showChangedItemsOnlyToggled:(unsigned char)arg1;
- (void)_updateAllThumbnails;
- (void)_updateNextThumbnail:(id)arg1;
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> activeWindowController;
- (void)appHasExitedTimeMachineAndFinishedRestoring;
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> currentTimeWindowController; // @synthesize currentTimeWindowController=_currentTimeWindowController;
- (id)deactivateWindowForURL:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) BOOL firstThumbnailUpdateRequest; // @synthesize firstThumbnailUpdateRequest=_firstThumbnailUpdateRequest;
@property(nonatomic) BOOL hasAtLeastSentOneThumbnail; // @synthesize hasAtLeastSentOneThumbnail=_hasAtLeastSentOneThumbnail;
- (id)init;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(nonatomic) BOOL isInTimeMachine; // @synthesize isInTimeMachine=_isInTimeMachine;
@property(retain, nonatomic) NSDictionary *mailDisplayState; // @synthesize mailDisplayState=_mailDisplayState;
@property(nonatomic) struct CGRect mailFrame; // @synthesize mailFrame=_mailFrame;
@property(readonly, nonatomic) NSURL *mainURL;
- (void)markSnapshotAsDirty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) MTMMailbox *pausedMailbox; // @synthesize pausedMailbox=_pausedMailbox;
- (void)removeWindowControllerForURL:(id)arg1;
- (void)restoreFromURL:(id)arg1;
- (id)revisionIDForURL:(id)arg1;
- (void)scheduleUpdateForURL:(id)arg1 withFrame:(struct CGRect)arg2;
@property(retain, nonatomic) NSDictionary *sharedDisplayState; // @synthesize sharedDisplayState=_sharedDisplayState;
@property(nonatomic) BOOL showChangedItemsOnly; // @synthesize showChangedItemsOnly=_showChangedItemsOnly;
@property(nonatomic) BOOL timeMachineStarted; // @synthesize timeMachineStarted=_timeMachineStarted;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
- (void)showCurrentStateMailDisplayState:(id)arg1;
- (void)startEnterTransitionOfWindowController:(id)arg1 fromFrame:(struct CGRect)arg2;
- (void)startExitTransitionOfWindowController:(id)arg1;
- (BOOL)startTimeMachine;
- (void)timeMachineWasDismissed;
- (void)updateAllThumbnails;
- (void)updateThumbnailForURL:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)windowControllerForURL:(id)arg1 forDisplay:(BOOL)arg2 canCreate:(BOOL)arg3;

@end

