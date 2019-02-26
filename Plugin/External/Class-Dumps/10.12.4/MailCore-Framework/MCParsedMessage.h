//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface MCParsedMessage : NSObject <NSXMLParserDelegate>
{
    NSMutableDictionary *_attachmentsByURL;
    BOOL _isPlainText;
    BOOL _isEncrypted;
    NSString *_html;
    NSUInteger _originalEncoding;
    NSString *_mimeType;
    NSURL *_baseURL;
    NSArray *_stationeryBackgroundImageURLs;
    NSArray *_signers;
}

+ (void)setPlainTextWebPreferences:(id)arg1;
+ (void)setRichTextWebPreferences:(id)arg1;
- (void)_addWebArchiveDataToArray:(id)arg1;
- (void)_mcParsedMessageCommonInit;
- (void)addAttachment:(id)arg1 forURL:(id)arg2;
@property(copy) NSDictionary *attachmentsByURL;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
- (id)init;
- (id)initWithWebArchive:(id)arg1;
- (id)initWithWebArchive:(id)arg1 archiveIsMailInternal:(BOOL)arg2;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(nonatomic) BOOL isPlainText; // @synthesize isPlainText=_isPlainText;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) NSUInteger originalEncoding; // @synthesize originalEncoding=_originalEncoding;
- (void)setBaseURLFromHtml;
@property(copy, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(copy, nonatomic) NSArray *stationeryBackgroundImageURLs; // @synthesize stationeryBackgroundImageURLs=_stationeryBackgroundImageURLs;
@property(readonly, copy, nonatomic) NSArray *signerLabels;

// Remaining properties
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

