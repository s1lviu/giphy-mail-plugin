//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MFRedundantContentMarkup;

@interface MFRedundantTextIdentifier : NSObject
{
    MFRedundantContentMarkup *_redundantContentMarkup;
}

+ (id)_htmlMarkerForContentType:(long long)arg1;
+ (void)initialize;
+ (id)log;
- (id)_attachmentContextsByURLforAttachmentsByURL:(id)arg1;
- (id)init;
- (id)initWithMessage:(id)arg1 messageBody:(id)arg2 ancestorMessage:(id)arg3 ancestorMessageBody:(id)arg4;
@property(readonly, nonatomic) MFRedundantContentMarkup *redundantContentMarkup; // @synthesize redundantContentMarkup=_redundantContentMarkup;

@end

