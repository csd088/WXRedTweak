//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKBaseReq.h"

#import "WWKApiSerializable.h"

@class NSString;

@interface WWKSSOReq : WWKBaseReq <WWKApiSerializable>
{
    NSString *_state;
}

- (void).cxx_destruct;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

