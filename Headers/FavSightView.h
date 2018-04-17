//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "SightViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CAGradientLayer, FavSightFullScreenViewController, NSString, SightView, SimpleSightInfo;

@interface FavSightView : MMUIView <SightViewDelegate, WCActionSheetDelegate>
{
    _Bool m_autoDownload;
    _Bool m_shouldAutoPlayAfterDownload;
    SimpleSightInfo *m_sightInfo;
    FavSightFullScreenViewController *m_viewController;
    SightView *_sightView;
    id <FavSightViewDelegate> m_delegate;
    _Bool bIsSyncComplete;
    _Bool fullScreenMode;
    CAGradientLayer *m_layer;
    unsigned long long _sightLegalityType;
    _Bool _downloadFailed;
    _Bool _supportLandscape;
}

- (void).cxx_destruct;
- (void)checkLegalityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)fullPlay;
- (void)fullScreenPlay:(id)arg1;
- (double)getSightHeight;
- (struct CGSize)getSightSizeWithMaxSize:(struct CGSize)arg1;
- (void)hideSightIconView;
- (void)initPlayerView;
- (void)initView;
- (id)initWithFavDataSource:(id)arg1;
- (id)initWithFavDataSource:(id)arg1 autoDownload:(_Bool)arg2;
- (id)initWithSimpleSightInfo:(id)arg1 fullScreenMode:(_Bool)arg2;
- (void)invalidFormatExitView;
- (_Bool)isAd;
- (_Bool)isFileExistAndComplete:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <FavSightViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickSight;
- (void)onResumeSightView:(id)arg1;
- (void)pause;
- (void)refreshThumb;
- (void)resize:(struct CGSize)arg1;
- (void)setAutoPlayAfterDownload:(_Bool)arg1;
- (void)setDownFail;
- (void)setDownFinsh;
- (void)setFinishedLength:(int)arg1 TotalLength:(int)arg2;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool supportLandscape; // @synthesize supportLandscape=_supportLandscape;
- (_Bool)shouldAutoPlay;
- (void)showSightIconView;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(id)arg1;
- (void)stop;
- (void)tryToPlay:(_Bool)arg1;
- (void)updateThumbImageIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

