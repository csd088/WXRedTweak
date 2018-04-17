//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView, WebRecordDB;

@interface VisitHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    _Bool _hasClickOpenTipBtn;
    MMTableView *_tableView;
    NSMutableArray *_records;
    MMUILabel *_head;
    UIView *_navBarBkg;
    MMUILabel *_bottomLabel;
    WebRecordDB *_recordDb;
    MMUILabel *_cenerTitleTip;
    MMUILabel *_cenerDetailTip;
    UIButton *_openTipBtn;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) MMUILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) MMUILabel *cenerDetailTip; // @synthesize cenerDetailTip=_cenerDetailTip;
@property(retain, nonatomic) MMUILabel *cenerTitleTip; // @synthesize cenerTitleTip=_cenerTitleTip;
- (void)clearAllHistory;
- (void)clearHistoryAndInitCenterView;
- (void)dealloc;
- (id)genTableHeaderView;
@property(nonatomic) _Bool hasClickOpenTipBtn; // @synthesize hasClickOpenTipBtn=_hasClickOpenTipBtn;
@property(retain, nonatomic) MMUILabel *head; // @synthesize head=_head;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)layoutCenterView;
@property(retain, nonatomic) UIView *navBarBkg; // @synthesize navBarBkg=_navBarBkg;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickOpenTipBtn;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onOperate:(id)arg1;
@property(retain, nonatomic) UIButton *openTipBtn; // @synthesize openTipBtn=_openTipBtn;
@property(retain, nonatomic) WebRecordDB *recordDb; // @synthesize recordDb=_recordDb;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)showComformActionSheet:(id)arg1 confirmTitle:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tryInitCenterLabel;
- (void)tryInitCenterView;
- (void)tryInitIconImageView;
- (void)tryInitopenTipBtn;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

