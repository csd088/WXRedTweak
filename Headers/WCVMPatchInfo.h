//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UUIDInfo;

@interface WCVMPatchInfo : NSObject
{
    unsigned int NewClientVersion;
    UUIDInfo *uuidInfo;
    NSString *minIOSVersion;
    NSString *maxIOSVersion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int NewClientVersion; // @synthesize NewClientVersion;
@property(retain, nonatomic) NSString *maxIOSVersion; // @synthesize maxIOSVersion;
@property(retain, nonatomic) NSString *minIOSVersion; // @synthesize minIOSVersion;
@property(retain, nonatomic) UUIDInfo *uuidInfo; // @synthesize uuidInfo;

@end

