//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "RolloverTrackingButton.h"

@class NSImage;

@interface RolloverImageButton : RolloverTrackingButton
{
    NSImage *_rolloverImage;
}

- (void)_setAttributes;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSImage *rolloverImage;
- (BOOL)shouldUseRolloverAppearance;

@end

