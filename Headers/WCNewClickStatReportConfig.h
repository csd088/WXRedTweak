//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSData;

@interface WCNewClickStatReportConfig : MMObject
{
    unsigned int configVersion;
    unsigned int nextUpdateInterval;
    unsigned int samplePeriod;
    NSArray *arrEventConfig;
    NSData *versionBuffer;
}

+ (void)initialize;
+ (id)reportConfigWithXml:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrEventConfig; // @synthesize arrEventConfig;
@property(nonatomic) unsigned int configVersion; // @synthesize configVersion;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (_Bool)isMatchSpecialPVPage:(id)arg1 prePage:(id)arg2;
@property(nonatomic) unsigned int nextUpdateInterval; // @synthesize nextUpdateInterval;
@property(nonatomic) unsigned int samplePeriod; // @synthesize samplePeriod;
@property(retain, nonatomic) NSData *versionBuffer; // @synthesize versionBuffer;

@end

