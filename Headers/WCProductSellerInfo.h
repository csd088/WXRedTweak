//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCProductLocationInfo;

@interface WCProductSellerInfo : NSObject
{
    unsigned int flag;
    NSString *appID;
    NSString *usrName;
    NSString *name;
    WCProductLocationInfo *locationInfo;
    NSString *contactWay;
    NSString *logoImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *contactWay; // @synthesize contactWay;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) WCProductLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) NSString *logoImg; // @synthesize logoImg;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName;

@end

