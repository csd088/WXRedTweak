//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAPublicResInfo : NSObject <PBCoding>
{
    _Bool bIsForceUpdate;
    unsigned int version;
    unsigned int updateTime;
    unsigned int updateScene;
    unsigned int updateType;
    unsigned int oldVersion;
    NSString *pkgDownloadUrl;
    NSString *checkSum;
    NSString *pkgPatchUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIsForceUpdate; // @synthesize bIsForceUpdate;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int oldVersion; // @synthesize oldVersion;
@property(retain, nonatomic) NSString *pkgDownloadUrl; // @synthesize pkgDownloadUrl;
@property(retain, nonatomic) NSString *pkgPatchUrl; // @synthesize pkgPatchUrl;
@property(nonatomic) unsigned int updateScene; // @synthesize updateScene;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int updateType; // @synthesize updateType;
@property(nonatomic) unsigned int version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

