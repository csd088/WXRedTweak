//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAContactMainThreadGetter;

@interface WAContactGetter : NSObject
{
    WAContactMainThreadGetter *_mainThreadGetter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getWeAppContact:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeAppContact:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithAppid:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeAppContactWithAppid:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned int)arg5;
- (void)mainThread_getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned int)arg5;

@end

