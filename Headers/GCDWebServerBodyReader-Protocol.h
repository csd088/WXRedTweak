//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol GCDWebServerBodyReader <NSObject>
- (void)close;
- (_Bool)open:(id *)arg1;
- (NSData *)readData:(id *)arg1;

@optional
- (void)asyncReadDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

