//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MFAccountURLMigrator : NSObject
{
}

+ (id)accountURLStringFromV1V2PersistenceAccountAttributes:(id)arg1 syncable:(BOOL)arg2;
+ (id)accountURLStringWithIdentifierFromSystemAccount:(id)arg1 syncable:(BOOL)arg2;
+ (id)connectionHostnameAccountURLStringFromSystemAccount:(id)arg1;

@end

