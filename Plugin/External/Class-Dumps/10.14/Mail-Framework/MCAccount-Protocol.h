//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "EMAccount-Protocol.h"

@class MCAuthScheme, MCConnection, NSArray, NSString;

@protocol MCAccount <EMAccount>
+ (NSString *)accountTypeString;
+ (void)saveAccountInfoToDefaults;
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
- (MCConnection *)authenticatedConnection;
@property(copy) NSString *authenticationScheme;
- (BOOL)canAuthenticateWithScheme:(MCAuthScheme *)arg1;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *clientInfo;
@property BOOL configureDynamically;
- (BOOL)connectAndAuthenticate:(MCConnection *)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;
- (void)discoverConnectionProperties;
- (BOOL)discoverConnectionPropertiesAndWait;
@property(copy) NSString *displayName;
@property(readonly, copy) NSString *identifier;
@property(readonly) BOOL isYahooAccount;
- (NSString *)localizedRecoverySuggestionWithServerError:(NSString *)arg1 genericDescription:(NSString *)arg2;
@property(readonly, copy) NSString *machineID;
- (MCConnection *)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *oneTimePassword;
@property long long portNumber;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property(readonly, nonatomic) BOOL requiresAuthentication;
- (void)respondToHostBecomingReachable;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property long long securityLayerType;
@property BOOL shouldUseAuthentication;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
@property(copy) NSString *username;
@property BOOL usesSSL;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;

@optional
@property(copy) NSString *externalHostname;
@end

