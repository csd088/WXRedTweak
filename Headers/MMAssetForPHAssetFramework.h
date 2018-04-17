//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAsset.h"

@class AVAsset, EditImageAttr, EditImageLogicController, NSDate, NSNumber, NSURL, PHAsset;

@interface MMAssetForPHAssetFramework : MMAsset
{
    int m_displayRequestId;
    int m_videoRequestId;
    int m_bigImageRequestId;
    PHAsset *m_asset;
    EditImageAttr *m_editImageAttr;
    EditImageLogicController *m_editImageLogicController;
    NSDate *_modificationDate;
    AVAsset *_avAsset;
    NSURL *_assetURL;
    NSNumber *_originalVideoFileSize;
}

+ (id)compressSquareImage:(id)arg1;
+ (id)genSquareThumbnailImage:(id)arg1;
+ (_Bool)isGifForAsset:(id)arg1;
- (void).cxx_destruct;
- (id)alAssetReferenceUrl;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)getBigImageByImageDataWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5 resultImageSize:(struct CGSize)arg6;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)getCreatedDate;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (id)getDrawLayerArray;
- (id)getEditImageAttr;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (long long)getImageFaceCount:(id)arg1;
- (id)getImageManager;
- (struct CGSize)getImageRatioSize;
- (_Bool)getIsEdited;
@property(retain, nonatomic, getter=getModificationDate) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
- (id)getOriginImageDataSize;
- (id)getOriginalAssetLocalIdentifier;
- (id)getThumbImage;
- (id)getThumbnail;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (_Bool)hasLocation;
- (id)imageExifLogInfo;
- (id)initWithPHAsset:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (_Bool)isGif;
- (_Bool)isPicture;
- (_Bool)isSlowMotionVideo;
- (_Bool)isTimeLapseVideo;
- (_Bool)isVideo;
- (double)latitude;
- (double)longitude;
@property(retain, nonatomic) PHAsset *m_asset; // @synthesize m_asset;
@property(nonatomic) int m_bigImageRequestId; // @synthesize m_bigImageRequestId;
@property(nonatomic) int m_displayRequestId; // @synthesize m_displayRequestId;
@property(retain, nonatomic) EditImageAttr *m_editImageAttr; // @synthesize m_editImageAttr;
@property(nonatomic) __weak EditImageLogicController *m_editImageLogicController; // @synthesize m_editImageLogicController;
@property(nonatomic) int m_videoRequestId; // @synthesize m_videoRequestId;
@property(nonatomic) NSNumber *originalVideoFileSize; // @synthesize originalVideoFileSize=_originalVideoFileSize;
- (int)requestImageDataWithMgr:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageWithMgr:(id)arg1 targetSize:(struct CGSize)arg2 options:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (struct CGSize)retriveOriginImageSize;
- (void)setupFaceDetection;
- (void)stopBigImageRequest;
- (void)stopDisplayRequest;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (void)stopVideoRequest;
- (id)timerSourceWithTimeOutBlock:(CDUnknownBlockType)arg1;
- (id)videoDuration;

@end

