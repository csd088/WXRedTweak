//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WCPatternCacheMgr : NSObject
{
    NSMutableDictionary *m_cache;
    _Bool m_needWriteBack;
    _Bool m_needLoadData;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceEnterBackground;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (id)pathForData;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (void)tryLoadData;
- (void)trySaveData;

@end

