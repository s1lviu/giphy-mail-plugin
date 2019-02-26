//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "ThreadSupportingMessageList.h"

@class ManagedList, NSArray, NSMutableIndexSet, NSString;

@interface ThreadedMessageList : NSObject <ThreadSupportingMessageList>
{
    NSMutableIndexSet *_openThreadIndexes;
    id <ThreadedMessageListDelegate> _delegate;
    ManagedList *_threadList;
    NSUInteger _totalMessageCount;
}

- (NSUInteger)_childCountForThread:(id)arg1;
- (struct _NSRange)_closeThread:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)_deletedThreadsFromAdjustingThreads:(id)arg1 messageRemovals:(id)arg2 messageMoves:(id)arg3 animate:(BOOL)arg4;
- (NSUInteger)_indexAdjustedByOpenThreads:(NSUInteger)arg1;
- (id)_indexesAdjustedByOpenThreads:(id)arg1;
- (id)_indexesReversed:(id)arg1 acrossLength:(NSUInteger)arg2;
- (NSUInteger)_mergeThread:(id)arg1;
- (id)_mergeThreads:(id)arg1;
- (struct _NSRange)_openThread:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)_removeThread:(id)arg1;
- (void)_shiftOpenThreadIndexesByAddedIndexes:(id)arg1;
- (id)_threadChangesFromAddingMessages:(id)arg1 primary:(BOOL)arg2 newThreads:(id)arg3 alteredThreads:(id)arg4;
- (BOOL)_threadChildrenOrderedAscending;
- (void)addPrimaryMessages:(id)arg1 secondaryMessages:(id)arg2;
- (NSUInteger)adjustedIndexOfMessage:(id)arg1;
- (void)applyFilter;
- (void)closeAllThreads;
- (void)closeThreads:(id)arg1;
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invert;
- (void)openAllThreads;
- (void)openThreads:(id)arg1;
- (void)removeMessages:(id)arg1 andReplaceMessages:(id)arg2 animate:(BOOL)arg3;
- (void)resort;
@property(nonatomic) NSUInteger totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(readonly, nonatomic) ManagedList *threadList; // @synthesize threadList=_threadList;
@property(readonly, copy, nonatomic) NSArray *unrolledObjects;
- (void)updateMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

