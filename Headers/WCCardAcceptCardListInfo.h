//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface WCCardAcceptCardListInfo : MMObject
{
    unsigned int _fromScene;
    unsigned int _statScene;
    NSString *_bundleID;
    NSString *_chatName;
    NSString *_webUrl;
    NSMutableArray *_cardSeedList;
    NSString *_appID;
    NSString *_consumedboxCardId;
    NSString *_templateMsgId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSMutableArray *cardSeedList; // @synthesize cardSeedList=_cardSeedList;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *consumedboxCardId; // @synthesize consumedboxCardId=_consumedboxCardId;
- (void)dealloc;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned int statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;

@end

