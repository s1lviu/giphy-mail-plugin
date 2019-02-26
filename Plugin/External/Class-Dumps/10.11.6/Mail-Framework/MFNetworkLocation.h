//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSDictionary, NSMutableDictionary;

@interface MFNetworkLocation : NSObject
{
    NSMutableDictionary *_accountDefaults;
    NSMutableDictionary *_domainsBySubnet;
}

- (void)_postChanged;
- (void)addDomains:(id)arg1 IPAddresses:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *archive;
- (id)bestDeliveryAccountForAccount:(id)arg1 ignoreLockedDelivery:(BOOL)arg2;
- (id)deliveryAccountForAccount:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *domains;
- (NSUInteger)hash;
- (id)init;
- (id)initWithArchive:(id)arg1;
- (id)initWithDomains:(id)arg1 IPAddresses:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocation:(id)arg1;
- (BOOL)isForDomain:(id)arg1;
- (BOOL)isForIPAddress:(id)arg1;
- (void)setAccount:(id)arg1 deliveryAccount:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *subnets;

@end

