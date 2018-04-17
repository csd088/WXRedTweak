//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IOnlineClientMgrExt.h"
#import "MMBezelTipsViewControllerDelegate.h"
#import "MMBezelWindowControllerDelegate.h"
#import "MMService.h"

@class MMBezelWindowController, MMWindowController, NSMutableArray, NSString, OnlineDeviceInfoViewController;

@interface MMOnlineDeviceStatusMgr : MMService <IOnlineClientMgrExt, MMBezelWindowControllerDelegate, MMBezelTipsViewControllerDelegate, MMService>
{
    OnlineDeviceInfoViewController *_viewController;
    MMBezelWindowController *_bezelWindowController;
    NSMutableArray *_bezelWindowQueue;
    MMWindowController *_tipsWindowController;
}

- (void).cxx_destruct;
- (void)addBezelWindowInfoInQueue:(id)arg1;
- (void)bezelWindowControllerDidHitInside:(id)arg1;
- (void)bezelWindowControllerDidHitOutside:(id)arg1;
- (void)bezelWindowControllerDidTapActionButton:(id)arg1;
- (void)bezelWindowControllerDidTapAvatarView:(id)arg1;
- (void)checkShouldRemoveMessageWindow;
- (void)dealloc;
- (void)dequeueBezelWindowInfo;
- (void)dismissBezelWindow;
- (void)hideDeviceInfoView;
- (void)hideDeviceLockTipsWindow;
- (id)init;
- (void)onExtDeviceActiveChanged:(_Bool)arg1 withActiveMessage:(id)arg2;
- (void)onExtDeviceNotifyUnlockWithMessage:(id)arg1;
- (void)onExtDeviceOnlineStatusChanged:(unsigned int)arg1;
- (void)onLogoutWeb;
- (void)onServiceEnterForeground;
- (void)removeMessageWindowWithType:(unsigned long long)arg1;
- (void)showDeviceActiveWindowWithActiveMsg:(id)arg1;
- (void)showDeviceInfoUnlockMacView:(id)arg1;
- (void)showDeviceInfoView;
- (void)showDeviceInfoViewWithIsManualOpen:(_Bool)arg1;
- (void)showDeviceLockTipsWindowWithLocked:(_Bool)arg1;
- (void)showDeviceLockedTipsWindowWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDeviceUnlockedTipsWindowWithCompletion:(CDUnknownBlockType)arg1;
- (void)showNotifyUnlockWindowWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

