//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterEntranceInfo, GameCenterMsgCenterContent, GameCenterMsgFloayLayerInfo, GameCenterNotifyContent, GameCenterWePkgPreloadInfo, NSArray, NSMutableDictionary, NSString;

@interface GameCenterBaseMsg : NSObject
{
    _Bool _wifiFlag;
    int _type;
    unsigned int _localId;
    unsigned int _msgRecvTime;
    NSString *_svrMsgId;
    NSString *_weightStr;
    NSString *_mergeId;
    GameCenterEntranceInfo *_entranceInfo;
    GameCenterMsgFloayLayerInfo *_floatLayerInfo;
    NSArray *_userInfoList;
    NSMutableDictionary *_jumpInfoDic;
    GameCenterWePkgPreloadInfo *_wePkgPreloadInfo;
    NSString *_originMsg;
    GameCenterNotifyContent *_notifyContent;
    GameCenterMsgCenterContent *_msgCenterContent;
}

+ (struct XmlReaderNode_t *)getRootNode:(id)arg1 XmlReader:(struct CXmlReader)arg2;
+ (id)msgWithType:(unsigned int)arg1 xmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)parseFromDbItem:(id)arg1;
+ (id)parseFromMsgWrap:(id)arg1 RootNode:(struct XmlReaderNode_t *)arg2;
- (void).cxx_destruct;
- (id)appid;
- (unsigned int)createTime;
@property(retain, nonatomic) GameCenterEntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
@property(retain, nonatomic) GameCenterMsgFloayLayerInfo *floatLayerInfo; // @synthesize floatLayerInfo=_floatLayerInfo;
- (id)getJumpInfo:(struct XmlReaderNode_t *)arg1;
- (id)getMsgCenterContent;
- (int)getMsgReportType;
- (id)getNoticeid;
- (id)getNotifyContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)isExpired;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoDic; // @synthesize jumpInfoDic=_jumpInfoDic;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(retain, nonatomic) GameCenterMsgCenterContent *msgCenterContent; // @synthesize msgCenterContent=_msgCenterContent;
@property(nonatomic) unsigned int msgRecvTime; // @synthesize msgRecvTime=_msgRecvTime;
- (_Bool)notInMsgCenter;
@property(retain, nonatomic) GameCenterNotifyContent *notifyContent; // @synthesize notifyContent=_notifyContent;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
- (id)parseJumpInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseUserInfo:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(retain, nonatomic) GameCenterWePkgPreloadInfo *wePkgPreloadInfo; // @synthesize wePkgPreloadInfo=_wePkgPreloadInfo;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(nonatomic) _Bool wifiFlag; // @synthesize wifiFlag=_wifiFlag;
- (_Bool)weightMoreThan:(id)arg1;

@end

