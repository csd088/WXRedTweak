//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface VOIPPushMgr : MMService <PBMessageObserverDelegate, MMService>
{
}

- (void)HandleVoipAckResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipInviteRemindResp:(id)arg1 Event:(unsigned int)arg2;
- (void)InviteRemindByUsrName:(id)arg1 InviteType:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendAckRequestByRoomId:(int)arg1 andRoomKey:(long long)arg2 andContact:(id)arg3 andAckStatus:(int)arg4 needPreconnect:(_Bool)arg5;
- (void)SendInviteRemindRequestBy:(id)arg1 InviteType:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

