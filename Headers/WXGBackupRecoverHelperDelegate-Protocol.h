//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PacketBackupDataPush, PacketBackupDataTag;

@protocol WXGBackupRecoverHelperDelegate <NSObject>
- (void)onData:(PacketBackupDataPush *)arg1 writeToFileFinsh:(_Bool)arg2;
- (void)onDataTagProcessEnd:(PacketBackupDataTag *)arg1;
- (void)onRequestSessionProcessEndWithResponse:(NSArray *)arg1;
@end

