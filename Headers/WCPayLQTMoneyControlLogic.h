//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCPayAddPayCardDelegate.h"
#import "WCPayLQTClickRedeemCgiDelegate.h"
#import "WCPayLQTMoneyViewControllerDelegate.h"
#import "WCPayLQTPreRedeemFundCgiDelegate.h"
#import "WCPayLQTPurchaseFundCgiDelegate.h"
#import "WCPayLQTQryPurchaaseResultCgiDelegate.h"
#import "WCPayLQTRedeemFundCgiDelegate.h"
#import "WCPayLQTTransSuccessViewControllerDelegate.h"
#import "WCPayPayMoneyLogicDelegate.h"

@class NSString, PreRedeemFundRes, PurchaseFundRes, WCPayLQTClickRedeemCgi, WCPayLQTPreRedeemFundCgi, WCPayLQTPurchaseFundCgi, WCPayLQTQryPurchaseResultCgi, WCPayLQTRedeemFundCgi, WCPayPayMoneyLogic;

@interface WCPayLQTMoneyControlLogic : WCPayControlLogic <WCPayLQTPurchaseFundCgiDelegate, WCPayLQTQryPurchaaseResultCgiDelegate, WCPayLQTRedeemFundCgiDelegate, WCPayLQTMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCPayLQTTransSuccessViewControllerDelegate, WCBaseControlLogicDeleagte, WCPayLQTPreRedeemFundCgiDelegate, WCPayAddPayCardDelegate, WCPayLQTClickRedeemCgiDelegate>
{
    _Bool _bIsBindQueryAfterAddNewCard;
    id <WCPayLQTMoneyControlLogicDelegate> _logicDelegate;
    WCPayLQTPurchaseFundCgi *_prepayCgi;
    WCPayLQTQryPurchaseResultCgi *_payResultQryCgi;
    WCPayLQTPreRedeemFundCgi *_preRedeemFundCgi;
    WCPayLQTRedeemFundCgi *_redeemFundCgi;
    WCPayLQTClickRedeemCgi *_clickRedeemCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    PurchaseFundRes *_purchaseResp;
    PreRedeemFundRes *_preRedeemResp;
    NSString *_bindSerialFromNewCard;
}

- (void).cxx_destruct;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)alertViewConfirmClick;
@property(nonatomic) _Bool bIsBindQueryAfterAddNewCard; // @synthesize bIsBindQueryAfterAddNewCard=_bIsBindQueryAfterAddNewCard;
@property(retain, nonatomic) NSString *bindSerialFromNewCard; // @synthesize bindSerialFromNewCard=_bindSerialFromNewCard;
@property(retain, nonatomic) WCPayLQTClickRedeemCgi *clickRedeemCgi; // @synthesize clickRedeemCgi=_clickRedeemCgi;
- (void)dealloc;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithMoneyScene:(unsigned long long)arg1 controlData:(id)arg2;
@property(nonatomic) __weak id <WCPayLQTMoneyControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)onGetLQTClickRedeemCgiResp:(id)arg1;
- (void)onGetLQTPreRedeemFundResp:(id)arg1;
- (void)onGetLQTPurchaseFundResp:(id)arg1;
- (void)onGetLQTQryPurchaseResultResp:(id)arg1;
- (void)onGetLQTRedeemFundResp:(id)arg1;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 pwdEnString:(id)arg2;
- (void)onMoneyViewControllerBack;
- (void)onMoneyViewControllerClickAddNewCard;
- (void)onPayMoneyLogicDidStop;
- (void)onTransSuccessViewControllerConfirmBtnClick;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayLQTQryPurchaseResultCgi *payResultQryCgi; // @synthesize payResultQryCgi=_payResultQryCgi;
@property(retain, nonatomic) WCPayLQTPreRedeemFundCgi *preRedeemFundCgi; // @synthesize preRedeemFundCgi=_preRedeemFundCgi;
@property(retain, nonatomic) PreRedeemFundRes *preRedeemResp; // @synthesize preRedeemResp=_preRedeemResp;
@property(retain, nonatomic) WCPayLQTPurchaseFundCgi *prepayCgi; // @synthesize prepayCgi=_prepayCgi;
@property(retain, nonatomic) PurchaseFundRes *purchaseResp; // @synthesize purchaseResp=_purchaseResp;
@property(retain, nonatomic) WCPayLQTRedeemFundCgi *redeemFundCgi; // @synthesize redeemFundCgi=_redeemFundCgi;
- (void)sendClickRedeemCgi;
- (void)sendLQTPrePayRquestWithMoney:(unsigned int)arg1;
- (void)sendPreRedeemRequestWithFee:(unsigned int)arg1;
- (void)sendQryPurchaseResultFromSvr;
- (void)sendRedeemRequestWithFee:(unsigned int)arg1 pwdEnString:(id)arg2;
- (void)startLogic;
- (void)startPayMoneyLogicWithReqkey:(id)arg1;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

