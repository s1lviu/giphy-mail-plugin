//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MFMailAccount, NSImage, NSString;

@interface AccountCell : NSActionCell
{
    MFMailAccount *_account;
    NSImage *_icon;
    NSString *_subtitle;
}

- (void)_accountCellCommonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(retain, nonatomic) NSImage *icon;
- (id)init;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccount:(id)arg1;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (id)title;

@end

