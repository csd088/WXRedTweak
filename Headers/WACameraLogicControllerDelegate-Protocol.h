//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol WACameraLogicControllerDelegate <NSObject>

@optional
- (void)onCameraNeedAuthCancel;
- (void)onCameraPictureTaken:(UIImage *)arg1 withFrontCamera:(_Bool)arg2;
- (void)onCameraStartRecord;
- (void)onCameraStop;
- (void)onCameraStopRecord;
- (void)onCameraVideoRecordingWithFrameImg:(UIImage *)arg1;
- (void)onCameraVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 isMuted:(_Bool)arg3;
@end

