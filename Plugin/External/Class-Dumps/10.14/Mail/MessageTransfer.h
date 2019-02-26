//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCActivityTarget-Protocol.h"
#import "MessageDeletionTransfer-Protocol.h"
#import "MessageTransferDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSProgress, NSString;

@interface MessageTransfer : NSObject <MCActivityTarget, MessageDeletionTransfer>
{
    NSMutableArray *_operations;
    BOOL _deleteOriginals;
    BOOL _allowsUndo;
    BOOL _registeredForUndo;
    BOOL _isDeleteOperation;
    BOOL _isArchiveOperation;
    BOOL _undoInProgress;
    BOOL _needToUndoTransfer;
    id <MessageTransferDelegate> _delegate;
    NSArray *_sourceLabels;
    NSProgress *_transferProgress;
}

+ (void)_redo:(id)arg1;
+ (BOOL)_shouldProceedWithMailboxDeletions:(id)arg1;
+ (void)_undo:(id)arg1;
+ (void)initialize;
+ (id)log;
+ (void)queueMailboxDeletions:(id)arg1;
- (void)_completedTransferWithError:(id)arg1;
- (id)_destinationMailboxForOperation:(id)arg1;
- (void)_postDidEndDocumentTransferNotification:(id)arg1 result:(long long)arg2 destinationAccount:(id)arg3 missedMessages:(id)arg4;
- (void)_postWillBeginDocumentTransferNotification:(id)arg1;
- (void)_redo;
- (void)_registerForUndoType:(long long)arg1;
- (void)_synchronouslyPerformTransfer;
- (void)_undo;
- (id)_undoActionNameForMessageCount:(NSUInteger)arg1;
- (void)_undoSettingFlags:(id)arg1 transferringMessages:(id)arg2;
@property BOOL allowsUndo; // @synthesize allowsUndo=_allowsUndo;
@property(readonly, nonatomic) BOOL anySourceStoreAllowsDeleteInPlace;
- (void)beginTransfer;
@property(readonly, nonatomic) BOOL canBeginTransfer;
- (void)dealloc;
@property __weak id <MessageTransferDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL deleteOriginals; // @synthesize deleteOriginals=_deleteOriginals;
@property(readonly, copy, nonatomic) NSArray *destinationMailboxes;
- (id)init;
- (id)initWithMessages:(id)arg1 targetMailbox:(id)arg2 isDeleteOperation:(BOOL)arg3 isArchiveOperation:(BOOL)arg4;
@property(nonatomic) BOOL isArchiveOperation; // @synthesize isArchiveOperation=_isArchiveOperation;
@property(nonatomic) BOOL isDeleteOperation; // @synthesize isDeleteOperation=_isDeleteOperation;
@property(nonatomic) BOOL needToUndoTransfer; // @synthesize needToUndoTransfer=_needToUndoTransfer;
@property(nonatomic) BOOL registeredForUndo; // @synthesize registeredForUndo=_registeredForUndo;
@property(copy) NSArray *sourceLabels; // @synthesize sourceLabels=_sourceLabels;
@property(retain, nonatomic) NSProgress *transferProgress; // @synthesize transferProgress=_transferProgress;
@property(nonatomic) BOOL undoInProgress; // @synthesize undoInProgress=_undoInProgress;
@property(readonly, copy, nonatomic) NSArray *sourceStores;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

