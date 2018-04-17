//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FileDetailLogicController.h"

#import "ForwardMessageLogicDelegate.h"
#import "IRecordDownloadExt.h"

@class ForwardMessageLogicController, MMUIViewController, MsgRecordDataWrap, NSString;

@interface RecordFileDetailLogicController : FileDetailLogicController <IRecordDownloadExt, ForwardMessageLogicDelegate>
{
    MsgRecordDataWrap *m_recordDataWrap;
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMUIViewController *m_fileDetailViewController;
    id <MsgRecordFileDetailDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (id)GetFileName;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)GetForwardData;
- (unsigned int)GetPreviewType;
- (unsigned long long)GetTempSize;
- (id)GetTmpFilePath;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnForwordWithViewController:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (_Bool)autoDownload;
- (_Bool)canShowMsgForwardTo3rdApp;
- (void)dealloc;
- (id)getCurrentViewController;
- (id)initWithRecordDataWrap:(id)arg1;
- (_Bool)isDownloading;
@property(nonatomic) __weak id <MsgRecordFileDetailDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)startDownload;
- (void)stopDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

