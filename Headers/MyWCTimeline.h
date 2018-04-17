//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface MyWCTimeline : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_groupHint;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_fromUser;
    NSData *_m_buffer;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)m_buffer;
+ (const struct WCTProperty *)m_fromUser;
+ (const struct WCTProperty *)m_groupHint;
+ (const struct WCTProperty *)m_id;
+ (const struct WCTProperty *)m_localId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(retain, nonatomic) NSData *m_buffer; // @synthesize m_buffer=_m_buffer;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(nonatomic) unsigned int m_groupHint; // @synthesize m_groupHint=_m_groupHint;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId=_m_localId;

@end

