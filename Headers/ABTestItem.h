//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSDictionary, NSString;

@interface ABTestItem : MMObject <PBCoding>
{
    _Bool bNoReport;
    unsigned int uiSeq;
    unsigned int uiBeginTime;
    unsigned int uiEndTime;
    unsigned int uiPriorityLevel;
    NSString *nsLayerId;
    NSString *nsExpId;
    NSDictionary *dicExpArgs;
    NSString *nsBizId;
}

+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)abtestRunning;
@property(nonatomic) _Bool bNoReport; // @synthesize bNoReport;
@property(retain, nonatomic) NSDictionary *dicExpArgs; // @synthesize dicExpArgs;
- (unsigned int)getPriorityLevel;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nsBizId; // @synthesize nsBizId;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId;
@property(retain, nonatomic) NSString *nsLayerId; // @synthesize nsLayerId;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned int uiPriorityLevel; // @synthesize uiPriorityLevel;
@property(nonatomic) unsigned int uiSeq; // @synthesize uiSeq;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

