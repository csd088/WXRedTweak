//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "ReportStrategyExt.h"
#import "WCDBCorruptReportExt.h"

@class MMDBRConfig, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MMDatabaseRecoverMgr : MMService <WCDBCorruptReportExt, ReportStrategyExt, MMService>
{
    _Bool m_isUserLogon;
    _Bool m_isRecovering;
    _Bool _m_isGlobalSceneCanPop;
    NSMutableDictionary *m_dicAssistWithDBID;
    NSMutableDictionary *m_dicAssistWithScene;
    NSMutableDictionary *m_dicSceneStatus;
    id <MMDatabaseRecoverMgrDelegate> m_delegate;
    MMDBRConfig *m_config;
    NSObject<OS_dispatch_queue> *m_workQueue;
}

+ (void)SetupMMDatabaseRecoverMgr;
- (void).cxx_destruct;
- (void)CheckAutoRecoverOnAllScene;
- (_Bool)IsDiskSpaceLowWithContext:(id)arg1 andGetRestSize:(unsigned long long *)arg2 suggustSize:(unsigned long long *)arg3;
- (void)OnUIAppearWithContext:(id)arg1;
- (void)OnUIClickCancelWithContext:(id)arg1;
- (void)OnUIClickConfirmWithContext:(id)arg1;
- (void)OnUserLogOut;
- (void)OnUserLogon;
- (id)PopRecoverContextOnSceneCardPkg;
- (id)PopRecoverContextOnSceneFavorite;
- (id)PopRecoverContextOnSceneGame;
- (id)PopRecoverContextOnSceneGlobal;
- (id)PopRecoverContextOnSceneTimeline;
- (void)RebootWechat;
- (void)ReceiveServerConfig:(id)arg1;
- (void)ReportDatabaseCorrupt:(id)arg1;
- (id)UIDBRecoverTip:(id)arg1;
- (void)callbackUIWithRet:(_Bool)arg1 errorMsg:(id)arg2;
- (void)checkAutoRecoverOnScene:(unsigned int)arg1 withName:(id)arg2;
- (void)clearAssistConfig;
- (void)clearConfig;
- (_Bool)customRepair:(id)arg1;
- (void)dealloc;
- (void)deleteRepair:(id)arg1;
- (void)generateAssistWithDBID:(id)arg1;
- (void)generateAssistWithScene:(id)arg1;
- (_Bool)hasAutoRecoverOnScene:(unsigned int)arg1 getRecoverContext:(id *)arg2;
- (id)init;
- (void)internalRebootWechat;
- (void)internalRunRecover:(id)arg1;
- (void)loadConfig;
@property(retain, nonatomic) MMDBRConfig *m_config; // @synthesize m_config;
@property(nonatomic) __weak id <MMDatabaseRecoverMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dicAssistWithDBID; // @synthesize m_dicAssistWithDBID;
@property(retain, nonatomic) NSMutableDictionary *m_dicAssistWithScene; // @synthesize m_dicAssistWithScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicSceneStatus; // @synthesize m_dicSceneStatus;
@property(nonatomic) _Bool m_isGlobalSceneCanPop; // @synthesize m_isGlobalSceneCanPop=_m_isGlobalSceneCanPop;
@property(nonatomic) _Bool m_isRecovering; // @synthesize m_isRecovering;
@property(nonatomic) _Bool m_isUserLogon; // @synthesize m_isUserLogon;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workQueue; // @synthesize m_workQueue;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (void)onRecoverEnd:(id)arg1 ret:(_Bool)arg2 errorMsg:(id)arg3;
- (void)onRecoverStart:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (id)popRecoverContextOnScene:(unsigned int)arg1;
- (void)recoverDatabase:(id)arg1;
- (void)reportStatistic:(id)arg1 repairer:(id)arg2 ret:(_Bool)arg3 errorCode:(int)arg4;
- (void)resetAllContextInScene;
- (void)resetAllCorruptInfo;
- (void)runRecover:(id)arg1;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

