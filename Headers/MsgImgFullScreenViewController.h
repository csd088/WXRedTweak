//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "EditImageForwardAndEditLogicDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "IDownloadImageExt.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "MMToastViewControllerDelegate.h"
#import "MsgImgDataLogicDelegate.h"
#import "MsgImgFullScreenContainerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WXVideoPlayerViewDelegate.h"
#import "WXVideoPlayerViewTouchDelegate.h"

@class CMessageWrap, EditImageForwardAndEditLogicController, ForwardMessageLogicController, ImageScrollView, MMProgressViewEx, MMTimer, MMToastViewController, MsgImgDataLogic, MsgImgFullScreenContainer, MsgImgPreviewData, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, ScanQRCodeLogicController, ShareDataToOpenSDKController, UIActivityIndicatorView, UIButton, UIView, WCActionSheet;

@interface MsgImgFullScreenViewController : MMUIViewController <BaseScanLogicDelegate, WXVideoPlayerViewDelegate, WXVideoPlayerViewTouchDelegate, MsgImgDataLogicDelegate, UIViewControllerAnimatedTransitioning, MMToastViewControllerDelegate, ForwardMessageLogicDelegate, EditImageForwardAndEditLogicDelegate, UIViewControllerTransitioningDelegate, WCActionSheetDelegate, UIAlertViewDelegate, MsgImgFullScreenContainerDelegate, IDownloadImageExt, IMsgExt, IMsgRevokeExt>
{
    NSMutableDictionary *m_dicMsgStatus;
    NSMutableDictionary *m_dicTryshowTime;
    NSMutableDictionary *_dicImageDownloadedPercent;
    UIView *_backgroundView;
    MsgImgFullScreenContainer *pagingScrollView;
    NSString *m_nsChatName;
    UIButton *_hdImgBtn;
    UIButton *_hdImgStatusButton;
    UIButton *_btnForImgFastBrowse;
    UIButton *_btnForDownloadImage;
    UIView *_bottomBar;
    double _fastBrowseOffset;
    long long m_uiInterfaceOrientation;
    WCActionSheet *m_actionSheet;
    id <MsgImgFullScreenViewControllerDelegate> m_delegate;
    CMessageWrap *_nextHDImgMsg;
    _Bool _isHDImgLoading;
    NSOperationQueue *_loadHDImgOperationQueue;
    MMProgressViewEx *_progressView;
    _Bool _allowRotate;
    _Bool _isFromMsgContentView;
    _Bool _isRotating;
    _Bool _bNeedEditAtStart;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    UIActivityIndicatorView *m_preLoadingView;
    UIActivityIndicatorView *m_nextLoadingView;
    ImageScrollView *m_currentScrollView;
    unsigned int m_scrollViewMsgId;
    MsgImgDataLogic *m_dataLogic;
    NSMutableSet *m_revokedMsgIDSet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    struct CGRect m_originFrame;
    MsgImgPreviewData *m_msgImgPreviewData;
    _Bool m_bShow;
    _Bool m_bCloseForViewDetail;
    CMessageWrap *m_oForwardMessageWrap;
    unsigned int m_videoOperateStatus;
    _Bool m_bShouldAutoPlayVideo;
    _Bool m_bSoundable;
    _Bool m_bAnimateShowing;
    UIView *m_snapShotImgView;
    unsigned int _startTime;
    MMToastViewController *m_toastView;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    unsigned int _needEditImageIndex;
    NSString *m_fromUsr;
    _Bool _lockRotate;
    long long _orientationWhenInit;
    _Bool m_hasPreviewVideo;
    _Bool _isOnlyAllowSaveOnActionSheet;
    NSMutableDictionary *m_videoViewDic;
    unsigned long long _m_eScene;
    MMTimer *_sliderUpdateTimer;
    ForwardMessageLogicController *_m_forwardLogicController;
}

- (void).cxx_destruct;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDownloadForSaveAlbumFail:(id)arg1 Expired:(_Bool)arg2;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(_Bool)arg4;
- (void)OnImageSaveAlbumError:(id)arg1;
- (void)OnImageSaveAlbumSuccess:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgBeRemoved:(id)arg1 msg:(id)arg2 index:(unsigned int)arg3;
- (void)OnMsgBeRemoved:(id)arg1 n64MsgId:(long long)arg2 FromRevoked:(_Bool)arg3;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)PreScanQRCode;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustSubviewRects;
- (void)adjustViewAndNavBarRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool allowRotate; // @synthesize allowRotate=_allowRotate;
- (void)animateHide;
- (void)animateHideDownloadingView;
- (void)animateHideFastBrowseButton;
- (void)animateHideHDButton;
- (void)animateHideHDDownloadStatus;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1;
- (void)animateHideImageSaveAblumButton;
- (void)animateHideRightButton;
- (void)animateHideWithFadeout;
- (void)animateHideWithOrientation:(long long)arg1 PreviewData:(id)arg2;
- (void)animateShowButton;
- (void)animateShowFastBrowseButton;
- (void)animateShowHDButton;
- (void)animateShowHDDownloadStatus;
- (void)animateShowImageSaveAblumButton;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(_Bool)arg1;
- (void)asyncLoadHDImage:(id)arg1;
- (id)btnForDownloadImage;
- (_Bool)canShowMsgForwardTo3rdApp;
- (_Bool)canShowMsgForwwardToDevices;
- (void)checkVideoSteamDownloadStatus;
- (void)clearVideoMemoryOnChangePage;
- (void)dealloc;
- (void)delayHideRightButton;
- (void)delayStartDownloadImg:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)doLoadHDImage:(id)arg1;
- (id)errorViewForDownloadFailedWithFrame:(struct CGRect)arg1 imageStatus:(unsigned int)arg2;
- (void)forwardMessage:(id)arg1;
- (_Bool)forwardOrSaveWhilePlaying:(unsigned int)arg1 messageWrap:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getCurrentMsgWrap;
- (id)getCurrentScrollView:(unsigned int)arg1;
- (id)getCurrentViewController;
- (id)getCurrentWXVideoPlayView:(id)arg1;
- (id)getImageFor:(id)arg1;
- (id)getImgInfoName:(id)arg1;
- (id)getImgInfoTime:(id)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (id)getMsgFor:(unsigned int)arg1;
- (id)getProgressJpeg:(id)arg1;
- (unsigned int)getStatusFor:(id)arg1;
- (id)getThumbImageFor:(id)arg1;
- (id)getVideoViewFor:(id)arg1 frame:(struct CGRect)arg2;
- (void)hideDownloadStatusButton:(_Bool)arg1;
- (void)hideImageFastBrowseButton;
- (void)hideWithoutAnimate;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imageForScanQRCodeAtPage:(unsigned int)arg1 isClipImage:(_Bool *)arg2;
- (id)imagePathAtPage:(unsigned int)arg1;
- (void)initBottomBar;
- (void)initLogic:(id)arg1;
- (void)initScrollView;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2 soundable:(_Bool)arg3 snapshotView:(id)arg4 needEdit:(_Bool)arg5;
- (_Bool)isCurrentPageError;
@property(nonatomic) _Bool isFromMsgContentView; // @synthesize isFromMsgContentView=_isFromMsgContentView;
- (_Bool)isHDImageDownloaded:(id)arg1;
- (_Bool)isImgMsg:(id)arg1;
- (_Bool)isMiddleImgDownload:(id)arg1;
@property(nonatomic) _Bool isOnlyAllowSaveOnActionSheet; // @synthesize isOnlyAllowSaveOnActionSheet=_isOnlyAllowSaveOnActionSheet;
- (_Bool)isWXVideoPlayerDisplay:(id)arg1;
- (void)isWXVideoPlayerPlayAttachVideo:(id)arg1;
@property(nonatomic) __weak id <MsgImgFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long long m_eScene; // @synthesize m_eScene=_m_eScene;
@property(retain, nonatomic) ForwardMessageLogicController *m_forwardLogicController; // @synthesize m_forwardLogicController=_m_forwardLogicController;
@property(nonatomic) _Bool m_hasPreviewVideo; // @synthesize m_hasPreviewVideo;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) NSMutableDictionary *m_videoViewDic; // @synthesize m_videoViewDic;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)multiImageScrollViewDidEndScrolling;
- (void)multiImageScrollViewWillBeginDragging;
- (_Bool)needShowLocateBtn;
- (void)onCancelCurrentDownload;
- (void)onChangePage;
- (void)onClickSavedPhotosAlbumButton;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onDismissEditView;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onImgFastBrowse:(id)arg1;
- (void)onImgMsgLocate;
- (void)onLongPress:(id)arg1;
- (void)onLongPressBegin:(id)arg1;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (void)onScanEnds;
- (void)onShowingEditView;
- (void)onSingleTap;
- (void)onSingleTap:(id)arg1;
- (void)onStopLoading;
- (void)onViewHDImage:(id)arg1;
- (void)onWXVideoPlayerClickDetail:(id)arg1;
- (void)onWXVideoPlayerProgressBarHiddenChangeTo:(_Bool)arg1;
- (void)onWXVideoPlayerViewLongPress:(id)arg1;
- (void)onWXVideoPlayerViewSingleTap:(id)arg1;
- (void)preLoad:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)saveVideoToAlbum:(id)arg1;
@property(retain, nonatomic) MMTimer *sliderUpdateTimer; // @synthesize sliderUpdateTimer=_sliderUpdateTimer;
- (void)setStatusFor:(id)arg1 status:(unsigned int)arg2;
- (void)showEnd;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2;
- (void)startDownloadImageForSaveAlbum;
- (void)startDownloadImg:(_Bool)arg1 forIndex:(unsigned int)arg2;
- (void)startEditImage:(_Bool)arg1;
- (void)startPlayVideo;
- (void)statLevelFullScreenSight;
- (void)stopImageDownload;
- (void)stopPlayVideo;
- (unsigned long long)supportedInterfaceOrientations;
- (double)transitionDuration:(id)arg1;
- (void)tryShowDownloadingView;
- (void)tryShowProgressJpegForIndex:(unsigned int)arg1;
- (void)uninitLogic;
- (void)updateBottomBarViews;
- (void)updateCurrentImageDownloadStatus;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)updateLoadingView;
- (void)updateMsgArray:(id)arg1;
- (void)updateSliderAlpha;
- (void)updateToolbar;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

