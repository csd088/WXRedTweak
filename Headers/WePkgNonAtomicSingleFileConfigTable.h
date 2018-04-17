//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString, WePkgNonAtomicSingleFileConfigExt;

@interface WePkgNonAtomicSingleFileConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _pkgType;
    NSString *_pkgId;
    NSString *_appId;
    NSString *_entranceDomain;
    NSString *_currentEnabledVersion;
    NSString *_charSet;
    WePkgNonAtomicSingleFileConfigExt *_ext;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)charSet;
+ (const struct WCTProperty *)currentEnabledVersion;
+ (const struct WCTProperty *)entranceDomain;
+ (const struct WCTProperty *)ext;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)pkgId;
+ (const struct WCTProperty *)pkgType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(retain, nonatomic) NSString *currentEnabledVersion; // @synthesize currentEnabledVersion=_currentEnabledVersion;
@property(retain, nonatomic) NSString *entranceDomain; // @synthesize entranceDomain=_entranceDomain;
@property(retain, nonatomic) WePkgNonAtomicSingleFileConfigExt *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

