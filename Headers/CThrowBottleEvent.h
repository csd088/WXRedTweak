//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NetCmdEvent.h"

@class CThrowBottleWrap;

@interface CThrowBottleEvent : NetCmdEvent
{
    CThrowBottleWrap *m_wrapThrowBottle;
}

- (void).cxx_destruct;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (_Bool)SetEventInfo:(id)arg1;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CThrowBottleWrap *m_wrapThrowBottle; // @synthesize m_wrapThrowBottle;

@end

