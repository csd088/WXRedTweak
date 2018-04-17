//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class MMResDownloadUrlInfo, NSString;

@interface MMResDownloadInfo : MMObject <WCTTableCoding>
{
    unsigned int resType;
    unsigned int networkType;
    unsigned int scene;
    unsigned int expiredTime;
    unsigned int subType;
    unsigned int retryTime;
    unsigned int reportId;
    unsigned int eid;
    NSString *appId;
    NSString *domain;
    NSString *baseDir;
    NSString *sampleId;
    NSString *packageId;
    MMResDownloadUrlInfo *resUrlInfo;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)baseDir;
+ (const struct WCTProperty *)domain;
+ (const struct WCTProperty *)eid;
+ (const struct WCTProperty *)expiredTime;
+ (const struct WCTProperty *)networkType;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)packageId;
+ (const struct WCTProperty *)reportId;
+ (const struct WCTProperty *)resType;
+ (const struct WCTProperty *)resUrlInfo;
+ (const struct WCTProperty *)retryTime;
+ (const struct WCTProperty *)sampleId;
+ (const struct WCTProperty *)scene;
+ (const struct WCTProperty *)subType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *baseDir; // @synthesize baseDir;
- (void)dealloc;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(nonatomic) unsigned int eid; // @synthesize eid;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime;
@property(nonatomic) unsigned int networkType; // @synthesize networkType;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
@property(nonatomic) unsigned int reportId; // @synthesize reportId;
@property(nonatomic) unsigned int resType; // @synthesize resType;
@property(retain, nonatomic) MMResDownloadUrlInfo *resUrlInfo; // @synthesize resUrlInfo;
@property(nonatomic) unsigned int retryTime; // @synthesize retryTime;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) unsigned int subType; // @synthesize subType;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

