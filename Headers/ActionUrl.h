//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface ActionUrl : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_desc;
    NSString *_link;
    NSString *_iconurl;
    NSString *_digest;
    NSString *_username;
    NSString *_nickname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toXml;

@end

