//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMTimer, NSMutableString, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface CameraScannerView : MMUIView <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_prevLayer;
    NSRecursiveLock *_cameraLock;
    id <CameraScannerViewDelegate> _delegate;
    _Bool _hasInit;
    _Bool _hasCaptureOutput;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    AVCaptureDevice *_captureDevice;
    MMTimer *_lowLightCheckTimer;
    _Bool _shouldCheckLowLight;
    _Bool _isLowLight;
    _Bool _isLightBoostOn;
    struct CGPoint _focusPoint;
    _Bool _observingFocus;
    _Bool _hasFocused;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    unsigned int _lightMode;
    NSMutableString *_zoomOplog;
}

+ (void)releaseInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addFocusObserver;
- (void)addZoomFactorLog:(double)arg1 manually:(_Bool)arg2;
- (void)adjustToNewSize;
@property(readonly, nonatomic) NSRecursiveLock *cameraLock; // @synthesize cameraLock=_cameraLock;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)clearLog;
- (void)continuousExposureAtPoint:(struct CGPoint)arg1;
- (void)continuousFocusAtPoint:(struct CGPoint)arg1;
- (struct CGRect)convertPortraitToCameraRect:(struct CGRect)arg1;
- (struct CGPoint)convertToPortraitPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToPortraitRect:(struct CGRect)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <CameraScannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (float)getRotateDegreeRelativeToCamera;
- (float)getRotateRadius:(long long)arg1;
- (double)getZoomFactor;
@property _Bool hasCaptureOutput; // @synthesize hasCaptureOutput=_hasCaptureOutput;
@property(readonly, nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
- (id)init;
- (void)initCaptureWithPreviewScale:(float)arg1;
- (_Bool)isLightBoostAvailable;
- (void)layoutSubviews;
@property(readonly, nonatomic) unsigned int lightMode; // @synthesize lightMode=_lightMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onCaptureTimeout;
- (void)onTimerCheckLowLight;
- (void)onTimerFocus;
- (struct CGPoint)pointToCaptureDevice:(struct CGPoint)arg1;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
- (_Bool)setLightBoostOn:(_Bool)arg1;
- (void)setPreviewScale:(float)arg1;
- (void)setZoomFactor:(double)arg1 animated:(_Bool)arg2;
- (void)start;
- (void)startTimerCheckLowLight;
- (void)stop;
- (void)stopTimerCheckLowLight;
- (void)tryRemoveFocusObserver;
@property(readonly, nonatomic) NSMutableString *zoomOplog; // @synthesize zoomOplog=_zoomOplog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

