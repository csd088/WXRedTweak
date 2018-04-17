//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChatRoomVerifyMsg : NSObject
{
    unsigned int createTime;
    unsigned int msgSvrID;
    NSString *chatRoomName;
    NSString *inviterName;
    NSString *inviterNickName;
    unsigned int scene;
    NSString *desc;
    NSString *ticket;
    NSString *userName;
    NSString *userNickName;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *hdHeadImgUrl;
    NSString *headImgUrl;
    NSString *sign;
    NSString *weibo;
    NSString *weiboNickname;
    unsigned int albumFlag;
    unsigned int albumStyle;
    NSString *albumBgId;
    unsigned int snsFlag;
    NSString *snsBgId;
    unsigned int snsBgObjId;
    _Bool isRead;
    _Bool isVerified;
    unsigned int snsObjId;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumBgId; // @synthesize albumBgId;
@property(nonatomic) unsigned int albumFlag; // @synthesize albumFlag;
@property(nonatomic) unsigned int albumStyle; // @synthesize albumStyle;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *hdHeadImgUrl; // @synthesize hdHeadImgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(retain, nonatomic) NSString *inviterName; // @synthesize inviterName;
@property(retain, nonatomic) NSString *inviterNickName; // @synthesize inviterNickName;
@property(nonatomic) _Bool isRead; // @synthesize isRead;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified;
@property(nonatomic) unsigned int msgSvrID; // @synthesize msgSvrID;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(retain, nonatomic) NSString *snsBgId; // @synthesize snsBgId;
@property(nonatomic) unsigned int snsFlag; // @synthesize snsFlag;
@property(nonatomic) unsigned int snsObjId; // @synthesize snsObjId;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *userNickName; // @synthesize userNickName;
@property(retain, nonatomic) NSString *weibo; // @synthesize weibo;
@property(retain, nonatomic) NSString *weiboNickname; // @synthesize weiboNickname;

@end

