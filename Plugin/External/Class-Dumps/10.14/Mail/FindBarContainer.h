//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSLayoutConstraint, NSString;

@interface FindBarContainer : NSView <NSTextFinderBarContainer>
{
    NSView *_findBarView;
    BOOL _findBarVisible;
    NSView *_containerView;
    NSLayoutConstraint *_topConstraint;
}

- (void)_layoutSubviews;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (id)contentView;
@property(retain) NSView *findBarView;
- (void)findBarViewDidChangeHeight;
@property(getter=isFindBarVisible) BOOL findBarVisible;
- (BOOL)isFlipped;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
- (BOOL)wantsUpdateLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

