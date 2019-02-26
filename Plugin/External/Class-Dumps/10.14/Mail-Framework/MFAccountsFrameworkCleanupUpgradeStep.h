//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFRemoveMessagesUpgradeStep.h>

@class NSArray, NSDictionary;

@interface MFAccountsFrameworkCleanupUpgradeStep : MFRemoveMessagesUpgradeStep
{
    NSArray *_systemAccountURLs;
    NSDictionary *_systemAccountIdentifiersByV1V2PersistenceAccountUID;
    NSDictionary *_systemAccountsURLByV1V2PersistenceAccountURL;
    NSDictionary *_v1V2PersistenceAccountURLBySystemAccountURL;
    NSDictionary *_syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;
    NSDictionary *_connectionHostnameAccountURLBySystemAccountURL;
    NSDictionary *_systemAccountURLByConnectionHostnameAccountURL;
    NSDictionary *_syncableSystemAccountURLByConnectionHostnameAccountURL;
    NSDictionary *_mailboxFileSystemURLByDatabaseURL;
}

+ (BOOL)requiredAfterBackbooting;
+ (NSUInteger)targetVersion;
- (void)_cleanupEMLXFilesAndDatabaseForMailboxURLs:(id)arg1;
- (id)_fixCriteria:(id)arg1;
- (id)_fixCriteriaWithLegacyMailboxURLs:(id)arg1;
- (id)_fixV1V2PersistenceAccountURL:(id)arg1 syncable:(BOOL)arg2;
- (void)_migrateAccountsPathsInMailboxesTable;
- (void)_migrateDefaults;
- (void)_migratePOPAccounts;
- (void)_migratePlistsContainingAccounts;
- (void)_updateMailboxURLsFromDatabase:(id)arg1 systemAccountURL:(id)arg2;
- (id)_updateRules:(id)arg1;
- (id)_updateSignatures:(id)arg1;
- (id)_updateSmartMailboxes:(id)arg1;
@property(copy, nonatomic) NSDictionary *connectionHostnameAccountURLBySystemAccountURL; // @synthesize connectionHostnameAccountURLBySystemAccountURL=_connectionHostnameAccountURLBySystemAccountURL;
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;
@property(copy, nonatomic) NSDictionary *mailboxFileSystemURLByDatabaseURL; // @synthesize mailboxFileSystemURLByDatabaseURL=_mailboxFileSystemURLByDatabaseURL;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;
@property(copy, nonatomic) NSDictionary *syncableSystemAccountURLByConnectionHostnameAccountURL; // @synthesize syncableSystemAccountURLByConnectionHostnameAccountURL=_syncableSystemAccountURLByConnectionHostnameAccountURL;
@property(copy, nonatomic) NSDictionary *syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL; // @synthesize syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL=_syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;
@property(copy, nonatomic) NSDictionary *systemAccountIdentifiersByV1V2PersistenceAccountUID; // @synthesize systemAccountIdentifiersByV1V2PersistenceAccountUID=_systemAccountIdentifiersByV1V2PersistenceAccountUID;
@property(copy, nonatomic) NSDictionary *systemAccountURLByConnectionHostnameAccountURL; // @synthesize systemAccountURLByConnectionHostnameAccountURL=_systemAccountURLByConnectionHostnameAccountURL;
@property(copy, nonatomic) NSArray *systemAccountURLs; // @synthesize systemAccountURLs=_systemAccountURLs;
@property(copy, nonatomic) NSDictionary *systemAccountsURLByV1V2PersistenceAccountURL; // @synthesize systemAccountsURLByV1V2PersistenceAccountURL=_systemAccountsURLByV1V2PersistenceAccountURL;
@property(copy, nonatomic) NSDictionary *v1V2PersistenceAccountURLBySystemAccountURL; // @synthesize v1V2PersistenceAccountURLBySystemAccountURL=_v1V2PersistenceAccountURLBySystemAccountURL;

@end

