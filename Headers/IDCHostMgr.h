//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSRecursiveLock, NSString;

@interface IDCHostMgr : MMService <MMService>
{
    NSMutableArray *m_idcHostItemList;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
- (id)GetRealHostFromHost:(id)arg1;
- (void)HandleHostListFromPB:(id)arg1;
- (void)HandleIPListFromPB:(id)arg1 PortList:(id)arg2 TimeOutList:(id)arg3;
- (void)HandleNetworkSectResp:(id)arg1;
- (void)SaveIDCHost;
- (void)SaveIDCHost:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

