//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "PBCoding.h"

@class NSString;

@interface SubscriptBrandInfo : NSObject <PBCoding, NSCoding>
{
    unsigned int m_brandListCount;
    unsigned int m_brandListVersion;
}

+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int m_brandListCount; // @synthesize m_brandListCount;
@property(nonatomic) unsigned int m_brandListVersion; // @synthesize m_brandListVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

