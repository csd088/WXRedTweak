//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WCDataItem;

@interface FTSBussinessSnsItem : MMObject
{
    unsigned long long _id;
    NSString *_objectXmlDesc;
    WCDataItem *_wcDataItem;
}

+ (id)fromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (id)init;
@property(retain, nonatomic) NSString *objectXmlDesc; // @synthesize objectXmlDesc=_objectXmlDesc;
@property(retain, nonatomic) WCDataItem *wcDataItem; // @synthesize wcDataItem=_wcDataItem;

@end

