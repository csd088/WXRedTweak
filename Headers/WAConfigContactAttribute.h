//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAppBrandInfo;

@interface WAConfigContactAttribute : NSObject
{
    CAppBrandInfo *_appBrandInfo;
}

- (void).cxx_destruct;
- (unsigned int)actualWebViewDepth;
- (unsigned int)backgroundMaxRunningTimeInterval;
- (unsigned int)backgroundNetworkInterruptedTimeout;
- (_Bool)canKeepAliveByAudioPlay;
- (id)downloadFileDomainList;
- (unsigned int)downloadFileMaxConcurrentCount;
- (unsigned int)fileStorageMaxSizeMB;
- (id)initWithAppBrandInfo:(id)arg1;
- (unsigned int)lifeSpanAfterSuspend;
- (unsigned int)lifeSpanBeforeSuspend;
- (unsigned int)localStorageMaxSizeMB;
- (unsigned int)maxWorkerConcurrent;
- (id)requestDomainList;
- (unsigned int)requestMaxConcurrentCount;
- (id)uploadFileDomainList;
- (unsigned int)uploadFileMaxConcurrentCount;
- (id)webSocketDomainList;
- (unsigned int)webSocketMaxConcurrentCount;
- (_Bool)webSocketSkipPortCheck;
- (unsigned int)webViewMaxDepth;

@end

