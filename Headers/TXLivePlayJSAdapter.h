//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXLivePlayListener.h"

@class NSString, TXLiveContainerView, TXLivePlayer;

@interface TXLivePlayJSAdapter : NSObject <TXLivePlayListener>
{
    _Bool _isFullScreen;
    _Bool _muted;
    _Bool _backgroundMute;
    _Bool _isDebug;
    _Bool _needEvent;
    _Bool _needNetStatus;
    _Bool _autoPlay;
    _Bool _isWeAppBgIntterrupt;
    unsigned int _playerId;
    id <TXLivePlayJSAdapterDelegate> _delegate;
    TXLivePlayer *_txLivePlayer;
    TXLiveContainerView *_containerView;
    NSString *_appId;
    NSString *_playUrl;
    long long _playType;
    NSString *_orientation;
    long long _direction;
    NSString *_objectFit;
    long long _mode;
    struct CGRect _rect;
}

- (void).cxx_destruct;
- (void)addNotification;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool backgroundMute; // @synthesize backgroundMute=_backgroundMute;
@property(retain, nonatomic) TXLiveContainerView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
@property(nonatomic) __weak id <TXLivePlayJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void)disbaleFull;
- (void)enableFull;
- (void)enterBackground;
- (void)enterForeground;
- (long long)getDirection;
- (id)initLivePlayerWithId:(unsigned int)arg1 configs:(id)arg2 containerView:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool isWeAppBgIntterrupt; // @synthesize isWeAppBgIntterrupt=_isWeAppBgIntterrupt;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(retain, nonatomic) NSString *objectFit; // @synthesize objectFit=_objectFit;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)operateLivePlayerWithType:(id)arg1 data:(id)arg2;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
- (void)parseConfigs:(id)arg1;
- (void)pause;
- (void)play;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) unsigned int playerId; // @synthesize playerId=_playerId;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void)removeNotification;
- (void)resume;
- (void)setObjectFit;
- (void)setOrientation;
@property(retain, nonatomic) TXLivePlayer *txLivePlayer; // @synthesize txLivePlayer=_txLivePlayer;
- (void)stop;
- (void)updateContainerViewRect:(struct CGRect)arg1;
- (void)updateLivePlayerWithConfigs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

