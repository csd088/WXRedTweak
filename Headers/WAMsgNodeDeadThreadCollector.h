//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMTimer, NSMutableArray, NSString;

@interface WAMsgNodeDeadThreadCollector : MMService <MMService>
{
    NSMutableArray *_pendingThreadList;
    MMTimer *_timer;
}

- (void).cxx_destruct;
- (void)addThread:(id)arg1 appId:(id)arg2 userInfo:(id)arg3;
- (void)checkThreadList;
- (id)init;
- (void)reportWithThreadInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

