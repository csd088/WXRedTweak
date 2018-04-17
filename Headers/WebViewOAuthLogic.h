//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "JSApiScopeConfirmWindowDelegate.h"
#import "PBMessageObserverDelegate.h"

@class JSApiScopeConfirmWindow, MMUIViewController, NSString;

@interface WebViewOAuthLogic : MMObject <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate>
{
    CDUnknownBlockType _completeBlock;
    MMUIViewController *_vc;
    JSApiScopeConfirmWindow *_confirmWindow;
    NSString *_oauthUrl;
    _Bool _needNotifySvrWhenConfirm;
    NSString *_confirmRediretUrl;
    _Bool _isAuthing;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)closeConfirmWindow;
- (void)handleConfirmResponse:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
@property(nonatomic) _Bool isAuthing; // @synthesize isAuthing=_isAuthing;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)reset;
- (void)sendCancelOprationToSvr;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)showConfirmWindow:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (void)startOAuthWithUrl:(id)arg1 userName:(id)arg2 scene:(int)arg3 viewController:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

