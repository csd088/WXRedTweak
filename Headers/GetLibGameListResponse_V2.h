//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, LibGameBaseInfo, NSMutableArray;

@interface GetLibGameListResponse_V2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allGameList; // @dynamic allGameList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LibGameBaseInfo *libGameBaseInfo; // @dynamic libGameBaseInfo;
@property(nonatomic) unsigned int nextOffSet; // @dynamic nextOffSet;
@property(nonatomic) _Bool remaining; // @dynamic remaining;

@end

