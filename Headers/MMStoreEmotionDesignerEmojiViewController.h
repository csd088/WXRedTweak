//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomManageAddLogicDelegate.h"
#import "EmotionCollectionFooterViewDelegate.h"
#import "EmotionDesignerEmojiTipsViewControllerDelegate.h"
#import "MMStoreEmotionTagSelectDelegate.h"
#import "StoreEmotionGetDesignerEmojiListCgiDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class EmojiInfo, EmojiTag, EmoticonCustomManageAddLogic, EmoticonStoreReportInfo, EmotionBannerSet, EmotionCollectionFooterView, NSArray, NSString, StoreEmotionGetDesignerEmojiListCgi, StoreEmotionPageShareLogic, UICollectionView;

@interface MMStoreEmotionDesignerEmojiViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmotionCollectionFooterViewDelegate, StoreEmotionGetDesignerEmojiListCgiDelegate, EmotionDesignerEmojiTipsViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, MMStoreEmotionTagSelectDelegate>
{
    long long m_numOfItemInOneLine;
    UICollectionView *m_collectionView;
    EmotionCollectionFooterView *m_collectionFooterView;
    StoreEmotionGetDesignerEmojiListCgi *m_getAllDesignerEmojisCgi;
    StoreEmotionGetDesignerEmojiListCgi *m_curGetDesignerEmojisCgi;
    NSArray *m_tagsList;
    EmojiTag *m_lastSelectedTag;
    unsigned int m_designerUin;
    NSString *m_keyword;
    unsigned long long m_searchId;
    EmotionBannerSet *m_bannerSet;
    unsigned long long m_designerEmojiMode;
    EmojiInfo *m_operatingEmoji;
    EmoticonCustomManageAddLogic *m_emoticonAddLogic;
    StoreEmotionPageShareLogic *m_shareLogic;
    EmoticonStoreReportInfo *_reportInfo;
}

+ (_Bool)canShowDesignerEmoji;
- (void).cxx_destruct;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configCollectionView;
- (void)configShareEntrance;
- (void)configTagsEntrance;
- (void)dealloc;
- (id)init;
- (void)initView;
- (id)initWithBannerSet:(id)arg1;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (id)initWithEmojiTag:(id)arg1;
- (id)initWithKeyword:(id)arg1 searchId:(unsigned long long)arg2;
- (_Bool)isInSearchMode;
- (_Bool)isInTagMode;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onCancelTagSelect;
- (void)onClickTagIcon;
- (void)onClose;
- (void)onGetDesignerEmojiListFailed;
- (void)onGetDesignerEmojiListFailedWithBannerSetId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithKeyword:(id)arg1;
- (void)onGetDesignerEmojiListFailedWithTagId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListSuccessedWithBannerSetId:(unsigned int)arg1 DesignerEmojiList:(id)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListSuccessedWithKeyword:(id)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListSuccessedWithTagId:(unsigned int)arg1 DesignerEmojiList:(id)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListSuccessedWithTags:(id)arg1 DesignerEmojiList:(id)arg2 hasMore:(_Bool)arg3;
- (void)onOperate:(id)arg1;
- (void)onSaveDesignerEmojiWithMd5:(id)arg1;
- (void)onSelectShowAllTag;
- (void)onSelectTag:(id)arg1;
- (void)onSendDesignerEmojiWithMd5:(id)arg1;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (void)switchToGetDesignerEmojiListCgi:(id)arg1;
- (void)updateCollectionLayout:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

