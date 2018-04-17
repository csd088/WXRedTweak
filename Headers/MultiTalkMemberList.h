//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSArray, NSString;

@interface MultiTalkMemberList : MMObject <PBCoding, WCTColumnCoding>
{
    NSArray *memberList;
}

+ (int)columnTypeForWCDB;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSArray *memberList; // @synthesize memberList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

