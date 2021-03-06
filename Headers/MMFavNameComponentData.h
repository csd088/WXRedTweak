//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSDate, NSString;

@interface MMFavNameComponentData : MMComponentData
{
    _Bool bShowDataSize;
    unsigned int _m_uiFavUpDateTime;
    NSString *m_nameId;
    NSString *m_roomUsr;
    NSString *m_fromUsr;
    NSString *m_brand;
    NSString *m_toUsr;
    NSString *m_realChatName;
    long long favType;
    long long dataSize;
    NSDate *_scheduleDate;
    NSString *_m_searchDisplayName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowDataSize; // @synthesize bShowDataSize;
@property(nonatomic) long long dataSize; // @synthesize dataSize;
@property(nonatomic) long long favType; // @synthesize favType;
@property(retain, nonatomic) NSString *m_brand; // @synthesize m_brand;
@property(retain, nonatomic) NSString *m_fromUsr; // @synthesize m_fromUsr;
@property(retain, nonatomic) NSString *m_nameId; // @synthesize m_nameId;
@property(retain, nonatomic) NSString *m_realChatName; // @synthesize m_realChatName;
@property(retain, nonatomic) NSString *m_roomUsr; // @synthesize m_roomUsr;
@property(retain, nonatomic) NSString *m_searchDisplayName; // @synthesize m_searchDisplayName=_m_searchDisplayName;
@property(retain, nonatomic) NSString *m_toUsr; // @synthesize m_toUsr;
@property(nonatomic) unsigned int m_uiFavUpDateTime; // @synthesize m_uiFavUpDateTime=_m_uiFavUpDateTime;
@property(retain, nonatomic) NSDate *scheduleDate; // @synthesize scheduleDate=_scheduleDate;

@end

