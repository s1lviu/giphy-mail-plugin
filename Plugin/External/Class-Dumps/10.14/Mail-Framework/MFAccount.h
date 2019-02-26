//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "EMAccount-Protocol.h"
#import "MCAccount-Protocol.h"

@class ACAccount, MCAuthScheme, NSArray, NSDate, NSImage, NSNumber, NSString;

@interface MFAccount : NSObject <MCAccount, EMAccount>
{
    BOOL _primitiveIsOffline;
    BOOL _primitiveIsWillingToGoOnline;
    BOOL _autosynchronizingEnabled;
    ACAccount *_systemAccount;
    NSDate *_lastConnectionValidationTime;
}

+ (id)accountTypeString;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (BOOL)defaultsToSSL;
+ (id)genericAccountLargeImage;
+ (BOOL)haveAccountsBeenConfigured;
+ (id)keyPathsForValuesAffectingOfflineDisplayName;
+ (void)resetConfigureDynamically;
+ (void)saveAccountInfoToDefaults;
+ (void)saveAccounts:(id)arg1;
+ (id)sharedAccountStore;
+ (id)standardPorts;
+ (id)standardSSLPorts;
- (id)_anisetteData;
- (void)_discoverConnectionPropertiesWithCompletionHandler:(id)arg1;
- (id)_hostnameFromParentAccount:(id)arg1;
- (BOOL)_matchesDiscoveredSystemAccount:(id)arg1 fromEmailAddress:(id)arg2;
- (BOOL)_matchesEmailAddress:(id)arg1;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;
- (void)_queueAccountInfoDidChange;
- (void)_setPortNumber:(long long)arg1 releasingConnections:(BOOL)arg2;
- (void)_setSecurityLayerType:(long long)arg1 releasingConnections:(BOOL)arg2;
- (void)_setUsesSSL:(BOOL)arg1 releasingConnections:(BOOL)arg2;
- (BOOL)_systemAccountChangedHostname:(BOOL)arg1 portNumber:(BOOL)arg2 usesSSL:(BOOL)arg3;
- (BOOL)_systemAccountDidUpdateProperties:(id)arg1 fromPropertyDiscovery:(BOOL)arg2;
- (void)accountInfoDidChange;
- (id)accountName;
- (id)accountPassword;
- (unsigned int)accountType;
@property(readonly, copy) NSString *accountTypeIdentifier;
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
- (id)authenticatedConnection;
@property(copy) NSString *authenticationScheme;
@property(nonatomic) BOOL autosynchronizingEnabled; // @synthesize autosynchronizingEnabled=_autosynchronizingEnabled;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
@property(readonly, nonatomic) BOOL canGoOffline;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *clientInfo;
@property BOOL configureDynamically;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;
- (unsigned int)customAuthentication;
@property(readonly, nonatomic) long long defaultPortNumber;
@property(readonly, nonatomic) long long defaultSecurePortNumber;
@property(readonly, copy) NSString *description;
- (void)discoverConnectionProperties;
- (BOOL)discoverConnectionPropertiesAndWait;
- (void)displayCredentialPromptInWindow:(id)arg1 completion:(id)arg2;
@property(copy) NSString *displayName;
@property(readonly) BOOL hasPasswordCredential;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *hostname;
@property(readonly) BOOL hostnameOriginatesFromParentAccount;
@property(readonly, copy) NSString *identifier;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (void)invalidateAllStores;
@property(readonly) BOOL isAOSAccount;
@property BOOL isActive;
- (BOOL)isEqual:(id)arg1;
@property BOOL isOffline;
@property BOOL isWillingToGoOnline;
@property(readonly) BOOL isYahooAccount;
@property(retain) NSDate *lastConnectionValidationTime; // @synthesize lastConnectionValidationTime=_lastConnectionValidationTime;
- (id)localizedRecoverySuggestionWithServerError:(id)arg1 genericDescription:(id)arg2;
- (id)loginName;
@property(readonly, copy) NSString *machineID;
- (id)nameForMailbox:(id)arg1;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *offlineDisplayName;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *parentAccountIdentifier;
@property(copy, nonatomic) NSString *password;
@property long long portNumber;
@property(readonly) NSNumber *portNumberObject;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property BOOL primitiveIsOffline; // @synthesize primitiveIsOffline=_primitiveIsOffline;
@property BOOL primitiveIsWillingToGoOnline; // @synthesize primitiveIsWillingToGoOnline=_primitiveIsWillingToGoOnline;
- (BOOL)refreshAccountProperties;
- (BOOL)refreshParentAccountProperties;
- (void)releaseAllConnections;
- (void)renewCredentialsWithOptions:(id)arg1 completionHandler:(id)arg2;
@property(readonly, nonatomic) BOOL requiresAuthentication;
- (void)respondToHostBecomingReachable;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
- (void)save;
- (void)savePersistentAccount;
@property long long securityLayerType;
- (id)serverName;
- (void)setAccountName:(id)arg1;
- (void)setAccountPassword:(id)arg1;
- (void)setCustomAuthentication:(unsigned int)arg1;
- (void)setLoginName:(id)arg1;
- (void)setServerName:(id)arg1;
@property BOOL shouldUseAuthentication;
@property(copy) NSString *storedDisplayName;
@property(copy) ACAccount *systemAccount; // @synthesize systemAccount=_systemAccount;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
@property(copy) NSString *username;
@property BOOL usesSSL;
- (id)smtpIdentifier;
@property(readonly) NSImage *squareIcon;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
@property(readonly) BOOL usesParentAuthentication;
@property(readonly) NSNumber *usesSSLObject;
- (void)validateConnections;
- (void)validateConnectionsIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy) NSString *externalHostname;
@property(readonly) Class superclass;

@end

