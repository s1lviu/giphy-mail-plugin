//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSImage, NSString;

@interface MTMAccount : NSObject
{
    BOOL _isLocalAccount;
    NSString *_backupID;
    NSString *_displayName;
    NSImage *_squareIcon;
}

+ (id)accountsFromMailLibraryURL:(id)arg1 preferences:(id)arg2;
@property(readonly, copy, nonatomic) NSString *backupID; // @synthesize backupID=_backupID;
- (id)description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountInfo:(id)arg1;
@property(readonly, nonatomic) BOOL isLocalAccount; // @synthesize isLocalAccount=_isLocalAccount;
@property(readonly, nonatomic) NSImage *squareIcon; // @synthesize squareIcon=_squareIcon;

@end

