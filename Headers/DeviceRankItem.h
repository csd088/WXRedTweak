//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface DeviceRankItem : MMObject
{
    unsigned int _uiRankNum;
    NSString *_nsRankId;
    NSString *_nsRankTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsRankId; // @synthesize nsRankId=_nsRankId;
@property(retain, nonatomic) NSString *nsRankTitle; // @synthesize nsRankTitle=_nsRankTitle;
@property(nonatomic) unsigned int uiRankNum; // @synthesize uiRankNum=_uiRankNum;

@end

