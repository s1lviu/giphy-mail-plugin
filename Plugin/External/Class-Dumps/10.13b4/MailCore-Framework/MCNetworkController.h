//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSMapTable, NSString;

@interface MCNetworkController : NSObject
{
    struct __SCDynamicStore *_store;
    struct __CFString *_dnsKey;
    id _domainLock;
    NSString *_domainName;
    NSMapTable *_reachabilityReferencesForWatchedAccounts;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)applyIDNAToHostname:(id)arg1 encode:(BOOL)arg2;
+ (id)baseDomainsForDomains:(id)arg1;
+ (BOOL)domain:(id)arg1 isSubdomainOfDomain:(id)arg2;
+ (id)encodeAddressForIDNA:(id)arg1 encodingHint:(NSUInteger)arg2;
+ (id)filteredDomainNamesFromHost:(id)arg1;
+ (id)filteredIPAddressesFromHost:(id)arg1;
+ (id)getHostUUIDString;
+ (BOOL)hostnameIsFullyQualified:(id)arg1;
+ (id)log;
+ (long long)networkStatus;
+ (id)sharedInstance;
+ (id)subnetForIPAddress:(id)arg1;
- (void)_clearDomainName;
- (struct __SCNetworkReachability *)_newNetworkReachabilityReferenceForHostname:(id)arg1;
- (void)_postNetworkChangeNotification;
- (void)_queueNetworkChangeNotification;
- (id)_watchedAccounts;
- (void)dealloc;
@property(readonly, copy) NSString *domainName;
- (id)init;
- (BOOL)isHostReachable:(id)arg1 needToEstablishInternetConnection:(char *)arg2;
- (void)startWatchingReachabilityForAccount:(id)arg1;
- (void)stopWatchingReachabilityForAccount:(id)arg1;

@end

