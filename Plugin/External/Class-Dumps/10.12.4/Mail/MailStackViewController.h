//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "StackDataSource.h"
#import "StackDelegate-Protocol.h"

@class CALayer, NSArray, NSImage, NSMutableDictionary, NSMutableSet, NSString, NSView, StackController, _StackContainerView;

@interface MailStackViewController : NSObject <StackDataSource, StackDelegate>
{
    NSMutableDictionary *_messageViewControllers;
    NSMutableDictionary *_messageLayers;
    NSMutableSet *_snapshotWindows;
    BOOL _initialLoadCompleted;
    BOOL _performingAsynchronousAnimation;
    NSArray *_messagesOrConversations;
    NSImage *_topLayerSnapshot;
    NSView *_containerView;
    _StackContainerView *_stackContainerView;
    CALayer *_stackContainerLayer;
    StackController *_stackController;
}

- (void)_abortAnimations;
- (void)_attachMessageViewToIndividualWindow:(id)arg1;
- (void)_createMessageViewForItem:(id)arg1;
- (void)_detachMessageViewFromIndividualWindow:(id)arg1;
- (id)_messageOrConversationListFromSelection:(id)arg1;
- (void)_messageViewControllerDidFinishLoading:(id)arg1;
- (void)_removeMessageViewForItem:(id)arg1;
- (void)_resizeMessageViewWithID:(id)arg1 toSize:(struct CGSize)arg2 animating:(BOOL)arg3;
- (id)_stackControllerCreateIfNeeded:(BOOL)arg1;
- (void)_takeSnapshotOfMessageViewForController:(id)arg1 completionHandler:(id)arg2;
- (void)_viewDidEndLiveResize:(id)arg1;
- (void)_viewFrameDidChange:(id)arg1;
@property(readonly, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
- (id)init;
- (id)initWithContainerView:(id)arg1;
@property(nonatomic) BOOL initialLoadCompleted; // @synthesize initialLoadCompleted=_initialLoadCompleted;
@property(retain, nonatomic) NSArray *messagesOrConversations; // @synthesize messagesOrConversations=_messagesOrConversations;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(id)arg1;
- (void)mui_prepareToLayoutSynchronously:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) BOOL performingAsynchronousAnimation; // @synthesize performingAsynchronousAnimation=_performingAsynchronousAnimation;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(retain, nonatomic) _StackContainerView *stackContainerView; // @synthesize stackContainerView=_stackContainerView;
@property(retain, nonatomic) StackController *stackController; // @synthesize stackController=_stackController;
- (void)setStackVisible:(BOOL)arg1 animates:(BOOL)arg2;
@property(retain, nonatomic) NSImage *topLayerSnapshot; // @synthesize topLayerSnapshot=_topLayerSnapshot;
- (id)stackContainerLayerForStackController:(id)arg1;
- (BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inLayer:(id)arg3;
- (id)stackController:(id)arg1 layerForItem:(id)arg2;
- (void)stackController:(id)arg1 loadDataForItem:(id)arg2 inLayer:(id)arg3;
- (void)stackController:(id)arg1 willDisplayLayer:(id)arg2 forItem:(id)arg3;
- (void)stackController:(id)arg1 willRemoveLayerForItem:(id)arg2;
- (void)stackController:(id)arg1 willStackLayer:(id)arg2 forItem:(id)arg3;
- (void)stackControllerDidStopStackingLayers:(id)arg1;
- (void)stackControllerWillStartStackingLayers:(id)arg1;
- (void)updateDisplayForSelection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

