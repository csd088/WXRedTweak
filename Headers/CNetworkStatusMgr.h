//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt.h"
#import "IAudioToMessageExt.h"
#import "IEmoticonDownloadExt.h"
#import "INetworkStatusReportWithGPSExt.h"
#import "INewSyncExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CNetworkStatusReportArchive, MMTimer, NSDate, NSString, ReportInfo;

@interface CNetworkStatusMgr : MMService <INewSyncExt, MMService, MessageObserverDelegate, IAudioToMessageExt, CNetworkStatusExt, IEmoticonDownloadExt, MMKernelExt, PBMessageObserverDelegate, INetworkStatusReportWithGPSExt>
{
    _Bool m_bConnecting;
    _Bool m_bConnected;
    _Bool m_bReadToGettingData;
    long long m_n64MsgIdForVoiceMsgToDownload;
    _Bool m_bReadOnceAgain;
    _Bool m_bDidCheckNewWiFiInterface;
    unsigned int m_uiConnnectType;
    unsigned int m_uiShortChannelFailCount;
    unsigned int m_uiLastReportTime;
    struct timeval m_tvLastGettingDataTime;
    CNetworkStatusReportArchive *m_reportArchive;
    vector_a9c0768e m_vecMesssageIdToListen;
    int m_eNetworkStatusType;
    NSDate *m_dtLastReport;
    ReportInfo *m_oReportInfo;
    MMTimer *m_oReportTimer;
    NSString *m_nsLastWifiBssid;
    NSString *m_nsCacheWifiBssid;
    NSString *m_nsCacheWifiSsid;
    _Bool m_isCheckingNetwork;
    _Bool m_isBaseNetworkOK;
    _Bool m_isWechatNetworkOK;
    _Bool m_isWechatLongLinkOK;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)AddOplogInternal;
- (void)CheckBG2FG;
- (void)CheckReportNetworkInfo:(unsigned int)arg1;
- (void)ClearIDCache;
- (void)InternalReportNetworkInfo:(id)arg1;
- (void)InternalReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)LoadReportInfo;
- (id)MakeSafeReportString:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnNetworkStatusReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)OnUpdateWifiInfo:(_Bool)arg1 Scene:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)SaveReportInfo;
- (void)UpdateWifiInfo:(unsigned int)arg1;
- (void)callDisconnectStatusChangedExt;
- (void)checkCallStatusChangedExt;
- (void)dealloc;
- (void)doReportIpxx:(id)arg1;
- (void)doReportNetworkStatus;
- (struct timeval)getCurTimeVal;
- (id)getGpsReportString:(id)arg1;
- (unsigned int)getNetworkStatusType;
- (id)getReportStringWithScene:(unsigned int)arg1;
- (void)handleNetworkStatusChange:(unsigned int)arg1;
- (void)handleReport:(int)arg1;
- (void)handleReportDisconnected:(int)arg1;
- (void)handleReportGettingData:(int)arg1;
- (void)handleReportLongUnConnectCount;
- (void)handleSyncBegin;
- (void)handleSyncEnd;
- (void)handleVoiceDowdload:(id)arg1 error:(_Bool)arg2;
- (id)init;
- (void)initMessageIdToListen;
- (_Bool)isDuringSync;
- (_Bool)isNeedReport;
- (_Bool)isNetworkChecking;
- (void)loadNetworkStatusReportArchive;
- (void)onAuthOK;
- (void)onNetworkCheckResult:(_Bool)arg1 stage:(unsigned int)arg2 allEnds:(_Bool)arg3 kvString:(id)arg4;
- (void)onNewSyncBegin;
- (void)onNewSyncEnd;
- (void)onNewSyncOplogConnectFail;
- (void)onNewSyncOplogFail;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)realCalDisconnected;
- (void)regExt;
- (void)setReadToGettingData;
- (void)startNetworkChecking;
- (void)translateStatus;
- (void)translateStatusLongConnect;
- (void)translateStatusLongUnConnect;
- (void)unListenMessageId;
- (void)unregExt;
- (void)zeroVoiceMsgToDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

