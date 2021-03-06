//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EJJavaScriptView;

@interface EJBindingBase : NSObject
{
    struct OpaqueJSValue *jsObject;
    EJJavaScriptView *scriptView;
}

+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 instance:(id)arg3;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (_Bool)isPaused;
- (void)prepareGarbageCollection;
@property(nonatomic) __weak EJJavaScriptView *scriptView; // @synthesize scriptView;

@end

