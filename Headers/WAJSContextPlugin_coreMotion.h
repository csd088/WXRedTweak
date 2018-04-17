//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "ILocationMgrExt.h"
#import "INetworkStatusMgrExt.h"

@class CMMotionManager;

@interface WAJSContextPlugin_coreMotion : WAJSContextPluginBase <ILocationMgrExt, INetworkStatusMgrExt>
{
    CMMotionManager *_motionMgr;
    unsigned long long m_headingTag;
    unsigned long long m_locationTag;
    _Bool _accelerometerWorking;
    _Bool _accelerometerPauseBySuspend;
    _Bool _compassWorking;
    _Bool _compassPauseBySuspend;
    _Bool _locationWorking;
    _Bool _locationPauseBySuspend;
    id <IJSContextPluginDelegate> _resultDelegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enableAccelerometer;
- (void)enableAccelerometer:(_Bool)arg1;
- (void)enableCompass;
- (void)enableCompass:(_Bool)arg1;
- (void)enableLocationUpdate;
- (void)enableLocationUpdate:(_Bool)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)stopAccelerometerBySuspend:(_Bool)arg1;
- (void)stopCompassBySuspend:(_Bool)arg1;
- (void)stopLocationUpdateBySuspend:(_Bool)arg1;

@end

