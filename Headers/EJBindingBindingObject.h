//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingEventedBase.h"

@class EJBindingGlobalUtils;

@interface EJBindingBindingObject : EJBindingEventedBase
{
    _Bool stopRender;
    EJBindingGlobalUtils *global;
}

+ (void *)_ptr_to_get___id;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)prepareGarbageCollection;
@property(nonatomic) _Bool stopRender; // @synthesize stopRender;

@end

