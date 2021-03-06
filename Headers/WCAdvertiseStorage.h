//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface WCAdvertiseStorage : MMObject <PBCoding>
{
    NSString *nsAdvertiseID;
    NSString *nsUsername;
    unsigned int uiAdCreateTime;
    unsigned int uiAdDisplayTime;
    NSData *oAdvertiseData;
}

+ (void)initialize;
- (void).cxx_destruct;
- (long long)compareAdTime:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nsAdvertiseID; // @synthesize nsAdvertiseID;
@property(retain, nonatomic) NSString *nsUsername; // @synthesize nsUsername;
@property(retain, nonatomic) NSData *oAdvertiseData; // @synthesize oAdvertiseData;
@property(nonatomic) unsigned int uiAdCreateTime; // @synthesize uiAdCreateTime;
@property(nonatomic) unsigned int uiAdDisplayTime; // @synthesize uiAdDisplayTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

