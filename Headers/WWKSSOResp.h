//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKBaseResp.h"

#import "WWKApiSerializable.h"

@class NSString;

@interface WWKSSOResp : WWKBaseResp <WWKApiSerializable>
{
    NSString *_state;
    NSString *_code;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

