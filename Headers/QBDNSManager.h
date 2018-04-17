//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, QBDNSCache, QBDNSHTTPDESResolver, QBDNSUDPResolver;

@interface QBDNSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _dnsEnabled;
    QBDNSCache *_cache;
    QBDNSUDPResolver *_defaultResolver;
    QBDNSHTTPDESResolver *_httpDNSResolver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)IBSDNSSettingChanged:(id)arg1;
- (long long)badDateInterVal;
@property(retain) QBDNSCache *cache; // @synthesize cache=_cache;
@property(retain) QBDNSUDPResolver *defaultResolver; // @synthesize defaultResolver=_defaultResolver;
- (void)handleBadRequest:(id)arg1 isRecycle:(_Bool)arg2;
- (void)handleResponse:(id)arg1;
@property(retain) QBDNSHTTPDESResolver *httpDNSResolver; // @synthesize httpDNSResolver=_httpDNSResolver;
- (id)init;
- (_Bool)isBadDateOn;
- (_Bool)isHTTPDNSEnabled;
- (long long)isNetworkChanged:(_Bool)arg1;
- (void)loadData;
- (id)qbDNSRequest:(id)arg1 cached:(_Bool)arg2;
- (id)query:(id)arg1 cached:(long long)arg2;
- (id)queryInternalWithDomain:(id)arg1 resolver:(id)arg2;
- (void)storeCache;

@end

