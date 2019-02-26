//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "BannerViewController.h"

@class BannerImageView, NSButton, NSLayoutConstraint;

@interface LoadRemoteContentBannerViewController : BannerViewController
{
    NSButton *_loadRemoteContentButton;
    NSLayoutConstraint *_messageFieldToLoadRemoteContentButtonHorizontalSpacing;
    BannerImageView *_icon;
}

- (void)dealloc;
@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
- (void)loadRemoteContent:(id)arg1;
@property(nonatomic) __weak NSButton *loadRemoteContentButton; // @synthesize loadRemoteContentButton=_loadRemoteContentButton;
@property(nonatomic) __weak NSLayoutConstraint *messageFieldToLoadRemoteContentButtonHorizontalSpacing; // @synthesize messageFieldToLoadRemoteContentButtonHorizontalSpacing=_messageFieldToLoadRemoteContentButtonHorizontalSpacing;
- (id)nibName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
@property(readonly, nonatomic) BOOL shouldDisplayToLoadRemoteContent;
- (void)updateBannerContents;
- (void)updateWantsDisplay;

@end

