//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterNewFeedFriendItem : MMObject <PBCoding>
{
    NSString *username;
    NSString *title;
    NSString *detail;
    NSString *iconURL;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL;
- (void)parseFromResp:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *username; // @synthesize username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

