//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WAContactGetter;

@interface WAAppIdToUsernameTransfer : MMObject
{
    WAContactGetter *_contactGetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
- (void)transferAppidToUsernameWithAppId:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

