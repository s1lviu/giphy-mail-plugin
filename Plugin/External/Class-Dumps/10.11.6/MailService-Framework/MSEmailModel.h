//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSArray, NSString;

@interface MSEmailModel : NSObject <NSSecureCoding>
{
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_fromAddress;
    NSString *_subject;
    NSArray *_htmlStringsAndAttachments;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(copy, nonatomic) NSArray *htmlStringsAndAttachments; // @synthesize htmlStringsAndAttachments=_htmlStringsAndAttachments;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;

@end

