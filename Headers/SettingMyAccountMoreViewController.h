//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMMFacebookMgrExt.h"
#import "IQQAccountMgrExt.h"
#import "settingModifyEmailDelegate.h"

@class MMTableViewInfo, NSString;

@interface SettingMyAccountMoreViewController : MMUIViewController <settingModifyEmailDelegate, IQQAccountMgrExt, IMMFacebookMgrExt>
{
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)OnUnBindQQOK;
- (void)dealloc;
- (void)doRegester;
- (void)initAccountCellData;
- (void)initDeepLinkConfig;
- (void)initDeleteAccountCellData;
- (void)initExportUserDataEntry;
- (void)modifyEmail;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onProfileChange;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)reloadTableData;
- (void)saveNewEmail;
- (void)showFacebook;
- (void)showModifyQQView;
- (void)undoRegester;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

