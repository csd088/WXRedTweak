//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WASearchAdMgr : MMService <PBMessageObserverDelegate, MMKernelExt, MMService>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)getKVLogHead;
- (void)handleAdLogResp:(id)arg1;
- (void)handleWeAppSearchAdClickResp:(id)arg1;
- (void)onServiceInit;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (void)weAppClickStream:(id)arg1 keywordId:(id)arg2 clickType:(int)arg3 searchScene:(long long)arg4;
- (void)weAppSearchADClick:(id)arg1 statKeywordId:(id)arg2 searchId:(id)arg3 docId:(id)arg4 position:(long long)arg5 appUserName:(id)arg6 appVersion:(id)arg7 adBuffer:(id)arg8 searchScene:(long long)arg9 clickExtInfo:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

