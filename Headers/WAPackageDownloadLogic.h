//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;

@interface WAPackageDownloadLogic : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, ICdnComMgrExt>
{
    NSMutableDictionary *_dicDownloadStatus;
    NSMutableArray *_arrWaittingTaskQueue;
    NSMutableArray *_arrDownloadingTaskQueue;
    _Bool _bUseSerialMode;
    int _pkgType;
    id <WAPackageDownloadLogicDelegate> m_delegate;
    NSURLSession *_session;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)addDownloadTaskWithUrl:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3;
@property(nonatomic) _Bool bUseSerialMode; // @synthesize bUseSerialMode=_bUseSerialMode;
- (void)cancelAllDownloads;
- (void)checkQueue;
- (void)cleanTmpDirectory;
- (void)dealloc;
- (id)getDownloadFileIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (_Bool)isDownloadingTaskWithUrlStr:(id)arg1;
@property(nonatomic) __weak id <WAPackageDownloadLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int pkgType; // @synthesize pkgType=_pkgType;
- (void)raiseDownloadPriorityWithAppid:(id)arg1;
- (void)realStartDownloadWithTask:(id)arg1;
- (float)remainingTimeForDownload:(id)arg1 bytesTransferred:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)reportDownloadSpendTime:(double)arg1 isDownloadError:(_Bool)arg2 fileIdentifier:(id)arg3;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

