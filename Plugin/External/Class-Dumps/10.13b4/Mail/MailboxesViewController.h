//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class ActivityViewController, MailboxesOutlineViewController;

@interface MailboxesViewController : NSViewController
{
    MailboxesOutlineViewController *_outlineViewController;
    ActivityViewController *_activityViewController;
}

@property(retain, nonatomic) ActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) MailboxesOutlineViewController *outlineViewController; // @synthesize outlineViewController=_outlineViewController;

@end

