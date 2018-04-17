//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactTagNameEditViewControllerDelegate.h"
#import "IContactLabelMgrExt.h"
#import "MMTableViewIndexViewDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ContactTagData, MMTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface ContactTagNewDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, ContactTagNameEditViewControllerDelegate, UIAlertViewDelegate, MMTableViewIndexViewDelegate>
{
    _Bool _bIsAlreadyDisMissSelf;
    _Bool _bIsTagNameChange;
    int _commonSearchScene;
    unsigned int _curEventID;
    NSString *_rightBarTitle;
    MMTableView *_tableView;
    long long _curActionType;
    ContactTagData *_contactTagData;
    NSMutableArray *_curMemberContactList;
    NSString *_curDisplayTagName;
    NSMutableArray *_contactsKeyArray;
    NSMutableDictionary *_contactsDict;
}

- (void).cxx_destruct;
- (id)addContactSectionKey:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bIsAlreadyDisMissSelf; // @synthesize bIsAlreadyDisMissSelf=_bIsAlreadyDisMissSelf;
@property(nonatomic) _Bool bIsTagNameChange; // @synthesize bIsTagNameChange=_bIsTagNameChange;
@property(nonatomic) int commonSearchScene; // @synthesize commonSearchScene=_commonSearchScene;
@property(retain, nonatomic) ContactTagData *contactTagData; // @synthesize contactTagData=_contactTagData;
@property(retain, nonatomic) NSMutableDictionary *contactsDict; // @synthesize contactsDict=_contactsDict;
@property(retain, nonatomic) NSMutableArray *contactsKeyArray; // @synthesize contactsKeyArray=_contactsKeyArray;
- (unsigned int)createOrUpdateTagName;
@property(nonatomic) long long curActionType; // @synthesize curActionType=_curActionType;
@property(retain, nonatomic) NSString *curDisplayTagName; // @synthesize curDisplayTagName=_curDisplayTagName;
@property(nonatomic) unsigned int curEventID; // @synthesize curEventID=_curEventID;
@property(retain, nonatomic) NSMutableArray *curMemberContactList; // @synthesize curMemberContactList=_curMemberContactList;
- (void)dealloc;
- (void)handleDeleteContactAtIndexPath:(id)arg1;
- (id)init;
- (void)initData;
- (void)initView;
- (id)initViewControllerWithContactTagData:(id)arg1;
- (id)initViewControllerWithCreateNewTag;
- (void)internalDisMissSelfAnimated:(_Bool)arg1;
- (_Bool)isTagNameEmptyOrExist:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)makeAddMemberCellContent:(id)arg1;
- (void)makeMemberContactCellContent:(id)arg1 WithIndexPath:(id)arg2;
- (void)makeTagDetailEditHeaderContent:(id)arg1;
- (void)makeTagNameCellContent:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onClickAddMemberCell;
- (void)onClickContactItemCellWithIndexPath:(id)arg1;
- (void)onClickTagNameCell;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onSaveBarButtonPress:(id)arg1;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)processContactSectionData:(id)arg1;
- (void)reloadData;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(_Bool)arg2;
@property(retain, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setSaveButtonEnable:(_Bool)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)sortTagContacts;
- (void)sortTagContactsV2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateRightBarButtonStatus;
- (unsigned int)updateTagMember;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

