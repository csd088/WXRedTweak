//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseViewController.h"

#import "FaceRecogGuideViewControllerDelegate.h"
#import "FaceRecogNumbersViewDelegate.h"
#import "FaceRecogRectViewDelegate.h"

@class AnimationStatusView, FaceRecogGuideViewController, FaceRecogNumbersView, FaceRecogRectView, MMUILabel, NSString, UIButton, UIImageView, UIView;

@interface FaceRecogVerifyViewController : FaceRecogBaseViewController <FaceRecogNumbersViewDelegate, FaceRecogGuideViewControllerDelegate, FaceRecogRectViewDelegate>
{
    UIView *_prepareView;
    AnimationStatusView *_waitView;
    UIImageView *_faceIcon;
    UIView *_previewView;
    UIButton *_cancelButton;
    UIButton *_closeButton;
    UIButton *_retryButton;
    FaceRecogRectView *_faceRectView;
    UIView *_faceRectBackView;
    UIView *_faceGradientView;
    FaceRecogNumbersView *_numberView;
    MMUILabel *_bigTipFaceTitle;
    MMUILabel *_errTip;
    UIImageView *_loadingBlurView;
    _Bool _finished;
    FaceRecogGuideViewController *_guideVc;
    UIView *_numberContainerView;
    UIButton *_startBtn;
    MMUILabel *_prepareReadNumTitleLabel;
    _Bool _bNeedGuide;
    id <FaceRecogVerifyViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)attachPreviewLayer:(id)arg1;
@property(nonatomic) _Bool bNeedGuide; // @synthesize bNeedGuide=_bNeedGuide;
- (void)cancelButtonDone;
- (void)catchedFaceDidEndAnimation;
- (void)closeButtonDone;
@property(nonatomic) __weak id <FaceRecogVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)didTapStartReadNumberBtn;
- (void)initBitTipTitle:(id)arg1;
- (void)initCancelBtn;
- (void)initErrorMsg:(id)arg1;
- (void)initFaceRectView;
- (void)initNumberContainerView;
- (void)initNumberView;
- (void)initPrepareView:(id)arg1 tip:(id)arg2;
- (void)initView;
- (_Bool)isReadyToReadNumber;
- (void)numberViewDidBeginAnimation;
- (void)numberViewDidEndAnimation;
- (void)onFaceRecogGuideCanceled;
- (void)onFaceRecogGuideFinished;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)procedureDidFailed:(id)arg1 canRetry:(_Bool)arg2;
- (void)procedureDidFinish;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned long long)arg2 failedType:(long long)arg3;
- (void)procedureDidShowPrepareReadNumberTips;
- (void)procedureDidStartDetectFace;
- (void)procedureDidStartReadNumber:(id)arg1 Time:(double)arg2;
- (void)procedureDidStartRecogning;
- (void)resetViews;
- (void)retryButtonDone;
- (_Bool)shouldAutorotate;
- (void)showPrepareView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

