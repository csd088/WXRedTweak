//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCModule.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CIDetector, CMMotionManager, NSObject<OS_dispatch_queue>, NSString;

@interface TXCCameraCapturer : TXCModule <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    unsigned long long _lastCalculateTS;
    unsigned long long _lastCaptureFrameCount;
    unsigned long long _captureFrameCount;
    _Bool _front;
    double _presetWidth;
    double _presetHeight;
    unsigned long long _lastDetectedTimeStame;
    int _exifOrientation;
    int _tryDetectCount;
    int _detectTimeCtrl;
    _Bool _subjectAreaChanged;
    _Bool _faceDetect;
    _Bool _mirror;
    int _frameRate;
    id <TXICameraCapturerDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    double _zoomScale;
    long long _homeOrientation;
    long long _rotation;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureConnection *_videoConnection;
    CIDetector *_faceDetector;
    NSObject<OS_dispatch_queue> *_cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *_faceDetectQueue;
    CMMotionManager *_motionMgr;
    long long _position;
    AVCaptureVideoPreviewLayer *_prevLayer;
    struct CGSize _videoSize;
}

+ (_Bool)isBackFacingCameraPresent;
+ (_Bool)isFrontFacingCameraPresent;
+ (_Bool)requestForAccess;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraProcessingQueue; // @synthesize cameraProcessingQueue=_cameraProcessingQueue;
- (id)cameraWithPosition:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(retain) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)dealloc;
@property __weak id <TXICameraCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)detectFace:(struct opaqueCMSampleBuffer *)arg1;
- (struct CGPoint)devicePointForPoint:(struct CGPoint)arg1;
@property(nonatomic) _Bool faceDetect; // @synthesize faceDetect=_faceDetect;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *faceDetectQueue; // @synthesize faceDetectQueue=_faceDetectQueue;
@property(retain) CIDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(nonatomic) _Bool flashEnable;
@property int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) _Bool front;
- (id)genVFrame:(struct opaqueCMSampleBuffer *)arg1;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
- (id)init;
- (void)initCameraCapture;
@property(retain) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(retain) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
- (void)resetInterestPoint:(struct CGPoint)arg1 monitorSubjectAreaChange:(_Bool)arg2;
- (void)rotateCamera;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
- (void)runTXCAsynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runTXCSynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)sendNotifyEvent:(long long)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (_Bool)setResolution:(long long)arg1;
- (_Bool)setSessionPreset:(id)arg1;
@property(retain) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(retain) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
- (void)start;
- (void)stop;
- (void)subjectAreaDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

