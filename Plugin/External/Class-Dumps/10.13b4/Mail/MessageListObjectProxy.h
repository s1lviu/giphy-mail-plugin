//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MCMessage, MFCriterion, NSArray, NSDictionary, NSImage, NSIndexSet, NSOrderedSet, NSString;

@interface MessageListObjectProxy : NSObject
{
    long long _flags;
    MFCriterion *_mailboxCriterion;
    NSIndexSet *_flagColors;
    NSString *_snippet;
    NSUInteger _messageSize;
    BOOL _isVIP;
    BOOL _showContactPhotos;
    BOOL _showRecipient;
    BOOL _selected;
    BOOL _isDeleted;
    BOOL _isOpen;
    MCMessage *_message;
    long long _backgroundStyle;
    long long _photoSize;
    NSString *_addressee;
    NSArray *_avatarContacts;
    NSString *_subject;
    NSString *_dateString;
    NSString *_mailbox;
    NSString *_size;
    NSImage *_statusImage;
    NSOrderedSet *_flagImages;
    NSUInteger _threadCount;
    NSString *_toCcString;
    NSString *_snippetString;
    NSDictionary *_unreadImages;
    NSDictionary *_replyImages;
    NSDictionary *_attachmentImages;
}

+ (id)keyPathsForValuesAffectingAttachmentImage;
+ (id)keyPathsForValuesAffectingFirstFlag;
+ (id)keyPathsForValuesAffectingReplyAlternateImage;
+ (id)keyPathsForValuesAffectingReplyImage;
+ (id)keyPathsForValuesAffectingUnreadImage;
- (id)_addressForPhotoProvideFullAddress:(BOOL)arg1;
- (id)_addressee;
- (id)_defaultDateFormatter;
- (void)_displayNameChanged:(id)arg1;
- (id)_displayNameForPhoto;
- (id)_iconsForFlags:(id)arg1;
- (id)_initializeUnreadImages;
- (id)_messageForPhoto;
- (BOOL)_messageHasAttachments:(id)arg1;
- (void)_refreshDate:(id)arg1;
- (id)_relevantAddressesForMessage:(id)arg1 fullAddresses:(BOOL)arg2;
- (id)_relevantAddressesProvideFullAddress:(BOOL)arg1;
- (id)_todayDateFormatter;
- (void)_updateAddressee;
- (void)_updateAttachmentImages;
- (void)_updateAvatarContacts;
- (void)_updateContactPhotoVisibilityFromDefaults;
- (void)_updateDate;
- (void)_updateFlagImages;
- (void)_updateIsVIP;
- (void)_updateMailbox;
- (void)_updateReplyImages;
- (void)_updateSize;
- (void)_updateSnippet;
- (void)_updateStatusImage;
- (void)_updateSubject;
- (void)_updateThreadData;
- (void)_updateToCcString;
- (void)_updateUnreadImages;
- (void)_vipSendersChanged:(id)arg1;
@property(copy, nonatomic) NSString *addressee; // @synthesize addressee=_addressee;
@property(readonly, nonatomic) NSImage *attachmentImage;
@property(retain, nonatomic) NSDictionary *attachmentImages; // @synthesize attachmentImages=_attachmentImages;
@property(retain, nonatomic) NSArray *avatarContacts; // @synthesize avatarContacts=_avatarContacts;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
- (void)dealloc;
@property(readonly, nonatomic) NSImage *firstFlag;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(copy, nonatomic) NSOrderedSet *flagImages; // @synthesize flagImages=_flagImages;
@property(nonatomic) long long flags;
- (id)init;
- (id)initWithMessage:(id)arg1;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) BOOL isVIP;
@property(copy, nonatomic) NSString *mailbox; // @synthesize mailbox=_mailbox;
@property(nonatomic) __weak MFCriterion *mailboxCriterion;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
@property(nonatomic) NSUInteger messageSize;
@property(nonatomic) long long photoSize; // @synthesize photoSize=_photoSize;
@property(readonly, nonatomic) NSImage *replyAlternateImage;
@property(readonly, nonatomic) NSImage *replyImage;
@property(retain, nonatomic) NSDictionary *replyImages; // @synthesize replyImages=_replyImages;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL showContactPhotos;
@property(nonatomic) BOOL showRecipient;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *snippet;
@property(copy, nonatomic) NSString *snippetString; // @synthesize snippetString=_snippetString;
@property(retain, nonatomic) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) NSUInteger threadCount; // @synthesize threadCount=_threadCount;
@property(copy, nonatomic) NSString *toCcString; // @synthesize toCcString=_toCcString;
@property(retain, nonatomic) NSDictionary *unreadImages; // @synthesize unreadImages=_unreadImages;
@property(readonly, nonatomic) NSImage *unreadImage;
- (void)update;

@end

