//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate.h"
#import "ILinkEventExt.h"
#import "MMToastViewControllerDelegate.h"
#import "SetTrustedFriendTipsViewDelegate.h"
#import "TrustedFriendsLogicDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMTableViewInfo, MMToastViewController, NSString, SetTrustedFriendTipsView, TrustedFriendsLogic;

@interface SetTrustedFriendsViewController : MMUIViewController <ChatRoomMemberGridViewDelegate, UIAlertViewDelegate, TrustedFriendsLogicDelegate, SetTrustedFriendTipsViewDelegate, ILinkEventExt, MMToastViewControllerDelegate>
{
    _Bool _m_isDeleting;
    NSString *_tipWording;
    MMTableViewInfo *_m_tableViewInfo;
    TrustedFriendsLogic *_m_trustedFriendsLogic;
    MMToastViewController *_m_toastView;
    SetTrustedFriendTipsView *_m_tipsView;
}

- (void).cxx_destruct;
- (void)addMember;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didAddTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didFailedCGI:(unsigned int)arg1 error:(unsigned int)arg2 msg:(id)arg3;
- (void)didFinishGetTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didFinishSyncTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)didRemoveTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didStartCGI:(unsigned int)arg1;
- (unsigned long long)getMemberViewColumnCount;
- (void)goBackToMySetting;
- (_Bool)hasSetTrustedFriend;
- (id)init;
- (void)initMemberView;
- (void)initNavigationBar;
- (void)initTableView;
@property(nonatomic) _Bool m_isDeleting; // @synthesize m_isDeleting=_m_isDeleting;
@property(retain, nonatomic) MMTableViewInfo *m_tableViewInfo; // @synthesize m_tableViewInfo=_m_tableViewInfo;
@property(retain, nonatomic) SetTrustedFriendTipsView *m_tipsView; // @synthesize m_tipsView=_m_tipsView;
@property(retain, nonatomic) MMToastViewController *m_toastView; // @synthesize m_toastView=_m_toastView;
@property(retain, nonatomic) TrustedFriendsLogic *m_trustedFriendsLogic; // @synthesize m_trustedFriendsLogic=_m_trustedFriendsLogic;
- (id)makeHeaderView;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)onAddTrustedFriend;
- (void)onClose;
- (void)onDeleteMember:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPressBackBtn;
- (void)onPressDoneBtn;
- (void)relayoutNaviBarButton:(_Bool)arg1;
- (void)reloadMemberView;
- (void)setShowRemoveMember;
@property(copy, nonatomic) NSString *tipWording; // @synthesize tipWording=_tipWording;
- (void)showEnd;
- (void)tryShowNotEnoughTips;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePresented:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

