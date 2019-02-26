//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MessageSelection, MessageWebDocumentView, PrintingProgressPanelWindowController;

@interface PrintingManager : NSObject
{
    BOOL _wasCancelled;
    MessageSelection *_selection;
    MessageWebDocumentView *_webDocumentView;
    PrintingManager *_activeDispatcher;
    PrintingProgressPanelWindowController *_progressPanelController;
    double _progressMaxValue;
    double _progressValue;
    double _progressIncrement;
}

+ (void)exportSelectionAsPDF:(id)arg1;
+ (void)printSelection:(id)arg1;
- (void)_generatePrintingHTMLForEnumeratedConversationMembers:(id)arg1 HTMLStorage:(id)arg2 attachmentStorage:(id)arg3 completionHandler:(id)arg4;
- (void)_showProgressPanel;
@property(retain, nonatomic) PrintingManager *activeDispatcher; // @synthesize activeDispatcher=_activeDispatcher;
- (id)init;
- (id)initWithSelection:(id)arg1;
@property(nonatomic) double progressIncrement; // @synthesize progressIncrement=_progressIncrement;
@property(nonatomic) double progressMaxValue; // @synthesize progressMaxValue=_progressMaxValue;
@property(retain, nonatomic) PrintingProgressPanelWindowController *progressPanelController; // @synthesize progressPanelController=_progressPanelController;
@property double progressValue; // @synthesize progressValue=_progressValue;
@property(retain, nonatomic) MessageSelection *selection; // @synthesize selection=_selection;
@property(nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;

@end

