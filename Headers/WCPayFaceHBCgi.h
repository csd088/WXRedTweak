//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WCPayFaceHBCgi : MMObject <PBMessageObserverDelegate>
{
    id <WCPayFaceHBCgiDelegate> m_delegate;
    NSString *m_key;
    int _cgiNumber;
    unsigned int _m_uiRetryCount;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) int cgiNumber; // @synthesize cgiNumber=_cgiNumber;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 Key:(id)arg2;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount=_m_uiRetryCount;
- (void)startRequest:(id)arg1;

@end

