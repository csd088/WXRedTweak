//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface ListMFriendResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int emailCount; // @dynamic emailCount;
@property(retain, nonatomic) NSMutableArray *emailInfo; // @dynamic emailInfo;
@property(nonatomic) unsigned int mobileCount; // @dynamic mobileCount;
@property(retain, nonatomic) NSMutableArray *mobileInfo; // @dynamic mobileInfo;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

