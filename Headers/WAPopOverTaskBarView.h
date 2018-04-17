//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class MMUIViewController, NSString, UICollectionView, UIView, WAPopOverTaskBarlogic;

@interface WAPopOverTaskBarView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isNeedBackToChatButton;
    id <WAPopOverTaskBarViewDelegate> _taskBarViewDelegate;
    MMUIViewController *_containerVC;
    UIView *_contentView;
    UICollectionView *_taskCollectionView;
    WAPopOverTaskBarlogic *_taskBarLogic;
}

- (void).cxx_destruct;
- (double)calCollectionViewHeight;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)initContentView;
- (void)initTaskCollectionView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPopOverTaskBarLogic:(id)arg1;
@property(nonatomic) _Bool isNeedBackToChatButton; // @synthesize isNeedBackToChatButton=_isNeedBackToChatButton;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)layoutTaskCollectionView;
- (void)moveToLeftMostTaskItem;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onMainFrameTaskItemUpdated;
- (void)reloadData;
@property(retain, nonatomic) WAPopOverTaskBarlogic *taskBarLogic; // @synthesize taskBarLogic=_taskBarLogic;
@property(nonatomic) __weak id <WAPopOverTaskBarViewDelegate> taskBarViewDelegate; // @synthesize taskBarViewDelegate=_taskBarViewDelegate;
@property(retain, nonatomic) UICollectionView *taskCollectionView; // @synthesize taskCollectionView=_taskCollectionView;
- (id)taskItemAtRowIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

