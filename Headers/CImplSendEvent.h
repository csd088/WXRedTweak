//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NetCmdEvent.h"

@class NSMutableArray, NSMutableDictionary;

@interface CImplSendEvent : NetCmdEvent
{
    NSMutableDictionary *m_dicMsgList;
    NSMutableArray *m_arrMsgList;
    unsigned int m_uiScene;
}

- (void).cxx_destruct;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (_Bool)SetEventInfo:(id)arg1;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_arrMsgList; // @synthesize m_arrMsgList;
@property(retain, nonatomic) NSMutableDictionary *m_dicMsgList; // @synthesize m_dicMsgList;

@end

