//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class ConversationMember, MessageWebDocumentView, NSImage, NSMutableString, NSString;

@interface PrintingHTMLGenerator : NSObject
{
    NSMutableString *_headerTableHTML;
    NSString *_senderImageHTML;
    BOOL _shouldCollapseRedundantText;
    ConversationMember *_conversationMember;
    MessageWebDocumentView *_webDocumentView;
    NSImage *_senderImage;
    PrintingHTMLGenerator *_activeGenerator;
}

- (id)_javaScriptForPrintingData;
- (id)_newHTMLAddressStringsFromAddressList:(id)arg1;
- (id)_newPrintHTMLUsingPrintingData:(id)arg1 base64EncodedDisplayHTML:(id)arg2;
- (void)_updateAvatarView;
@property(retain, nonatomic) PrintingHTMLGenerator *activeGenerator; // @synthesize activeGenerator=_activeGenerator;
- (void)asyncLoadPrintingHTML:(id)arg1;
@property(nonatomic) __weak ConversationMember *conversationMember; // @synthesize conversationMember=_conversationMember;
@property(readonly, copy, nonatomic) NSString *headerTableHTML;
- (id)init;
- (id)initWithConversationMember:(id)arg1 webDocumentView:(id)arg2 shouldCollapseRedundantText:(BOOL)arg3;
@property(retain, nonatomic) NSImage *senderImage; // @synthesize senderImage=_senderImage;
@property(readonly, copy, nonatomic) NSString *senderImageHTML;
@property(nonatomic) BOOL shouldCollapseRedundantText; // @synthesize shouldCollapseRedundantText=_shouldCollapseRedundantText;
@property(nonatomic) __weak MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;

@end

