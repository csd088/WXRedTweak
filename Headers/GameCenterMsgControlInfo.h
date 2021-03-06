//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GameCenterMsgControlInfo : NSObject
{
    _Bool _notInMsgCenter;
    int _controlFlag;
    int _filterFlag;
    unsigned int _createTime;
    unsigned int _expiredTime;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
- (_Bool)canClickMsgCenterCellSource;
@property(nonatomic) int controlFlag; // @synthesize controlFlag=_controlFlag;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) int filterFlag; // @synthesize filterFlag=_filterFlag;
@property(nonatomic) _Bool notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;
- (_Bool)shouldShowFindFriendEntry;
- (_Bool)shouldShowMsgCenterCellSource;

@end

