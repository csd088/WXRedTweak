//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray;

@interface MMImagePickerManagerOptionObj : MMObject
{
    _Bool _isCamera;
    _Bool _isFrontCameraDevice;
    _Bool _isOnlyShowVideoMode;
    _Bool _isNotShowVideoSizeAlertView;
    _Bool _canSendOriginalImage;
    _Bool _canSendVideoMessage;
    _Bool _canSendMultiImage;
    _Bool _needThumbImage;
    _Bool _isShowForMessage;
    _Bool m_isJustReturnMMAsset;
    _Bool m_directToFirstAlbum;
    _Bool _canSendGif;
    _Bool _isWAVideoCompressed;
    _Bool _isSightCamera;
    _Bool _canHybridSendAsset;
    int _previewType;
    int _compressType;
    int _finishWordMode;
    int m_pickerScene;
    int _previewEditScene;
    unsigned long long _uiMaxVideoDuration;
    long long _maxImageCount;
    NSArray *_selectedImageURLs;
    NSArray *_selectedImageAssets;
    id _delegateObj;
    unsigned long long m_adjustRevertIndex;
    unsigned long long _sightCameraMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canHybridSendAsset; // @synthesize canHybridSendAsset=_canHybridSendAsset;
@property(nonatomic) _Bool canSendGif; // @synthesize canSendGif=_canSendGif;
@property(nonatomic) _Bool canSendMultiImage; // @synthesize canSendMultiImage=_canSendMultiImage;
@property(nonatomic) _Bool canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
@property(nonatomic) _Bool canSendVideoMessage; // @synthesize canSendVideoMessage=_canSendVideoMessage;
@property(nonatomic) int compressType; // @synthesize compressType=_compressType;
@property(nonatomic) __weak id delegateObj; // @synthesize delegateObj=_delegateObj;
@property(nonatomic) int finishWordMode; // @synthesize finishWordMode=_finishWordMode;
- (id)init;
@property(nonatomic) _Bool isCamera; // @synthesize isCamera=_isCamera;
@property(nonatomic) _Bool isFrontCameraDevice; // @synthesize isFrontCameraDevice=_isFrontCameraDevice;
@property(nonatomic) _Bool isNotShowVideoSizeAlertView; // @synthesize isNotShowVideoSizeAlertView=_isNotShowVideoSizeAlertView;
@property(nonatomic) _Bool isOnlyShowVideoMode; // @synthesize isOnlyShowVideoMode=_isOnlyShowVideoMode;
@property(nonatomic) _Bool isShowForMessage; // @synthesize isShowForMessage=_isShowForMessage;
@property(nonatomic) _Bool isSightCamera; // @synthesize isSightCamera=_isSightCamera;
@property(nonatomic) _Bool isWAVideoCompressed; // @synthesize isWAVideoCompressed=_isWAVideoCompressed;
@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex;
@property(nonatomic) _Bool m_directToFirstAlbum; // @synthesize m_directToFirstAlbum;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(nonatomic) int m_pickerScene; // @synthesize m_pickerScene;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) _Bool needThumbImage; // @synthesize needThumbImage=_needThumbImage;
@property(nonatomic) int previewEditScene; // @synthesize previewEditScene=_previewEditScene;
@property(nonatomic) int previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) NSArray *selectedImageAssets; // @synthesize selectedImageAssets=_selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs; // @synthesize selectedImageURLs=_selectedImageURLs;
@property(nonatomic) unsigned long long sightCameraMode; // @synthesize sightCameraMode=_sightCameraMode;
@property(nonatomic) unsigned long long uiMaxVideoDuration; // @synthesize uiMaxVideoDuration=_uiMaxVideoDuration;

@end

