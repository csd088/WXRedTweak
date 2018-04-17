//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface StoreEmotionUploadMyPanelListCgi : MMObject <PBMessageObserverDelegate>
{
    _Bool m_hasStartRequestOnce;
    _Bool m_ignoreLimit;
    unsigned int m_eventId;
    int _code;
    NSMutableArray *m_productIDList;
    id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (void)callOKDelegate;
@property(nonatomic) int code; // @synthesize code=_code;
- (id)initWithProductIDList:(id)arg1 delegate:(id)arg2;
- (_Bool)isActive;
@property(nonatomic) __weak id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) _Bool m_ignoreLimit; // @synthesize m_ignoreLimit;
@property(retain, nonatomic) NSMutableArray *m_productIDList; // @synthesize m_productIDList;
- (void)setNeedPids:(id)arg1;
- (void)startInternalRequest;
- (void)startRequest;
- (void)startSortedLogic;

@end

