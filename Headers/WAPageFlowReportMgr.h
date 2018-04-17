//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString, WAPageFlowAppInfo, WAPageFlowObject, WAPageFlowSessionInfo;

@interface WAPageFlowReportMgr : MMService <MMService>
{
    WAPageFlowObject *m_currentPage;
    unsigned int m_EntranceWebviewID;
    unsigned int m_lastClickTime;
    unsigned long long m_lastClickTimeInMs;
    NSMutableDictionary *m_preSceneMap;
    NSMutableDictionary *m_preSceneInfoMap;
    NSString *m_weappUsername;
    unsigned long long m_weappFromScene;
    unsigned long long m_weappRealStartUpTimeInMs;
    WAPageFlowAppInfo *_currentAppInfo;
    WAPageFlowSessionInfo *_currentSessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPageFlowAppInfo *currentAppInfo; // @synthesize currentAppInfo=_currentAppInfo;
- (id)currentPage;
@property(retain, nonatomic) WAPageFlowSessionInfo *currentSessionInfo; // @synthesize currentSessionInfo=_currentSessionInfo;
- (id)genBasePath:(id)arg1;
- (id)genDefaultPagePVItem;
- (id)genQuery:(id)arg1;
- (void)onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)onBackFromLauchWeApp;
- (void)onBackFromNative:(id)arg1;
- (void)onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)onFirstPageInit:(id)arg1 query:(id)arg2 homeWebview:(id)arg3;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onTargetToNativaPage:(id)arg1;
- (void)onTargetToPage:(id)arg1 toWebviewIfExist:(id)arg2;
- (void)onTargetToWeApp:(id)arg1 appid:(id)arg2;
- (void)onTargetToWebPage:(id)arg1;
- (void)onUserOperate;
- (void)onWeAppBecomeActive:(id)arg1 appInfo:(id)arg2 openFromWeApp:(_Bool)arg3;
- (void)onWeAppProcessBegin:(id)arg1 scene:(unsigned long long)arg2;
- (void)onWeAppProcessTriggerDownload;
- (void)onWeAppStartUpProcessTerminate:(unsigned int)arg1;
- (void)onWebViewIndexFinished;
- (unsigned long long)preSceneForUrlIfExist:(id)arg1;
- (id)preSceneNoteForUrlIfExist:(id)arg1;
- (void)rigisterScanSourceType:(unsigned int)arg1 sourceInfo:(id)arg2 forUrl:(id)arg3;
- (id)webviewReportPluginInWebview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

