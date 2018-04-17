//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "WAAppDetailInfoManagerExtension.h"

@class CContact, MMTableViewInfo, NSArray, NSString, UIView;

@interface WAAppAuthorizationViewController : MMUIViewController <WAAppDetailInfoManagerExtension, MMTipsViewControllerDelegate>
{
    NSString *m_appid;
    NSArray *m_authorationList;
    _Bool m_isAuthInfoChanged;
    UIView *m_fakeNavBar;
    UIView *m_emptyView;
    MMTableViewInfo *m_tableViewInfo;
    CContact *_contact;
    id <WAAppAuthorizationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)dealloc;
@property(nonatomic) __weak id <WAAppAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)initCustomNavigationBar;
- (void)initEmptyView;
- (void)initFakeNavBar;
- (void)initTableViewInfo;
- (id)initWithContact:(id)arg1;
- (id)makeHeaderView;
- (void)onAuthInfoChangeed:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onGetAppAuthInfoList:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (void)onReturn;
- (void)reloadTableViewInfo;
- (void)requestAuthorazitionInfo;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

