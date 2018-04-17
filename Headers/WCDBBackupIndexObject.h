//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCDBBackupIndexObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    NSString *m_fileName;
    long long m_startTime;
    long long m_endTime;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)m_endTime;
+ (const struct WCTProperty *)m_fileName;
+ (const struct WCTProperty *)m_sessionName;
+ (const struct WCTProperty *)m_startTime;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) long long m_endTime; // @synthesize m_endTime;
@property(retain, nonatomic) NSString *m_fileName; // @synthesize m_fileName;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
@property(nonatomic) long long m_startTime; // @synthesize m_startTime;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

