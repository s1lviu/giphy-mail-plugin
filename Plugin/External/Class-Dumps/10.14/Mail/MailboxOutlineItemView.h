//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class MailboxBadgeView, NSButton, NSObject<MailboxOutlineItemViewDelegate>, NSString;

@interface MailboxOutlineItemView : NSTableCellView <NSTextFieldDelegate>
{
    NSObject<MailboxOutlineItemViewDelegate> *_delegate;
    MailboxBadgeView *_badgeView;
    NSButton *_indicatorView;
    NSButton *_addMailboxButton;
}

- (struct CGRect)_layoutAddButton:(struct CGRect *)arg1 isRTL:(BOOL)arg2;
- (struct CGRect)_layoutAuxiliaryButton:(id)arg1 inRect:(struct CGRect *)arg2 isRTL:(BOOL)arg3;
- (void)_layoutAuxiliaryViews;
- (void)_layoutAuxiliaryViewsForcingBadge:(BOOL)arg1;
- (struct CGRect)_layoutBadge:(struct CGRect *)arg1 force:(BOOL)arg2 isRTL:(BOOL)arg3;
- (struct CGRect)_layoutIndicator:(struct CGRect *)arg1 isRTL:(BOOL)arg2;
- (struct CGRect)_layoutText:(struct CGRect *)arg1 isRTL:(BOOL)arg2;
- (struct CGRect)_leftAlignAndVerticallyCenterRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (void)_mailboxOutlineItemViewCommonInit;
- (struct CGRect)_rightAlignAndVerticallyCenterRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (void)_updateImage;
@property(retain, nonatomic) NSButton *addMailboxButton; // @synthesize addMailboxButton=_addMailboxButton;
@property(retain, nonatomic) MailboxBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak NSObject<MailboxOutlineItemViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double idealWidth;
@property(retain, nonatomic) NSButton *indicatorView; // @synthesize indicatorView=_indicatorView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)menu;
- (id)menuForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setAddMailboxButtonAction:(SEL)arg1;
- (void)setAddMailboxButtonTarget:(id)arg1;
- (void)setAlertAction:(SEL)arg1;
- (void)setAlertTarget:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setRowSizeStyle:(long long)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)showAddMailboxButton:(BOOL)arg1;
- (void)showAlertIndicator:(BOOL)arg1 withState:(long long)arg2;
- (void)showBadge:(BOOL)arg1 withCount:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewWillDraw;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

