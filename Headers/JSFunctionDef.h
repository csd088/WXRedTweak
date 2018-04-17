//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSAPIPermissionBitSet, NSString;

@interface JSFunctionDef : NSObject
{
    SEL funcSelector;
    long long funcType;
    NSString *funcName;
    JSAPIPermissionBitSet *permissionBitset;
    long long permissionByteIndex;
    unsigned long long _runInWebViewType;
}

+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet2:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet3:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionByteIndex:(long long)arg4 RunInWebViewType:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *funcName; // @synthesize funcName;
@property(nonatomic) SEL funcSelector; // @synthesize funcSelector;
@property(nonatomic) long long funcType; // @synthesize funcType;
- (id)init;
@property(copy, nonatomic) JSAPIPermissionBitSet *permissionBitset; // @synthesize permissionBitset;
@property(nonatomic) long long permissionByteIndex; // @synthesize permissionByteIndex;
@property(nonatomic) unsigned long long runInWebViewType; // @synthesize runInWebViewType=_runInWebViewType;

@end

