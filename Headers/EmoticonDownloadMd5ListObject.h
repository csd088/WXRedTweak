//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonDownloadMd5ListObject : MMObject <PBCoding>
{
    unsigned int m_lastUpdateTime;
    NSMutableArray *m_md5List;
}

+ (id)Instance;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addMd5ObjectList:(id)arg1;
- (void)checkComplete;
- (int)checkCompleteAndReturnNeedMd5DownloadCount;
- (void)checkCompleteForMd5Object:(id)arg1;
- (void)clearMd5List;
- (unsigned long long)completeCount;
- (id)completeMd5:(id)arg1;
- (void)dealloc;
- (void)failedMd5:(id)arg1;
- (id)filterExistedMd5:(id)arg1;
- (id)getMd5List;
- (id)getUnCompleteMd5Object;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) unsigned int m_lastUpdateTime; // @synthesize m_lastUpdateTime;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
- (_Bool)moreThanADaySinceLastUpdateTime;
- (void)removeMd5:(id)arg1;
- (void)saveToFile;
- (void)stickyMd5List:(id)arg1;
- (unsigned long long)totalCount;
- (void)updateLastUpdateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

