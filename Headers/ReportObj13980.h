//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ReportObj13980 : NSObject
{
    int _resultCode;
    unsigned int _costTime;
    NSString *_scene;
    NSString *_url;
    NSString *_pkgId;
    NSString *_pkgVersion;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
- (id)init;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(retain, nonatomic) NSString *pkgVersion; // @synthesize pkgVersion=_pkgVersion;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)toLogExt;

@end

