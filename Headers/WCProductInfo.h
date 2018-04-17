//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCProductBaseInfo, WCProductExtInfo, WCProductOSSInfo, WCProductSellerInfo, WCProductShareInfo;

@interface WCProductInfo : NSObject
{
    unsigned int productType;
    unsigned int productSubType;
    NSString *productID;
    WCProductBaseInfo *baseInfo;
    WCProductSellerInfo *sellerInfo;
    NSArray *skuInfoList;
    WCProductExtInfo *extInfo;
    WCProductShareInfo *shareInfo;
    NSArray *recommendInfoList;
    WCProductOSSInfo *ossInfo;
    NSString *jsonStrForTest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCProductBaseInfo *baseInfo; // @synthesize baseInfo;
- (void)dealloc;
@property(retain, nonatomic) WCProductExtInfo *extInfo; // @synthesize extInfo;
- (void)fromShareXML:(id)arg1;
@property(retain, nonatomic) NSString *jsonStrForTest; // @synthesize jsonStrForTest;
- (void)loadDataForTest;
@property(retain, nonatomic) WCProductOSSInfo *ossInfo; // @synthesize ossInfo;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)parseRecommendInfoFromJSONStr:(id)arg1;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
@property(nonatomic) unsigned int productSubType; // @synthesize productSubType;
@property(nonatomic) unsigned int productType; // @synthesize productType;
@property(retain, nonatomic) NSArray *recommendInfoList; // @synthesize recommendInfoList;
@property(retain, nonatomic) WCProductSellerInfo *sellerInfo; // @synthesize sellerInfo;
@property(retain, nonatomic) WCProductShareInfo *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) NSArray *skuInfoList; // @synthesize skuInfoList;
- (id)toShareXML;

@end

