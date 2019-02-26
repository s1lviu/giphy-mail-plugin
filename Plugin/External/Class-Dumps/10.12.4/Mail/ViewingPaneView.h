//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSHashTable, NSImageView, NSVisualEffectView;

@interface ViewingPaneView : NSView
{
    NSHashTable *_topAlignedSubviews;
    NSHashTable *_managedConstraints;
    NSVisualEffectView *_backdropView;
    BOOL _showsBackdropView;
    BOOL _isVertical;
    NSView *_singleMessageLoadingView;
    NSImageView *_snapshotView;
    NSView *_contentView;
}

+ (BOOL)automaticallyNotifiesObserversOfContentView;
- (void)_createBackdropView;
- (void)_createSingleMessageLoadingView;
- (void)_createSnapshotView;
- (void)_hideSingleMessageLoadingView;
- (void)_hideSnapshot;
- (void)_showSingleMessageLoadingView;
- (void)_showSnapshot;
- (void)_viewingPaneViewCommonInit;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL isVertical; // @synthesize isVertical=_isVertical;
- (void)setContentView:(id)arg1 titlebarAligned:(BOOL)arg2;
- (void)setLoadingOption:(long long)arg1;
@property(nonatomic) BOOL showsBackdropView;
@property(readonly, nonatomic) NSView *singleMessageLoadingView; // @synthesize singleMessageLoadingView=_singleMessageLoadingView;
@property(readonly, nonatomic) NSImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)updateConstraints;
- (void)viewDidMoveToWindow;

@end

