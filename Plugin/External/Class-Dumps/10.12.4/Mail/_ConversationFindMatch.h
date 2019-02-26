//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class ConversationViewFindController, MUICollectionView, NSArray, NSString;

@interface _ConversationFindMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch>
{
    MUICollectionView *_containingView;
    id <NSTextFinderAsynchronousDocumentFindMatch> _backingFindMatch;
    NSUInteger _cellIndex;
    NSArray *_textRectsInDocument;
    ConversationViewFindController *_findController;
}

@property(retain, nonatomic) id <NSTextFinderAsynchronousDocumentFindMatch> backingFindMatch; // @synthesize backingFindMatch=_backingFindMatch;
@property(nonatomic) NSUInteger cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) MUICollectionView *containingView; // @synthesize containingView=_containingView;
@property(retain, nonatomic) ConversationViewFindController *findController; // @synthesize findController=_findController;
- (void)generateTextImage:(id)arg1;
@property(retain, nonatomic) NSArray *textRectsInDocument; // @synthesize textRectsInDocument=_textRectsInDocument;
@property(readonly, nonatomic) NSArray *textRects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

