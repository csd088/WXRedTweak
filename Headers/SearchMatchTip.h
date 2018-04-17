//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SearchMatchTip : NSObject
{
    NSString *_key;
    NSString *_searchText;
    NSString *_showPrefix;
    NSString *_showSuffix;
    NSString *_showResult;
    unsigned long long _location;
    unsigned int _createTime;
    int _matchType;
    int _matchSubType;
    int _groupMemberMatchType;
    NSMutableArray *_arrKeywordMatchText;
    NSString *_displayNameFullPY;
    _Bool _isSilent;
    int _queryMatchType;
    unsigned int _chatRoomMemberCount;
    NSMutableDictionary *_dicGroupMemberMatchTip;
}

+ (id)GetActiveMatchTipFrom:(id)arg1;
+ (unsigned int)GetContactActiveDays;
+ (id)GetUnActiveMatchTipFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrKeywordMatchText; // @synthesize arrKeywordMatchText=_arrKeywordMatchText;
@property(nonatomic) unsigned int chatRoomMemberCount; // @synthesize chatRoomMemberCount=_chatRoomMemberCount;
- (long long)compareGroupSearchMatchTipAscending:(id)arg1;
- (long long)compareGroupSearchMatchTipAscendingUseBasicLogic:(id)arg1;
- (long long)compareGroupSearchMatchTipAscendingUseOptimizedLogic:(id)arg1;
- (long long)comparePhoneSearchMatchTipFirstLineAscending:(id)arg1;
- (long long)comparePhoneSearchMatchTipSecondLineAscending:(id)arg1;
- (long long)compareSearchMatchTipFirstLineAscending:(id)arg1;
- (long long)compareSearchMatchTipSecondLineAscending:(id)arg1;
- (unsigned int)convertGroupMemberMatchType;
- (unsigned int)convertLogType;
- (unsigned int)convertLogType:(unsigned int)arg1;
- (id)convertMatchTypeStr;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberMatchTip; // @synthesize dicGroupMemberMatchTip=_dicGroupMemberMatchTip;
@property(retain, nonatomic) NSString *displayNameFullPY; // @synthesize displayNameFullPY=_displayNameFullPY;
- (id)getShowResult;
- (_Bool)groupActiveLogic:(unsigned int)arg1;
@property(nonatomic) int groupMemberMatchType; // @synthesize groupMemberMatchType=_groupMemberMatchType;
- (id)init;
- (_Bool)isMultiMemberMatch;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
- (_Bool)isSmallGroup:(unsigned int)arg1;
- (_Bool)isStrongMatch;
- (_Bool)isValidMatchTypeStr:(id)arg1;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(nonatomic) int matchSubType; // @synthesize matchSubType=_matchSubType;
@property(nonatomic) int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) int queryMatchType; // @synthesize queryMatchType=_queryMatchType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSString *showPrefix; // @synthesize showPrefix=_showPrefix;
@property(retain, nonatomic) NSString *showSuffix; // @synthesize showSuffix=_showSuffix;

@end

