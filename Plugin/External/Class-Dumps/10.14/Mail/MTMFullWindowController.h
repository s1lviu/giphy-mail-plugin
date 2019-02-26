//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MTMWindowController.h"

#import "MTMScrollerDelegate-Protocol.h"

@class ColorBackgroundView, MTMFakeMailbox, MTMMessageColumnController, MTMOutlineCell, MTMOutlineView, MTMScroller, NSArray, NSArrayController, NSDictionary, NSIndexSet, NSMutableDictionary, NSSplitView, NSString, NSTabView, NSTableView, NSTextFieldCell, NSTreeController, NSView, NSView<QLPreviewCustomView>, NSWindow, QLPreviewView;

@interface MTMFullWindowController : MTMWindowController <MTMScrollerDelegate, NSOutlineViewDelegate, NSSplitViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSWindowDelegate>
{
    NSArray *_messageColumnOrder;
    NSDictionary *_messageColumnSizes;
    NSArray *_messageSortDescriptors;
    NSIndexSet *_selectedMessageIndexes;
    NSArray *_selectedMailboxIndexPaths;
    NSMutableDictionary *_mailboxesDict;
    BOOL _messageScrollerSavedDontNotify;
    BOOL _shouldPreventFirstViewResize;
    BOOL _messageScrollerSavedDontNotifyOnResize;
    BOOL _isActivated;
    MTMFakeMailbox *_displayedMailbox;
    NSWindow *_topLevelWindow;
    NSView *_emptyView;
    NSView<QLPreviewCustomView> *_genericView;
    NSView *_loadingView;
    NSArrayController *_messagesController;
    NSTreeController *_mailboxesController;
    NSSplitView *_verticalSplitView;
    NSView *_mailboxesView;
    MTMOutlineView *_outlineView;
    NSTabView *_mailboxTabView;
    NSSplitView *_splitView;
    ColorBackgroundView *_globalRestoreView;
    NSTableView *_messagesView;
    ColorBackgroundView *_messageBackgroundView;
    QLPreviewView *_previewView;
    MTMScroller *_messageScroller;
    MTMMessageColumnController *_columnController;
    NSTextFieldCell *_textCell;
    MTMOutlineCell *_mailboxCell;
    NSArray *_expectedSelectedMessageIDs;
    NSUInteger _isUpdatingSelectionFromBackend;
    double _expectedMessageScrollerValue;
    double _currentMessageScrollerValue;
    NSArray *_expectedVisibleSelectedMessageIDs;
}

+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingMailboxTargeted;
+ (id)keyPathsForValuesAffectingPlaceholderString;
+ (Class)specialMailboxClass;
- (id)_computedMessageColumnOrder;
- (id)_computedMessageColumnSizes;
- (id)_computedMessageSortDescriptors;
- (void)_flushExpectedMessageIDsSelection;
- (void)_flushMessageScrollPosition;
- (double)_maxMailboxesViewWidthAllowed;
- (id)_placeholderAttributes;
- (void)_resizeSplitViewToPercentage:(double)arg1;
- (void)_selectionDidChange;
- (id)_subPlaceholderAttributes;
- (void)_tryToSelectMessages:(id)arg1 selectedMailbox:(id)arg2;
- (void)_tryToUpdateSelectedMessageIDs;
- (void)_updateMessageScrollPosition;
- (void)_updatePreviewViewURLIfNecessary;
- (void)activate;
- (void)adjustDisplayStateAfterTimeMachineStarted;
- (void)awakeFromNib;
@property(retain, nonatomic) MTMMessageColumnController *columnController; // @synthesize columnController=_columnController;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
@property(nonatomic) double currentMessageScrollerValue; // @synthesize currentMessageScrollerValue=_currentMessageScrollerValue;
- (void)deactivate;
- (void)dealloc;
- (id)displayState;
@property(retain, nonatomic) MTMFakeMailbox *displayedMailbox; // @synthesize displayedMailbox=_displayedMailbox;
@property(retain, nonatomic) NSView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) double expectedMessageScrollerValue; // @synthesize expectedMessageScrollerValue=_expectedMessageScrollerValue;
@property(copy, nonatomic) NSArray *expectedSelectedMessageIDs; // @synthesize expectedSelectedMessageIDs=_expectedSelectedMessageIDs;
@property(copy, nonatomic) NSArray *expectedVisibleSelectedMessageIDs; // @synthesize expectedVisibleSelectedMessageIDs=_expectedVisibleSelectedMessageIDs;
- (double)fadeDuration;
@property(retain, nonatomic) NSView<QLPreviewCustomView> *genericView; // @synthesize genericView=_genericView;
@property(nonatomic) __weak ColorBackgroundView *globalRestoreView; // @synthesize globalRestoreView=_globalRestoreView;
@property(nonatomic) BOOL isActivated; // @synthesize isActivated=_isActivated;
- (BOOL)isTopLevelItem:(id)arg1;
@property(nonatomic) NSUInteger isUpdatingSelectionFromBackend; // @synthesize isUpdatingSelectionFromBackend=_isUpdatingSelectionFromBackend;
- (void)loadWindow;
@property(retain, nonatomic) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MTMOutlineCell *mailboxCell; // @synthesize mailboxCell=_mailboxCell;
- (void)mailboxListWasUpdated:(id)arg1;
- (void)mailboxListWillBeUpdated:(id)arg1;
@property(nonatomic) __weak NSTabView *mailboxTabView; // @synthesize mailboxTabView=_mailboxTabView;
- (BOOL)mailboxTargeted;
@property(retain, nonatomic) NSTreeController *mailboxesController; // @synthesize mailboxesController=_mailboxesController;
@property(nonatomic) __weak NSView *mailboxesView; // @synthesize mailboxesView=_mailboxesView;
@property(nonatomic) __weak ColorBackgroundView *messageBackgroundView; // @synthesize messageBackgroundView=_messageBackgroundView;
@property(copy, nonatomic) NSArray *messageColumnOrder;
@property(copy, nonatomic) NSDictionary *messageColumnSizes;
@property(retain, nonatomic) MTMScroller *messageScroller; // @synthesize messageScroller=_messageScroller;
@property(nonatomic) BOOL messageScrollerSavedDontNotify; // @synthesize messageScrollerSavedDontNotify=_messageScrollerSavedDontNotify;
@property(nonatomic) BOOL messageScrollerSavedDontNotifyOnResize; // @synthesize messageScrollerSavedDontNotifyOnResize=_messageScrollerSavedDontNotifyOnResize;
@property(copy, nonatomic) NSArray *messageSortDescriptors;
@property(retain, nonatomic) NSArrayController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) __weak NSTableView *messagesView; // @synthesize messagesView=_messagesView;
@property(nonatomic) __weak MTMOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)placeholderString;
@property(nonatomic) __weak QLPreviewView *previewView; // @synthesize previewView=_previewView;
- (void)removeBindings;
- (id)restoreMessagePaths;
- (void)scrollerWasMovedByUser:(id)arg1;
- (void)scrollerWillBeMovedByUser:(id)arg1;
- (id)selectedMailbox;
@property(retain, nonatomic) NSArray *selectedMailboxIndexPaths;
- (id)selectedMailboxPaths;
@property(retain, nonatomic) NSIndexSet *selectedMessageIndexes;
@property(retain, nonatomic) NSIndexSet *selectedMessageIndexesInDisplayedMailbox;
- (id)selectedMessagePaths;
- (void)setDisplayState:(id)arg1;
@property(nonatomic) BOOL shouldPreventFirstViewResize; // @synthesize shouldPreventFirstViewResize=_shouldPreventFirstViewResize;
- (void)setShowChangedItemsOnly:(BOOL)arg1;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) NSTextFieldCell *textCell; // @synthesize textCell=_textCell;
@property(retain, nonatomic) NSWindow *topLevelWindow; // @synthesize topLevelWindow=_topLevelWindow;
@property(nonatomic) __weak NSSplitView *verticalSplitView; // @synthesize verticalSplitView=_verticalSplitView;
- (void)setupBindings;
- (BOOL)setupUIWithDisplayState:(id)arg1;
- (BOOL)shouldRestoreMailboxPaths;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)updateMessageListBindingsWithDisplayedMailbox:(id)arg1 scrollerDelta:(double)arg2;
- (id)urlToMessage;
- (void)windowDidResize:(id)arg1;
- (id)windowNibName;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

