//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WXGMigrationServerLogicDelegate <NSObject>
- (void)onServerLogicAlertCode:(unsigned long long)arg1;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicCurrentTransferSpeed:(float)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
@end

