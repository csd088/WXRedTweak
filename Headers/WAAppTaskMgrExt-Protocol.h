//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WAAppTaskMgrExt <NSObject>

@optional
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(NSString *)arg1;
- (void)onAppTaskBannerTextChanged;
- (void)onAppTaskLaunch:(NSString *)arg1;
- (void)onAppTaskMarkBackToChatIsShow:(_Bool)arg1;
- (void)onAppTaskTerminate:(NSString *)arg1;
- (void)onLeaveWeAppWhenClickBackBtnOrWeAppTerminateWithUsername:(NSString *)arg1;
@end

