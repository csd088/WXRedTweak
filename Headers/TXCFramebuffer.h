//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXCFramebuffer : NSObject
{
    unsigned int framebuffer;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    unsigned long long readLockCount;
    unsigned long long framebufferReferenceCount;
    _Bool referenceCountingDisabled;
    char *rawBytes;
    struct CGSize rawSize;
    _Bool _missingFramebuffer;
    unsigned int _texture;
    unsigned int _modifyTexture;
    struct CGSize _size;
    struct GPUTextureOptions _textureOptions;
}

- (void)activateFramebuffer;
- (char *)byteBuffer;
- (unsigned long long)bytesPerRow;
- (void)clearAllLocks;
- (void)dealloc;
- (void)destroyFramebuffer;
- (void)disableReferenceCounting;
- (void)enableReferenceCounting;
- (void)generateFramebuffer;
- (void)generateTexture;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 overriddenTexture:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct GPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (void)lock;
- (void)lockForReading;
@property(readonly) _Bool missingFramebuffer; // @synthesize missingFramebuffer=_missingFramebuffer;
@property unsigned int modifyTexture; // @synthesize modifyTexture=_modifyTexture;
- (struct CGImage *)newCGImageFromFramebufferContents;
- (struct __CVBuffer *)pixelBuffer;
- (void)restoreRenderTarget;
@property unsigned int texture; // @synthesize texture=_texture;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) struct GPUTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
- (void)unlock;
- (void)unlockAfterReading;

@end

