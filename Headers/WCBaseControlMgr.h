//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSString;

@interface WCBaseControlMgr : MMService <MMService>
{
    NSMutableArray *m_arrLogicStack;
}

- (void).cxx_destruct;
- (void)cancelAllLogic;
- (id)getCurrentLogic;
- (id)getLogic:(unsigned int)arg1;
- (id)init;
- (_Bool)isCurrentLogic:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (unsigned int)startLogic:(id)arg1;
- (void)stopCurrentLogic;
- (void)stopLogic:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

