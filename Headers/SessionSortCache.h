//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface SessionSortCache : NSObject <PBCoding>
{
    NSMutableDictionary *dicUsrNameUntopTime;
    NSMutableDictionary *dicUsrNameTopTime;
    _Bool hasMergeTopFlag;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameTopTime; // @synthesize dicUsrNameTopTime;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameUntopTime; // @synthesize dicUsrNameUntopTime;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool hasMergeTopFlag; // @synthesize hasMergeTopFlag;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

