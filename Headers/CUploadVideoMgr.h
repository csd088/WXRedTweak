//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NotifyFromMainCtrlDelegate.h"

@class CMessageWrap, CUploadVideoInfo, NSMutableArray;

@interface CUploadVideoMgr : NSObject <NotifyFromMainCtrlDelegate>
{
    NSMutableArray *m_arrUploadList;
    CMessageWrap *m_wrapCurUploadMsg;
    unsigned int m_uiCurUploadEventID;
    unsigned int m_uiUploadMaxPacketLen;
    CUploadVideoInfo *m_curCompressingInfo;
}

- (void).cxx_destruct;
- (_Bool)CreateUploadEvent:(id)arg1;
- (void)DelMsgInUploadQueue:(id)arg1;
- (id)GetMsg:(id)arg1;
- (id)GetUpdateInfoByID:(unsigned int)arg1 From:(id)arg2 To:(id)arg3;
- (void)InitWithLock:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (id)LoadDataFromPath:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3;
- (_Bool)LoadMediaData:(id)arg1 Path:(id)arg2 Offset:(unsigned int)arg3 TotalLen:(unsigned int)arg4 HasRead:(unsigned int)arg5 RealRead:(unsigned int *)arg6 ReadData:(id)arg7;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)OnCompressVideoFinished:(id)arg1 success:(_Bool)arg2;
- (void)SendMsgFail:(id)arg1 RetCode:(int)arg2;
- (void)SetMaxPacketLenFor8K;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2;
- (void)Stop;
- (void)StopCurUpload;
- (void)StopUpload:(id)arg1 MsgWrap:(id)arg2;
- (void)UploadVideo:(id)arg1;
- (void)compressCurInfo;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CMessageWrap *m_wrapCurUploadMsg; // @synthesize m_wrapCurUploadMsg;

@end

