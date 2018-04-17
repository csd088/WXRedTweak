//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RecordNodeDataSource.h"

@class CMessageWrap, FavoritesItemDataField, NSArray, NSString;

@interface MsgRecordDataWrap : NSObject <RecordNodeDataSource>
{
    CMessageWrap *m_parent;
    FavoritesItemDataField *m_dataItem;
    unsigned int m_index;
    NSArray *m_dataList;
    NSString *m_desc;
}

- (void).cxx_destruct;
- (_Bool)CanbeForwardToChat;
- (_Bool)CanbeForwardToWC;
- (id)Convert2AppFileMsg;
- (id)Convert2VideoInfo;
- (id)GetAudioInfo;
- (unsigned int)GetDataIndex;
- (id)GetDataItem;
- (id)GetDataPath;
- (id)GetDataSrcName;
- (id)GetFileExt;
- (id)GetFileName;
- (id)GetFilePath;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (id)GetImageLocalID;
- (id)GetImagePath;
- (id)GetImageSourcePath;
- (id)GetImgArray;
- (unsigned int)GetImgCount;
- (id)GetMusicInfo;
- (id)GetParent;
- (int)GetParentDownloadStatus;
- (unsigned int)GetParentLocalID;
- (double)GetRecordNodeContentHeight;
- (id)GetSightPath;
- (id)GetThumbPath;
- (unsigned int)GetVideoDuration;
- (id)GetVideoTitle;
- (unsigned int)GetVoiceFormat;
- (id)GetWebPageDomin;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1;
- (_Bool)StartDownload;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 dataList:(id)arg3 desc:(id)arg4 Index:(unsigned int)arg5;
@property(retain, nonatomic) FavoritesItemDataField *m_dataItem; // @synthesize m_dataItem;
@property(nonatomic) unsigned int m_index; // @synthesize m_index;
@property(retain, nonatomic) CMessageWrap *m_parent; // @synthesize m_parent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
