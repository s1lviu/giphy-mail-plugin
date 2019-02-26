//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSStackView, NSTimer;

@interface MessageListSearchProgressView : NSView
{
    NSStackView *_searchingStackView;
    NSArray *_orderedDotViews;
    NSTimer *_animationIntervalTimer;
}

- (void)_animate:(id)arg1;
- (void)_startAnimating;
- (void)_startAnimationIntervalTimer;
- (void)_stopAnimating;
- (void)_stopAnimationIntervalTimer;
@property(retain, nonatomic) NSTimer *animationIntervalTimer; // @synthesize animationIntervalTimer=_animationIntervalTimer;
@property(retain, nonatomic) NSArray *orderedDotViews; // @synthesize orderedDotViews=_orderedDotViews;
@property(nonatomic) __weak NSStackView *searchingStackView; // @synthesize searchingStackView=_searchingStackView;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

@end

