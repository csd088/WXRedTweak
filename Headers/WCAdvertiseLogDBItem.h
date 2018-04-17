//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCAdvertiseLogDBItem : MMObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _m_uiLocalId;
    unsigned int _m_uiCreateTime;
    unsigned int _m_uiLogId;
    long long lastInsertedRowID;
    NSString *_m_nsLogExt;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)m_nsLogExt;
+ (const struct WCTProperty *)m_uiCreateTime;
+ (const struct WCTProperty *)m_uiLocalId;
+ (const struct WCTProperty *)m_uiLogId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(retain, nonatomic) NSString *m_nsLogExt; // @synthesize m_nsLogExt=_m_nsLogExt;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(nonatomic) unsigned int m_uiLocalId; // @synthesize m_uiLocalId=_m_uiLocalId;
@property(nonatomic) unsigned int m_uiLogId; // @synthesize m_uiLogId=_m_uiLogId;

@end

