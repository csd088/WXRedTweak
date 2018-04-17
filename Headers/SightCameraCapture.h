//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "MMQRCodeScannerDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMQRCodeScanner, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SightCameraCapture : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMQRCodeScannerDelegate>
{
    _Bool m_isActive;
    _Bool m_isAudioActive;
    _Bool m_isFileOutputActive;
    AVCaptureSession *m_captureSession;
    AVCaptureDevice *m_inputCamera;
    NSString *m_videoPreset;
    AVCaptureDeviceInput *m_videoInput;
    AVCaptureDeviceInput *m_audioInput;
    AVCaptureStillImageOutput *m_imageOutput;
    AVCaptureVideoDataOutput *m_videoOutput;
    AVCaptureAudioDataOutput *m_audioOutput;
    AVCaptureMovieFileOutput *m_fileOutput;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    struct CGSize m_targetVideoSize;
    double m_targetBitRate;
    int m_captureFrameRate;
    NSMutableArray *m_movieWriters;
    NSMutableArray *m_moviePreviewers;
    MMQRCodeScanner *m_QRCodeScanner;
    unsigned int m_scannerSkip;
    NSObject<OS_dispatch_queue> *m_callbackQueue;
    _Bool m_bIsUsingHighExposureISO;
    _Bool m_needCapturePicture;
    CDUnknownBlockType m_captureBlock;
    _Bool _activeQRScan;
    NSString *_preset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool activeQRScan; // @synthesize activeQRScan=_activeQRScan;
- (void)addMoviePreviewer:(id)arg1;
- (void)addMovieWriter:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (long long)cameraPosition;
- (id)cameraWithPosition:(long long)arg1;
- (_Bool)canZoom;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)capturePreviewImageWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (long long)flashMode;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (_Bool)hasMultipleCameras;
- (_Bool)initCaptureSession:(id)arg1;
- (void)initQRCodeScanner;
- (id)initWithPreset:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 frameRate:(int)arg3;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2;
@property(nonatomic) _Bool isActive; // @synthesize isActive=m_isActive;
@property(readonly, nonatomic) _Bool isAudioActive; // @synthesize isAudioActive=m_isAudioActive;
- (_Bool)isFileOutputMode;
- (_Bool)isRunning;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (_Bool)isUsingHighExposureISO;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (void)onCameraFailed;
- (void)onNoQRCode;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector_c080079c)arg2 originSize:(struct CGSize)arg3;
@property(nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=m_previewLayer;
- (void)removeFileWriter:(id)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)removeMovieWriter:(id)arg1;
- (void)resetExposureISO;
- (void)setCameraFrameRate;
- (void)setFlashlightMode:(long long)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)setPreviewReady;
- (void)setSessionPreset:(id)arg1 forCameraPosition:(long long)arg2;
- (void)setTorchMode:(long long)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)startCameraCapture;
- (_Bool)startCameraCaptureAudioDevice;
- (void)startRunning;
- (_Bool)stopCameraCapture;
- (void)stopCameraCaptureAudioDevice;
- (_Bool)supportFlashlightMode;
- (_Bool)supportTorchMode;
- (_Bool)switchCamera;
- (_Bool)switchCameraToPosition:(long long)arg1;
- (void)switchToFileOutputMode;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (long long)torchMode;
- (void)turnOnExposureHighISO;
- (void)zoom;
- (double)zoomFactor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

