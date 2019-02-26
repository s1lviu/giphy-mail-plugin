//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSData, NSURL;

@interface MCArchiveFileWrapper : NSFileWrapper
{
    NSFileWrapper *_realFileWrapper;
    NSData *_archiveData;
    long long _archiveType;
    NSURL *_compressedFileURL;
}

- (void)_archiveFileWrapperCommonInit;
- (id)_temporaryDirectoryURL;
- (id)addFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (NSUInteger)approximateSize;
@property(retain, nonatomic) NSData *archiveData; // @synthesize archiveData=_archiveData;
@property(nonatomic) long long archiveType; // @synthesize archiveType=_archiveType;
@property(retain, nonatomic) NSURL *compressedFileURL; // @synthesize compressedFileURL=_compressedFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)fileWrappers;
- (void)getCompressedData:(id *)arg1 compressedFileURL:(id *)arg2 archiveType:(long long *)arg3;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 archiveType:(long long)arg2;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 compressionLevel:(long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 options:(NSUInteger)arg2 error:(id *)arg3;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)keyForFileWrapper:(id)arg1;
- (id)preferredFilename;
@property(readonly, nonatomic) NSFileWrapper *realFileWrapper;
- (void)removeFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;

@end

