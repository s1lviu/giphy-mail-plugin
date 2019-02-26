//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "PopoutAnimationContentProvider-Protocol.h"

@class BannerContainerViewController, ConversationMember, HeaderViewController, MessageView, MessageWebDocumentView, NSLayoutConstraint, NSPopUpButton, NSScrollView, NSStackView, NSString, NSTrackingArea, NSView, SuggestionsBannerViewController;

@interface MessageViewController : NSViewController <NSMenuDelegate, NSStackViewDelegate, PopoutAnimationContentProvider>
{
    BannerContainerViewController *_bannerViewController;
    HeaderViewController *_headerViewController;
    SuggestionsBannerViewController *_suggestionsBannerController;
    NSView *_actionButtons;
    NSView *_headerView;
    NSScrollView *_bodyScrollView;
    MessageWebDocumentView *_webDocumentView;
    NSTrackingArea *_rolloverTrackingArea;
    NSLayoutConstraint *_forwardButtonOffset;
    NSPopUpButton *_attachmentsButton;
    NSView *_attachmentsDivider;
    NSView *_suggestionsBannerRow;
    NSStackView *_stackView;
    NSLayoutConstraint *_rolloverAlignmentConstraint;
}

+ (id)keyPathsForValuesAffectingAlwaysShowMailboxName;
+ (id)keyPathsForValuesAffectingLoaded;
+ (id)keyPathsForValuesAffectingPageZoom;
- (id)_messageViewer;
- (void)_showLoadingProgress;
- (void)_updateAttachmentRollover;
- (void)_updateHeaderMouseOver;
- (void)_updateRolloverTrackingArea:(id)arg1;
- (void)_updateSuggestionsVisibility;
- (void)_updateWebDocumentView;
@property(retain, nonatomic) NSView *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(nonatomic) BOOL alwaysShowMailboxName;
@property(nonatomic) __weak NSPopUpButton *attachmentsButton; // @synthesize attachmentsButton=_attachmentsButton;
@property(nonatomic) __weak NSView *attachmentsDivider; // @synthesize attachmentsDivider=_attachmentsDivider;
- (void)awakeFromNib;
@property(retain, nonatomic) BannerContainerViewController *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
@property(retain, nonatomic) NSScrollView *bodyScrollView; // @synthesize bodyScrollView=_bodyScrollView;
- (void)cursorUpdate:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)exportAttachments:(id)arg1;
- (void)forward:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *forwardButtonOffset; // @synthesize forwardButtonOffset=_forwardButtonOffset;
- (id)getContentGeometryData;
- (void)getSnapshotParts:(id)arg1;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) HeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void)keyDown:(id)arg1;
@property(readonly, nonatomic) BOOL loaded;
- (void)menuNeedsUpdate:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) double pageZoom;
- (void)quickLookAllAttachments:(id)arg1;
- (void)reply:(id)arg1;
- (void)replyAll:(id)arg1;
@property(retain) ConversationMember *representedObject;
@property(retain, nonatomic) NSLayoutConstraint *rolloverAlignmentConstraint; // @synthesize rolloverAlignmentConstraint=_rolloverAlignmentConstraint;
@property(retain, nonatomic) NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
- (void)saveAllAttachments:(id)arg1;
- (void)saveAllAttachmentsWithoutPrompting:(id)arg1;
- (void)saveAttachment:(id)arg1;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) SuggestionsBannerViewController *suggestionsBannerController; // @synthesize suggestionsBannerController=_suggestionsBannerController;
@property(nonatomic) __weak NSView *suggestionsBannerRow; // @synthesize suggestionsBannerRow=_suggestionsBannerRow;
//@property(retain) MessageView *view;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (void)toggleAllHeaders:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)viewSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

