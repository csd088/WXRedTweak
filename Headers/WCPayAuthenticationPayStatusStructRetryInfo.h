//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayPayResponseRetryInfo;

@interface WCPayAuthenticationPayStatusStructRetryInfo : NSObject
{
    long long _can_pay_retry;
    WCPayPayResponseRetryInfo *_retry_pay_info;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long can_pay_retry; // @synthesize can_pay_retry=_can_pay_retry;
- (void)genFromDic:(id)arg1;
@property(retain, nonatomic) WCPayPayResponseRetryInfo *retry_pay_info; // @synthesize retry_pay_info=_retry_pay_info;

@end

