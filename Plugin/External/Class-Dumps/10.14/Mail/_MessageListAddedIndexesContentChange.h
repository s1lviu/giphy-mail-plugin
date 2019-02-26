//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MessageListContentChange.h"

@class NSMutableIndexSet, NSString;

@interface _MessageListAddedIndexesContentChange : NSObject <MessageListContentChange>
{
    NSMutableIndexSet *_indexes;
    NSUInteger _animationOptions;
}

@property(readonly, nonatomic) NSUInteger animationOptions; // @synthesize animationOptions=_animationOptions;
- (void)applyToTableView:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)incrementChangeIndexesBy:(NSUInteger)arg1;
@property(readonly, copy, nonatomic) NSMutableIndexSet *indexes; // @synthesize indexes=_indexes;
- (id)init;
- (id)initWithIndexes:(id)arg1 animationOptions:(NSUInteger)arg2;
- (NSUInteger)shiftIndex:(NSUInteger)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

