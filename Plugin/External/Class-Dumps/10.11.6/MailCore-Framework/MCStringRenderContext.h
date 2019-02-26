//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MCJunkRecorder, NSMutableString, NSSet;

@interface MCStringRenderContext : NSObject
{
    NSMutableString *_buffer;
    BOOL _updateBodyFlags;
    MCJunkRecorder *_junkRecorder;
    NSUInteger _imageCount;
    NSUInteger _characterCount;
    NSSet *_URLs;
    NSSet *_imageURLs;
    long long _mode;
}

@property(retain, nonatomic) NSSet *URLs; // @synthesize URLs=_URLs;
@property(readonly, nonatomic) NSMutableString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) NSUInteger characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) NSUInteger imageCount; // @synthesize imageCount=_imageCount;
@property(retain, nonatomic) NSSet *imageURLs; // @synthesize imageURLs=_imageURLs;
- (id)init;
- (id)initForMode:(long long)arg1;
@property(retain, nonatomic) MCJunkRecorder *junkRecorder; // @synthesize junkRecorder=_junkRecorder;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)renderString;
@property(nonatomic) BOOL updateBodyFlags; // @synthesize updateBodyFlags=_updateBodyFlags;

@end

