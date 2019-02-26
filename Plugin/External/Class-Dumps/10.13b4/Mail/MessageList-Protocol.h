//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MCMessage, NSArray, NSDictionary;

@protocol MessageList <NSObject>
- (void)addPrimaryMessages:(NSArray *)arg1 secondaryMessages:(NSArray *)arg2;
- (NSUInteger)adjustedIndexOfMessage:(MCMessage *)arg1 adjustForChildren:(BOOL)arg2;
- (void)applyFilter;
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate;
- (void)invert;
- (void)removeMessages:(NSArray *)arg1 andReplaceMessages:(NSDictionary *)arg2 animate:(BOOL)arg3;
- (void)resort;
@property(readonly, nonatomic) NSUInteger totalMessageCount;
@property(readonly, copy, nonatomic) NSArray *unrolledObjects;
- (void)updateMessages:(NSArray *)arg1;
@end

