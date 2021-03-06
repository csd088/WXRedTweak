//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class MidasIAPPayReq, MidasIAPPayResp, MidasIAPReprovideOperation, MidasOperationLoop, NSString;

@interface MidasIAPInteractor : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    _Bool _inited;
    MidasOperationLoop *_opLoop;
    MidasIAPPayReq *_oriReq;
    MidasIAPPayResp *_lastResp;
    _Bool _initGetCfgOK;
    MidasIAPReprovideOperation *_reprovideOp;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)backToGame:(id)arg1 isSuccess:(_Bool)arg2 delegate:(id)arg3;
- (void)blockProcessMpCgiError:(id)arg1 errorCode:(long long)arg2 inner:(id)arg3 msg:(id)arg4 operation:(id)arg5;
- (void)blockProcessMpNetError:(id)arg1 operation:(id)arg2;
- (void)blockProcessMpSucess:(id)arg1 resp:(id)arg2 operation:(id)arg3;
- (void)buyAgain:(id)arg1 delegate:(id)arg2;
- (_Bool)checkMainThreadAndRegister:(_Bool)arg1;
- (void)checkReprovide;
- (void)dealloc;
- (_Bool)initializeWithReq:(id)arg1 environment:(id)arg2 locale:(id)arg3 extra:(id)arg4 reprovideDelegate:(id)arg5;
- (_Bool)isIAPEnable;
- (void)launchH5PayPage:(id)arg1 delegate:(id)arg2;
- (void)launchPay:(id)arg1 delegate:(id)arg2;
- (void)launchResultPage:(id)arg1 resp:(id)arg2 delegate:(id)arg3;
- (void)manualReprovideFromOperation:(id)arg1;
- (void)onManualReprovideResp:(id)arg1;
- (id)operationFromMpReq:(id)arg1 delegate:(id)arg2;
- (id)operationFromPayReq:(id)arg1 delegate:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)processInitReprovideQueue:(id)arg1 transactions:(id)arg2;
- (void)processManualReprovideQueue:(id)arg1 transactions:(id)arg2 fromOperation:(id)arg3;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)queryMpInfo:(id)arg1 delegate:(id)arg2;
- (void)queryProductInfo:(id)arg1 delegate:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)setInitGetCfgResult:(_Bool)arg1;
- (void)showRiskAlert:(id)arg1 errorCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadDeviceInfo:(id)arg1;
- (_Bool)validateInitParamOfReq:(id)arg1 environment:(id)arg2 locale:(id)arg3 extra:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

