//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCMultiLanguageItem : NSObject <NSCoding>
{
    NSString *zh;
    NSString *tw;
    NSString *en;
}

- (void).cxx_destruct;
- (id)currentLanguageText;
@property(retain, nonatomic) NSString *en; // @synthesize en;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *tw; // @synthesize tw;
@property(retain, nonatomic) NSString *zh; // @synthesize zh;

@end

