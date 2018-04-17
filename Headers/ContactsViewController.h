//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "ContactsDataLogicDelegate.h"
#import "FriendAsistSessionExt.h"
#import "MMSearchBarDelegate.h"
#import "MMTableViewIndexViewDelegate.h"
#import "MMVoiceSearchBarDelegate.h"
#import "MMVoiceSearchDelegate.h"
#import "MainTableDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "WCActionSheetDelegate.h"

@class ContactsDataLogic, FTSVoiceSearchBarController, MMMainTableView, NSMutableArray, NSString, UILabel;

@interface ContactsViewController : MMTabBarBaseViewController <UITableViewDelegate, UITableViewDataSource, VerifyPhoneDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate, MMSearchBarDelegate, MMVoiceSearchDelegate, MMVoiceSearchBarDelegate, FriendAsistSessionExt, MainTableDelegate, MMTableViewIndexViewDelegate>
{
    MMMainTableView *m_tableView;
    struct UIEdgeInsets m_tableViewInsets;
    UILabel *m_countLabel;
    _Bool m_bShouldShowBindPhoneTip;
    ContactsDataLogic *m_contactsDataLogic;
    _Bool m_bShowHelloGroup;
    unsigned int m_uiHelloGroupUnreadCount;
    FTSVoiceSearchBarController *m_mmSearchBar;
    _Bool m_hasAddBlurEffectView;
    _Bool m_needResetTableViewOffset;
    _Bool m_canSearchAfterInit;
    NSMutableArray *m_brandContactGroupList;
    _Bool _hasWechatOut;
}

- (void).cxx_destruct;
- (long long)ConvertToNormalContactSection:(long long)arg1;
- (_Bool)HasBindPhoneTip;
- (_Bool)HasBrandGroup;
- (_Bool)HasEnterpriseBrandGroup;
- (_Bool)HasHelloGroup;
- (_Bool)HasWechatOutGroup;
- (void)MMVoiceSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)MMVoiceSearchBarCancelButtonClicked:(id)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(id)arg1;
- (_Bool)MMVoiceSearchBarShouldBeginEditing:(id)arg1;
- (void)OnSayHelloDataChange;
- (void)OnVoiceSearchButtonDown;
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (void)addBlurEffectView;
- (void)addRedDotInGroupCell:(id)arg1 existNewBrand:(_Bool)arg2;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)bindPhoneReturn;
- (void)cancelSearch;
- (void)checkDBAutoRecover;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)displayControllerSetActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)finishSearchBarImmediately;
- (double)getMainTableHeight;
- (unsigned int)getSectionType:(long long)arg1;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)getViewController;
- (void)handleFrameChangeForSearchBar;
- (void)handleSelectEnterpriseBrand:(unsigned long long)arg1;
- (void)handleSelectdBindPhone;
- (void)handleSelectdBrandGroup:(long long)arg1;
- (void)handleSelectdChatRoom;
- (void)handleSelectdContactTag;
- (void)handleSelectdHelloGroup;
- (void)handleSelectdHelloGroup:(unsigned long long)arg1;
- (void)handleSelectedWechatOut;
- (_Bool)hasShowSearchBar;
@property(nonatomic) _Bool hasWechatOut; // @synthesize hasWechatOut=_hasWechatOut;
- (void)hideSearchBar;
- (id)init;
- (void)initBarItem;
- (void)initCountLabel:(id)arg1;
- (void)initData;
- (void)initDeepLinkConfig;
- (void)initSearchBar;
- (void)initTableView;
- (void)initTitleArea;
- (void)initView;
- (_Bool)isSeachActive;
- (void)loadHeaderViewSelection;
@property(retain, nonatomic) NSMutableArray *m_brandContactGroupList; // @synthesize m_brandContactGroupList;
- (void)makeBindPhoneCell:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeChatRoomCell:(id)arg1;
- (void)makeContactTagCell:(id)arg1;
- (void)makeEnterpriseBrandCell:(id)arg1 row:(long long)arg2;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeHelloGroupCell:(id)arg1;
- (void)makeHelloGroupCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeNewUserTipCell:(id)arg1;
- (void)makeWechatOutCell:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfCellForBrandGroup;
- (long long)numberOfCellForEnterpriseBrandGroup;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddContact;
- (void)onContactsDataChange;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)onShowAddContact:(_Bool)arg1;
- (void)openContactInfoView:(int)arg1;
- (void)reLayoutSubviews;
- (void)removeContactsTip;
- (void)resetViewStatus;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)setSearchTableResultText:(id)arg1;
- (void)setUIEventEnabled:(_Bool)arg1;
- (_Bool)shouldShowTabbar;
- (void)showContactInfoView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryHideSearchGuideView;
- (void)tryInitViewOfSearchController;
- (void)updateCount;
- (void)updateEnterpriseBrandItemCell:(id)arg1 contact:(id)arg2;
- (void)updateHelloGroup;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (void)updateTabBarBadge;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

