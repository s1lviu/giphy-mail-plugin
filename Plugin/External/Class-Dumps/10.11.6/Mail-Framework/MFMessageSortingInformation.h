//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSDictionary;

@interface MFMessageSortingInformation : NSObject
{
    BOOL _skipAutomaticSecondarySort;
    NSDictionary *_sortValues;
}

- (void)dealloc;
@property(nonatomic) BOOL skipAutomaticSecondarySort; // @synthesize skipAutomaticSecondarySort=_skipAutomaticSecondarySort;
@property(copy, nonatomic) NSDictionary *sortValues; // @synthesize sortValues=_sortValues;

@end

