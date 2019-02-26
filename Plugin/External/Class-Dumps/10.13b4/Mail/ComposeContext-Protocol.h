//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MCMessageBody.h"

@class ComposeViewController, ComposeWindowController, NSDictionary, NSSet;

@protocol ComposeContext <NSObject>
@property(readonly, nonatomic) BOOL blockRemoteContent;
- (void)controllerInitialized:(ComposeViewController *)arg1;
- (void)controllerWillClose:(ComposeViewController *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *editorSettings;
- (void)generateQuotedContentWithCompletion:(void (^)(MCMessageBody *))arg1;
@property(readonly, nonatomic) BOOL isInteractive;
@property(readonly, nonatomic) BOOL isMiniaturized;
- (void)loadCompleted:(ComposeViewController *)arg1;
- (void)presentEditor:(id <PopoutAnimationContentProvider>)arg1 completion:(void (^)(void))arg2;
@property(readonly, nonatomic) BOOL shouldBlockTermination;
@property(readonly, nonatomic) BOOL shouldTransientlyActivateApplication;
@property(readonly, copy, nonatomic) NSSet *targetMessages;
@property(readonly, nonatomic) long long type;
- (ComposeWindowController *)windowControllerWithState:(NSSet *)arg1;

@optional
@property(nonatomic) __weak ComposeWindowController *windowController;
@end

