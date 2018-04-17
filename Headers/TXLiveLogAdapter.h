//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXLiveBaseDelegate.h"

@class NSString;

@interface TXLiveLogAdapter : NSObject <TXLiveBaseDelegate>
{
    _Bool _isLoging;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isLoging; // @synthesize isLoging=_isLoging;
- (void)onLog:(id)arg1 LogLevel:(int)arg2 WhichModule:(id)arg3;
- (void)startLog;
- (void)stopLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
