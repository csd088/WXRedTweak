//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet;

@interface EmoticonDescAliasObject : NSObject
{
    int _resultCacheVersion;
    NSSet *_descList;
    NSMutableSet *_resultCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *descList; // @synthesize descList=_descList;
@property(retain, nonatomic) NSMutableSet *resultCache; // @synthesize resultCache=_resultCache;
@property(nonatomic) int resultCacheVersion; // @synthesize resultCacheVersion=_resultCacheVersion;

@end

