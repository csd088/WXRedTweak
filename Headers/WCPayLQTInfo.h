//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCPayLQTInfo : NSObject <NSCoding>
{
    _Bool _bSupportOfflinePay;
    NSString *_lqtBankType;
    NSString *_lqtBindSerial;
    NSString *_lqtBankName;
    unsigned long long _lqtTotalBalance;
    unsigned long long _lqtAvailBalance;
    NSString *_lqtLogoUrl;
    NSString *_lqtforbidWord;
    NSString *_lqtforbidTitle;
    NSString *_lqtforbidUrl;
    NSString *_lqtShowWording;
    NSString *_lqtForbidId;
    NSString *_lqtmobile;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSupportOfflinePay; // @synthesize bSupportOfflinePay=_bSupportOfflinePay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long lqtAvailBalance; // @synthesize lqtAvailBalance=_lqtAvailBalance;
@property(retain, nonatomic) NSString *lqtBankName; // @synthesize lqtBankName=_lqtBankName;
@property(retain, nonatomic) NSString *lqtBankType; // @synthesize lqtBankType=_lqtBankType;
@property(retain, nonatomic) NSString *lqtBindSerial; // @synthesize lqtBindSerial=_lqtBindSerial;
@property(retain, nonatomic) NSString *lqtForbidId; // @synthesize lqtForbidId=_lqtForbidId;
@property(retain, nonatomic) NSString *lqtLogoUrl; // @synthesize lqtLogoUrl=_lqtLogoUrl;
@property(retain, nonatomic) NSString *lqtShowWording; // @synthesize lqtShowWording=_lqtShowWording;
@property(nonatomic) unsigned long long lqtTotalBalance; // @synthesize lqtTotalBalance=_lqtTotalBalance;
@property(retain, nonatomic) NSString *lqtforbidTitle; // @synthesize lqtforbidTitle=_lqtforbidTitle;
@property(retain, nonatomic) NSString *lqtforbidUrl; // @synthesize lqtforbidUrl=_lqtforbidUrl;
@property(retain, nonatomic) NSString *lqtforbidWord; // @synthesize lqtforbidWord=_lqtforbidWord;
@property(retain, nonatomic) NSString *lqtmobile; // @synthesize lqtmobile=_lqtmobile;

@end

