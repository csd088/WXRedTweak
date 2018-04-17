//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KSSongInfo, LZDownloadTaskItem, LZFileCache, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface KSAudioDataProvider : NSObject
{
    LZFileCache *_fileCache;
    NSString *_filePath;
    KSSongInfo *_songInfo;
    LZDownloadTaskItem *_cacheItem;
    void *_context;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    id <KSAudioDataProviderDelegate> _delegate;
    NSDictionary *_providerWorkDetail;
}

- (void).cxx_destruct;
- (id)audioFileExtension;
- (id)audioFileTypes;
@property(readonly, nonatomic) LZDownloadTaskItem *cacheItem; // @synthesize cacheItem=_cacheItem;
- (_Bool)canReadData:(long long)arg1 len:(long long)arg2 err:(id *)arg3;
- (void)close:(_Bool)arg1;
@property(nonatomic) void *context; // @synthesize context=_context;
- (void)dealloc;
@property(nonatomic) __weak id <KSAudioDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (double)downloadSpeed;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) LZFileCache *fileCache; // @synthesize fileCache=_fileCache;
- (long long)fileCachingLength:(long long *)arg1;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)init;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;
- (_Bool)isDataCorruption:(id)arg1;
- (_Bool)isReady;
- (void)pauseDownloadData;
- (_Bool)prepareAudioData;
- (void)prepareBufferData;
- (void)prepareSeekingData:(long long)arg1;
- (void)prepareTailData:(struct _NSRange)arg1;
@property(retain) NSDictionary *providerWorkDetail; // @synthesize providerWorkDetail=_providerWorkDetail;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)readFileData:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(_Bool *)arg4;
- (_Bool)readFileDataInner:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(_Bool *)arg4;
- (long long)readFileSize;
- (void)resumeDownloadData;
@property(readonly, nonatomic) KSSongInfo *songInfo; // @synthesize songInfo=_songInfo;

@end

