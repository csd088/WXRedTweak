//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface AppCommentMsg : NSObject
{
    NSString *deviceType;
    NSString *message;
    NSMutableArray *items;
    NSString *title;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType;
- (id)getCancelItem;
- (id)getItemByButtonIndex:(long long)arg1;
- (id)initWithXml:(id)arg1;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
@property(retain, nonatomic) NSString *message; // @synthesize message;
- (void)parseXML:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title;

@end

