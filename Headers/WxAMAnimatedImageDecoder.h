//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAnimatedImageDecoder.h"

@class NSData, UIImage;

@interface WxAMAnimatedImageDecoder : MMAnimatedImageDecoder
{
    NSData *m_data;
    void *m_decoder;
    struct StWxAMFrame *m_curWxFrame;
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGSize m_imageSize;
}

+ (int)frameCountForImageData:(id)arg1;
+ (id)imageOfFrame:(struct StWxAMFrame *)arg1 scale:(double)arg2;
+ (id)imageWithWxAMData:(id)arg1 scale:(double)arg2;
+ (_Bool)isWxAMData:(id)arg1;
+ (double)secondsOfFrame:(struct StWxAMFrame *)arg1;
+ (void)updateMaxWidth:(unsigned int)arg1;
- (void).cxx_destruct;
- (_Bool)configDecoderWithWXGifData:(id)arg1;
- (double)currentFrameDuration;
- (int)currentFrameId;
- (id)currentFrameImage;
- (void)dealloc;
- (int)frameCount;
- (_Bool)hasDecodeOneLoop;
- (struct CGSize)imageSize;
- (id)initWithData:(id)arg1;
- (_Bool)isSingleFrame;
- (void)seekToNextFrame;
- (void)setScale:(double)arg1;
- (void)uninitDecoder;

@end

