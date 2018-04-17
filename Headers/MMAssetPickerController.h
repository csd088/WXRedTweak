//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImageCropperDelegate.h"
#import "MMImagePreviewBrowserControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMAlbum, MMAssetPickerControllerProxyObject, MMAssetPickerControllerProxyObjectForAllAsset, MMAssetPickerSendButton, MMAssetSelectedCollectionView, MMTableView, NSMutableArray, NSString, UIButton, UIImageView;

@interface MMAssetPickerController : MMUIViewController <UIViewControllerPreviewingDelegate, MMImageCropperDelegate, WCActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, MMImagePreviewBrowserControllerDelegate>
{
    NSMutableArray *_imageDictionaries;
    UIImageView *_bottomBar;
    UIButton *_previewButton;
    double _realBottomBarHeight;
    _Bool _isOriginalImageForSend;
    _Bool _needThumbImage;
    int _compressType;
    unsigned long long _colNum;
    id <UIViewControllerPreviewing> _previewingContext;
    MMAssetPickerSendButton *m_sendButton;
    UIButton *m_originImageCheck;
    MMAssetSelectedCollectionView *m_selectedCollectionView;
    _Bool _m_isJustReturnMMAsset;
    _Bool _m_hasClickSendButton;
    id <MMAssetPickerControllerDelegate> _m_delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    MMTableView *_tableView;
    MMAlbum *_m_album;
    NSMutableArray *_selectedAssetInfos;
    MMAssetPickerControllerProxyObject *_m_proxyPreviewObject;
    MMAssetPickerControllerProxyObjectForAllAsset *_m_proxyPreviewObjectForAllAsset;
    unsigned long long _m_adjustRevertIndex;
}

- (void).cxx_destruct;
- (void)OnBack:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnCompressBegin;
- (void)OnCompressEnd;
- (void)OnCompressedSuccess:(id)arg1;
- (void)OnPreview:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)addOutterSelectInfo;
- (void)adjustSubviewRects;
- (void)adjustTableViewInitOffset;
- (struct CGRect)assetViewFrameGlobal:(id)arg1;
- (id)assetsForIndexPath:(id)arg1;
- (void)compressVideo:(id)arg1;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
- (void)editPhoto:(id)arg1 withScene:(int)arg2;
- (void)fixOffset;
- (unsigned long long)getPickerSceneFromOptionObj;
- (_Bool)getPickerWAVideoCompressedFromOptionObj;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(_Bool)arg3 exifLogInfo:(id)arg4;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (id)init;
- (void)initBottomBar;
- (void)initData;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2;
- (void)initTableView;
- (void)initView;
@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex=_m_adjustRevertIndex;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album=_m_album;
@property(nonatomic) __weak id <MMAssetPickerControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton=_m_hasClickSendButton;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset=_m_isJustReturnMMAsset;
@property(retain, nonatomic) MMAssetPickerControllerProxyObject *m_proxyPreviewObject; // @synthesize m_proxyPreviewObject=_m_proxyPreviewObject;
@property(retain, nonatomic) MMAssetPickerControllerProxyObjectForAllAsset *m_proxyPreviewObjectForAllAsset; // @synthesize m_proxyPreviewObjectForAllAsset=_m_proxyPreviewObjectForAllAsset;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onFinishEditAssetInfo:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)onOriginImageCheck:(id)arg1;
- (void)onOriginImageCheckChanged;
- (void)onQuit;
- (void)onRemoveSelectedInfo:(id)arg1;
- (int)pickerScene;
- (void)postProcessImages;
- (void)preparePreviewImageWithAssetInfo:(id)arg1;
- (void)previewImageOfSelectedWithIndex:(unsigned int)arg1;
- (void)previewImageWithAssetInfo:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)processingImage;
- (void)reloadBottomBar;
- (void)reloadPhotoView;
- (void)saveAsset:(_Bool)arg1;
- (void)saveEditedImage:(_Bool)arg1;
- (void)saveEditedVideo;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
- (unsigned long long)selectedAssetInfosCount;
- (void)sendImageFromScene:(long long)arg1;
- (void)sendVideoWithDraft:(id)arg1;
- (void)sendVideoWithURL:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)stopLoadingAfterSent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

