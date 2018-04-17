//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMFontMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "INewSyncExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MMOnlineSilentDownloadLogicController, NSArray, NSMutableArray, NSMutableSet, NSString, SendActiveCGI;

@interface OnlineClientMgr : MMService <IMMLanguageMgrExt, MessageObserverDelegate, PBMessageObserverDelegate, IMMNewSessionMgrExt, MMKernelExt, IMMFontMgrExt, INewSyncExt, MMService>
{
    _Bool m_isRunningAsBakDevice;
    _Bool m_hasGetChatList;
    _Bool m_needHeartBeat;
    _Bool m_shouldVibrateOrSound;
    _Bool m_isLoginWebWX;
    _Bool m_isGettingOnlineInfo;
    _Bool m_shouldIgnorePushOpen;
    unsigned int m_curOnlineVersion;
    unsigned int m_iconType;
    NSString *m_summaryXml;
    NSArray *m_arrOnlineInfo;
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
    NSMutableArray *m_lastDeviceActiveMsg;
    SendActiveCGI *m_sendActiveCGI;
    unsigned long long m_lastReadItemCreateTime;
    unsigned int m_markVoiceAsReadEventID;
    unsigned long long m_extDeviceControls;
    CDUnknownBlockType m_logoutCallBackBlock;
    _Bool m_isNeedCallLoginWeb;
    MMOnlineSilentDownloadLogicController *_silentDownloadLogic;
}

- (void).cxx_destruct;
- (void)DidEnterBackground:(id)arg1;
- (void)DidEnterForeground:(id)arg1;
- (void)EnterChat:(id)arg1;
- (id)GetBannerIcon;
- (unsigned long long)GetExtDeviceControls;
- (id)GetExtDeviceOnlineInfo;
- (id)GetOnlineClient;
- (unsigned int)GetOnlineIconType;
- (void)GetOnlineInfoFromServer;
- (void)GetOnlineInfoFromServerWithNewOnlineVersion:(unsigned int)arg1;
- (id)GetOnlineSummary;
- (id)GetOnlineSummaryForKey:(id)arg1;
- (id)GetSelfOnlineInfo;
- (void)MarkChatRead:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)QuitChat:(id)arg1;
- (void)checkExtDeviceOnlineStatusWithOnlineList:(id)arg1;
- (void)checkExtdeviceControlsWithFlag:(unsigned int)arg1;
- (void)checkShouldAddFileHelperToTopWithFlag:(unsigned int)arg1;
- (void)checkShouldHideOnelineInfoBarWithFlag:(unsigned int)arg1;
- (void)checkShouldIgnorePushOpenWithFlag:(unsigned int)arg1;
- (_Bool)createGetOnlineInfoEventWithNewOnlineVersion:(unsigned int)arg1;
- (void)dealloc;
- (void)enterWCMsgListWithLastItemCreateTime:(unsigned long long)arg1;
- (void)forceCheckIsLoginWebWX;
- (unsigned int)genRandomClienMsgId;
- (void)getAllChat;
- (id)getSendActiveCGI;
- (void)handleEnterEnterpriseChat:(id)arg1;
- (void)handleEnterWCMsgList:(id)arg1;
- (void)handleMarkEnterpriseChatRead:(id)arg1;
- (void)handleMarkPatternLockUpdate:(id)arg1;
- (void)handleMarkTimelineListRead:(id)arg1;
- (void)handleQuitEnterpriseChat:(id)arg1;
- (void)handleSilentDownloadFileList:(id)arg1;
- (id)init;
- (_Bool)isExtDeviceLocked;
- (_Bool)isLoginWebWX;
- (_Bool)isNeedCallLoginWeb;
- (_Bool)isNeedShowPush;
- (_Bool)isNeedSyncChatname:(id)arg1;
- (_Bool)isRunningAsBakDevice;
- (void)logoutWeb:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)markPatternLockUpdate;
- (void)markTimelineListReadWithLastItemId:(id)arg1 itemCreateTime:(unsigned long long)arg2;
- (void)markVoiceMsgAsReadWithMessage:(id)arg1;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onFontSizeChange;
- (void)onGetChatListResponsed:(id)arg1;
- (void)onGetEnterFunction:(id)arg1;
- (void)onGetMarkFunction:(id)arg1;
- (void)onGetNotifyUnlockFunction:(id)arg1;
- (void)onGetOnlineInfoResponse:(id)arg1 newOnlineVersion:(unsigned int)arg2;
- (void)onGetQuitFunction:(id)arg1;
- (void)onGetSendCommandFunction:(id)arg1;
- (void)onGetSyncEnd;
- (void)onKickQuit;
- (void)onLanguageChange;
- (void)onManulLogOut;
- (void)onMarkMsgReadReturn:(id)arg1 withResponse:(id)arg2;
- (void)onNewSyncChatListSession:(id)arg1;
- (void)onNewSyncEnd;
- (void)onNewSyncEnterFunction:(id)arg1;
- (void)onNewSyncEnterSession:(id)arg1;
- (void)onNewSyncGetAllChat;
- (void)onNewSyncMarkFunction:(id)arg1;
- (void)onNewSyncNotifyUnlock:(id)arg1;
- (void)onNewSyncOnlineStatus:(unsigned int)arg1 withVersion:(unsigned int)arg2;
- (void)onNewSyncQuitFunction:(id)arg1;
- (void)onNewSyncQuitSession:(id)arg1;
- (void)onNewSyncSendCommand:(id)arg1;
- (void)onRemoteDeviceEnterSession:(id)arg1;
- (void)onRemoteDeviceQuitSession:(id)arg1;
- (void)resetNeedCallLoginWeb;
- (void)sendActiveRequest;
- (void)sendUnActiveRequest;
- (void)setAuthFlag:(unsigned long long)arg1;
- (void)setIsNeedShowPush:(_Bool)arg1;
- (void)setLastDeviceActiveMsg:(id)arg1;
@property(retain, nonatomic) MMOnlineSilentDownloadLogicController *silentDownloadLogic; // @synthesize silentDownloadLogic=_silentDownloadLogic;
- (_Bool)shoudlSendActiveCGI;
- (void)statusNotifyGetChatListRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

