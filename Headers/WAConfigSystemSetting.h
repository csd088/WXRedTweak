//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface WAConfigSystemSetting : NSObject
{
    NSDictionary *_dicSetting;
}

- (void).cxx_destruct;
- (unsigned int)appMaxRunningCount;
- (unsigned int)appServiceMaxDataSize;
- (unsigned int)attrSyncForceUpdateTime;
- (unsigned long long)cacheTotalFileMaxSize;
- (id)cdnBaseURL;
- (_Bool)containSyncLaunchScene:(unsigned int)arg1;
- (unsigned int)deadThreadBanDuration;
- (unsigned int)deadThreadMaxTimeToLive;
- (unsigned int)defaultAppMaxRunningCount;
- (unsigned int)defaultAppServiceMaxDataSize;
- (unsigned int)defaultAttrSyncForceUpdateTime;
- (id)defaultCDNBaseURL;
- (unsigned long long)defaultCacheTotalFileMaxSize;
- (unsigned long long)defaultDownloadFileMaxSize;
- (id)defaultHttpHeaderReferer;
- (unsigned long long)defaultLocalStorageItemMaxSize;
- (id)defaultPreloadHttpHeaderReferer;
- (unsigned int)defaultStarNumberLimitation;
- (id)defaultSyncLaunchSceneList;
- (unsigned long long)downloadFileMaxSize;
- (unsigned int)downloadFileMaxTimeoutMS;
- (unsigned int)gameAppMaxRunningCount;
- (unsigned long long)gameDownloadFileMaxSize;
- (long long)gamePerfCollectInterval;
- (double)gamePerfCollectSamplePercentage;
- (unsigned int)getValidStarNumberLimitation;
- (id)httpHeaderBlackList;
- (id)httpHeaderMode;
- (id)httpHeaderReferer;
- (id)httpHeaderWhiteList;
- (id)httpSetting;
- (id)initWithSetting:(id)arg1;
- (unsigned long long)localStorageItemMaxSize;
- (unsigned int)nativeBufferQueueLimitByte;
- (unsigned int)nativeBufferSizeLimitByte;
- (_Bool)reloadTaskWithScene:(unsigned int)arg1 homePath:(_Bool)arg2;
- (unsigned int)requestMaxTimeoutMS;
- (unsigned int)starNumberLimitation;
- (id)subContextImgDomainList;
- (id)syncLaunchSceneList;
- (unsigned int)uploadFileMaxTimeoutMS;
- (unsigned int)webSocketMaxTimeoutMS;
- (unsigned int)widgetImageFlowLimitDuration;
- (unsigned int)widgetImageFlowLimitMaxSize;

@end

