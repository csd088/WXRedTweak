//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVURLAsset, NSInvocationOperation, NSRecursiveLock, NSString;

@interface MMovieDecoder : NSObject
{
    NSString *m_url;
    AVURLAsset *m_asset;
    NSInvocationOperation *m_playThread;
    NSRecursiveLock *m_threadLock;
    id <MMovieDecoderDelegate> m_delegate;
    int m_decodeMode;
    _Bool m_shouldDecodeVideo;
    _Bool m_shouldDecodeAudio;
    _Bool m_shouldSleepForEveryFrame;
    struct CGAffineTransform m_preferredTransform;
    unsigned long long m_pixelFormatType;
    _Bool _audioOnly;
    NSString *_cpKey;
}

+ (id)shareOperationQueue;
- (void).cxx_destruct;
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
- (void)dealloc;
@property(nonatomic) int decodeMode; // @synthesize decodeMode=m_decodeMode;
@property(nonatomic) __weak id <MMovieDecoderDelegate> delegate; // @synthesize delegate=m_delegate;
- (long long)imageOrientation;
- (id)init;
- (void)load:(id)arg1;
- (void)pause;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=m_preferredTransform;
- (void)releaseThread;
- (void)start;
- (void)threadFunc;
- (long long)videoOrientation;

@end

