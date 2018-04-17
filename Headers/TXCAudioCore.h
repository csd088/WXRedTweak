//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, TXCReverbParams;

@interface TXCAudioCore : NSObject
{
    float _innerSamplerate;
    unsigned int _innerChannels;
    struct TXCResampleMixer _resampler;
    struct TXCMutex _resamplerMutex;
    _Bool _isInterruption;
    _Bool _isStartPlay;
    _Bool _isStartRecord;
    _Bool _isPauseRecord;
    NSString *_oldAudioCategroy;
    NSString *_oldAudioMode;
    unsigned int _frameLen;
    int _mixFrameLen;
    unsigned int _frameRecordLen;
    double _tsWhenInterrupt;
    unsigned long long _timeWhenInterrupt;
    char *_emptyPcm;
    _Bool _sendEmptyPcm;
    NSObject<OS_dispatch_queue> *_sendEmptyQueue;
    struct TXCMutex _sendEmptyLock;
    NSMutableArray *_playDelegates;
    struct TXCMutex _playDelegatesMutex;
    _Bool _isHeadset;
    int _workMode;
    double _timeForLogLimit;
    unsigned int _needPCMLen;
    struct AudioStreamBasicDescription _effectStreamFormat;
    struct OpaqueAUGraph *_auGraph;
    TXCReverbParams *_reverbParams;
    TXCReverbParams *_reverbParams_0;
    TXCReverbParams *_reverbParams_1;
    TXCReverbParams *_reverbParams_2;
    TXCReverbParams *_reverbParams_3;
    TXCReverbParams *_reverbParams_4;
    TXCReverbParams *_reverbParams_5;
    TXCReverbParams *_reverbParams_6;
    TXCReverbParams *_reverbParams_7;
    NSArray *_reverbParamsArray;
    float _silenceIntervalForStart;
    _Bool _needReStartAUGraph;
    _Bool _enableAEC;
    _Bool _isAudioPreview;
    _Bool _isCustomRecord;
    float _sampleRate;
    unsigned int _channelsPerSample;
    unsigned int _bitsPerChannels;
    int _ioNode;
    int _processNode;
    int _convertNode;
    long long _audioMode;
    long long _reverbType;
    id <TXIAudioRecordDelegate> _recordDelegate;
    struct OpaqueAudioComponentInstance *_ioUnit;
    struct OpaqueAudioComponentInstance *_processUnit;
    struct OpaqueAudioComponentInstance *_convertUnit;
    short *_conversionBuffer;
    NSObject<OS_dispatch_queue> *_unitQueue;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
@property(nonatomic) long long audioMode; // @synthesize audioMode=_audioMode;
@property(nonatomic) unsigned int bitsPerChannels; // @synthesize bitsPerChannels=_bitsPerChannels;
@property(nonatomic) unsigned int channelsPerSample; // @synthesize channelsPerSample=_channelsPerSample;
- (void)clearAudioDataList:(list_3e119c15 *)arg1;
- (void)configAUGraph;
- (void)connectAUGraph;
@property(nonatomic) short *conversionBuffer; // @synthesize conversionBuffer=_conversionBuffer;
@property(nonatomic) int convertNode; // @synthesize convertNode=_convertNode;
@property(nonatomic) struct OpaqueAudioComponentInstance *convertUnit; // @synthesize convertUnit=_convertUnit;
- (void)createAUGraph;
- (void)dealloc;
@property(nonatomic) _Bool enableAEC; // @synthesize enableAEC=_enableAEC;
- (void)handleInterruption:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (id)init;
@property(nonatomic) int ioNode; // @synthesize ioNode=_ioNode;
@property(nonatomic) struct OpaqueAudioComponentInstance *ioUnit; // @synthesize ioUnit=_ioUnit;
@property(nonatomic) _Bool isAudioPreview; // @synthesize isAudioPreview=_isAudioPreview;
@property _Bool isCustomRecord; // @synthesize isCustomRecord=_isCustomRecord;
- (_Bool)isHeadSet;
- (void)mixAudio:(char *)arg1 length:(int)arg2;
- (long long)pausePlay;
- (long long)pauseRecord;
@property(nonatomic) int processNode; // @synthesize processNode=_processNode;
@property(nonatomic) struct OpaqueAudioComponentInstance *processUnit; // @synthesize processUnit=_processUnit;
- (unsigned int)queryPlayData:(char *)arg1 withMaxLen:(unsigned int)arg2;
@property(retain, nonatomic) id <TXIAudioRecordDelegate> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
- (void)removeAudioSession;
- (long long)resetPlay;
- (long long)resetRecord;
- (long long)resumePlay;
- (long long)resumeRecord;
@property(nonatomic) long long reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)sendRecordData;
- (void)sendRecordData:(char *)arg1 withLen:(unsigned int)arg2 withTS:(double)arg3;
- (void)setAudioInfo:(double)arg1 channels:(unsigned int)arg2 bitSize:(unsigned int)arg3;
- (void)setAudioModeInternal:(long long)arg1;
- (void)setRevrb:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *unitQueue; // @synthesize unitQueue=_unitQueue;
- (void)setWorkMode:(int)arg1;
- (void)setupAudioSession;
- (void)setupNotification;
- (void)startAUGraph;
- (long long)startPlay:(id)arg1;
- (long long)startRecord;
- (void)stopAUGraph;
- (long long)stopPlay:(id)arg1;
- (long long)stopRecord;

@end

