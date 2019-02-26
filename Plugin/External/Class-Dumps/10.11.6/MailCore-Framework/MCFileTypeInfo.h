//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSString;

@interface MCFileTypeInfo : NSObject
{
    unsigned int _osType;
    NSString *_mimeType;
    NSString *_pathExtension;
}

- (void)_getTypeInfoBasedOnFields:(NSUInteger *)arg1 inputClass:(struct __CFString *)arg2 inputValue:(struct __CFString *)arg3;
- (void)_getTypeInfoFromFallbackFields:(NSUInteger *)arg1;
- (id)description;
- (BOOL)getTypeInfoForDesiredFields:(NSUInteger)arg1;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned int osType; // @synthesize osType=_osType;
@property(copy, nonatomic) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
@property(readonly, copy, nonatomic) NSArray *pedigree;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;

@end

