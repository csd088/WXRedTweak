//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt.h"
#import "WCPayLQTDetailControlLogicDelegate.h"

@class JSEvent, NSString, WCPayF2FJSApiAuthenticationControlLogic, WCPayF2FReceiveDetailControlLogic, WCPayJSApiAuthenticationControlLogic, WCPayLQTDetailControlLogic, WCPayT2BCDetailControlLogic;

@interface WCPayJSApiOpenWCPayViewControl : WCPayControlLogic <WCPayLQTDetailControlLogicDelegate, WCBaseControlMgrExt>
{
    JSEvent *m_jsEvent;
    WCPayJSApiAuthenticationControlLogic *m_oAuthenticationLogic;
    int m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
    WCPayF2FJSApiAuthenticationControlLogic *_f2fJSApiAuthenControlLogic;
    WCPayF2FReceiveDetailControlLogic *_f2fDetailControlLogic;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
    WCPayT2BCDetailControlLogic *_t2bcDetailControlLogic;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) WCPayF2FReceiveDetailControlLogic *f2fDetailControlLogic; // @synthesize f2fDetailControlLogic=_f2fDetailControlLogic;
@property(retain, nonatomic) WCPayF2FJSApiAuthenticationControlLogic *f2fJSApiAuthenControlLogic; // @synthesize f2fJSApiAuthenControlLogic=_f2fJSApiAuthenControlLogic;
- (id)initWithJSEvent:(id)arg1;
@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
- (void)onLQTDetailControlLogicStop;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
@property(retain, nonatomic) WCPayT2BCDetailControlLogic *t2bcDetailControlLogic; // @synthesize t2bcDetailControlLogic=_t2bcDetailControlLogic;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

