//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RadarSearchVerifyResult : NSObject
{
    NSString *_username;
    NSString *_content;
    NSString *_encryUsrName;
    int _type;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void)dealloc;
@property(retain, nonatomic) NSString *encryUsrName; // @synthesize encryUsrName=_encryUsrName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

