//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt.h"
#import "ForwardMessageLogicDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "WCActionSheetDelegate.h"
#import "WCCommitViewResultDelegate.h"
#import "WSVideoFlowDataDelegate.h"
#import "WSVideoFlowDataExt.h"
#import "WSVideoFlowTableViewCellDelegate.h"
#import "WSVideoPlayerViewDelegate.h"
#import "tableViewDelegate.h"

@class CMessageWrap, FTSWebSearchMgr, ForwardMessageLogicController, MMTableView, NSString, UIImageView, UIView, WCDataItem, WCTimeLineFooterView, WSStreamPlayerView, WSVideoFlowDataLogic, WSVideoFlowTableViewCell, WSVideoModel;

@interface WSVideoFlowViewController : MMUIViewController <WSVideoFlowDataDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, WSVideoFlowDataExt, WSVideoFlowTableViewCellDelegate, MMRefreshTableFooterDelegate, UIViewControllerAnimatedTransitioning, WCActionSheetDelegate, WCCommitViewResultDelegate, ForwardMessageLogicDelegate, CNetworkStatusExt, WSVideoPlayerViewDelegate>
{
    UIView *_navBarBkg;
    MMTableView *_tableView;
    FTSWebSearchMgr *_webSearchMgr;
    WSVideoFlowDataLogic *_dataLogic;
    WSVideoModel *_initVideoModel;
    WSVideoModel *_sharingVideoModel;
    WCTimeLineFooterView *_footerView;
    WSVideoFlowTableViewCell *_interactiveCell;
    WSStreamPlayerView *_fullScreenPlayerView;
    _Bool _bShouldForcedRotationToPortrait;
    long long _orientation;
    _Bool _startCustomMgrRetreiveLocation;
    _Bool _canAutoPlay;
    _Bool _hasLoadFirstPage;
    _Bool _shouldReturnFromFullScreenWithScrollToCurrentVideo;
    _Bool _stopUpdateInteractsUntilScrollAnimationDone;
    ForwardMessageLogicController *_forwardMsgLogic;
    double _lastScrollTime;
    struct CGPoint _lastScrollOffset;
    UIImageView *_transitionVideoImageView;
    WCDataItem *_srcSnsItem;
    CMessageWrap *_srcMsgWrap;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (_Bool)canLoadNextWithCurrent:(id)arg1;
- (void)dealloc;
- (_Bool)decideInteractiveCell;
- (_Bool)decideScrollSpeed;
- (void)didReceiveMemoryWarning;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 cell:(id)arg3 video:(id)arg4;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)fetchNextPage;
- (id)genUploadTask:(id)arg1;
- (unsigned int)getCachedPlayTimeForVideo:(id)arg1;
- (id)getCurrentViewController;
- (_Bool)handleFullScreen:(_Bool)arg1 targetCell:(id)arg2 targetPlayView:(id)arg3 orientation:(long long)arg4;
- (void)initCustomWebSearchMgr;
- (void)initDataLogic:(id)arg1;
- (void)initNavigateItem;
- (void)initView;
- (id)initWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;
- (_Bool)isCellInTargetArea:(id)arg1;
- (_Bool)isCellVisible:(id)arg1;
- (_Bool)isFromShare;
- (_Bool)isLandscape;
- (_Bool)isVideoCellStartPlaying:(id)arg1;
- (void)launchWebView:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onClickCellRecommend:(id)arg1;
- (void)onClickCellSource:(id)arg1;
- (void)onClickCellTitle:(id)arg1;
- (void)onClickShare:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (id)onPlayNextVideo:(_Bool)arg1 currentVideo:(id)arg2;
- (void)onRealBeginPlay:(id)arg1 autoPlay:(_Bool)arg2;
- (void)onReturnFromWebRecommendVideo:(int)arg1;
- (void)onSystemEnterBackground;
- (void)onSystemEnterForeground;
- (void)onTapMaskView:(id)arg1;
- (id)onTryPlayNext:(_Bool)arg1 currentVideo:(id)arg2;
- (void)onUpdatePrefetchFlag:(_Bool)arg1;
- (void)onUpdateVideoUrlForVideo:(id)arg1;
- (_Bool)onVideoPlayEnd:(id)arg1;
- (void)playVideoForCell:(id)arg1 force:(_Bool)arg2;
- (void)preloadSurroundingForCell:(id)arg1;
- (void)reportVideoExpose;
- (void)resumeCurrentVideo;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) CMessageWrap *srcMsgWrap; // @synthesize srcMsgWrap=_srcMsgWrap;
@property(retain, nonatomic) WCDataItem *srcSnsItem; // @synthesize srcSnsItem=_srcSnsItem;
@property(retain, nonatomic) UIImageView *transitionVideoImageView; // @synthesize transitionVideoImageView=_transitionVideoImageView;
- (void)shareToFriend;
- (void)shareToTimeline;
- (_Bool)shouldAutorotate;
- (void)startForcedRotation:(long long)arg1;
- (void)stopVideo;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (struct CGRect)transitionViewEndRectInView:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

