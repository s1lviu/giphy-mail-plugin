//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "BannerViewController.h"

@class BannerImageView, NSButton, NSLayoutConstraint, NSTextField;

@interface ChildBannerViewController : BannerViewController
{
    long long _parentalControlMessageState;
    BannerImageView *_icon;
    NSTextField *_messageField;
    NSButton *_helpButton;
    NSButton *_sendButton;
    NSLayoutConstraint *_helpButtonTrailingSpace;
}

@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSLayoutConstraint *helpButtonTrailingSpace; // @synthesize helpButtonTrailingSpace=_helpButtonTrailingSpace;
@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (id)nibName;
@property(nonatomic) long long parentalControlMessageState; // @synthesize parentalControlMessageState=_parentalControlMessageState;
@property(nonatomic) __weak NSButton *sendButton; // @synthesize sendButton=_sendButton;
- (void)sendMessage:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;

@end

