//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface NSFileWrapper (MailCoreAdditions)
- (void)_isImageFile:(char *)arg1 isPDF:(char *)arg2 bestMimeType:(id *)arg3;
- (BOOL)_writeFinderInfoToPath:(id)arg1 includeDirectoryContents:(BOOL)arg2;
@property(readonly, nonatomic) NSUInteger approximateSize;
@property(readonly, copy, nonatomic) NSString *bestMimeType;
@property(retain, nonatomic) NSString *contentID;
- (BOOL)createEmptyAttachmentAtPath:(id)arg1;
@property(nonatomic) unsigned int creator;
@property(retain, nonatomic) NSDate *dateReceived;
@property(retain, nonatomic) NSDate *dateSent;
@property(readonly, nonatomic) BOOL emptyAttachmentExists;
@property(readonly, copy, nonatomic) NSString *emptyAttachmentPath;
@property(retain, nonatomic) NSNumber *filePermissions;
@property(nonatomic) unsigned short finderFlags;
@property(readonly, nonatomic) NSUInteger imageBytes;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) BOOL isALargeAttachment;
@property(readonly, nonatomic) BOOL isImageFile;
- (void)isImageFile:(char *)arg1 isPDF:(char *)arg2;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) BOOL isRemotelyAccessed;
@property(retain, nonatomic) NSString *mailSpecialHandlingType;
@property(retain, nonatomic) NSString *messageID;
@property(retain, nonatomic) NSString *mimeType;
@property(readonly, copy, nonatomic) NSString *preferredFilenameWithoutHiddenExtension;
@property(retain, nonatomic) NSDictionary *quarantineProperties;
- (void)removeEmptyAttachment;
@property(retain, nonatomic) NSData *resourceForkData;
- (void)setImageSize:(struct CGSize)arg1 imageBytes:(NSUInteger)arg2;
@property(nonatomic) BOOL shouldHideExtension;
@property(nonatomic) unsigned int type;
@property(retain, nonatomic) NSArray *whereFroms;
@property(readonly, copy, nonatomic) NSString *stringForIndexing;
@property(readonly, copy, nonatomic) NSString *tmpFullPath;
@end

