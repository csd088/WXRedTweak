//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSString;

@interface QBCommonFileInfo : QBJceObjectV2
{
    NSString *jcev2_p_0_r_sFileName;
    NSString *jcev2_p_1_r_sFileUrl;
    NSString *jcev2_p_2_o_sFileContentMd5;
    NSString *jcev2_p_3_o_sSignature;
    NSString *jcev2_p_4_o_sEncryptAlgorithm;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic, getter=sEncryptAlgorithm, setter=setSEncryptAlgorithm:) NSString *jcev2_p_4_o_sEncryptAlgorithm; // @synthesize jcev2_p_4_o_sEncryptAlgorithm;
@property(retain, nonatomic, getter=sFileContentMd5, setter=setSFileContentMd5:) NSString *jcev2_p_2_o_sFileContentMd5; // @synthesize jcev2_p_2_o_sFileContentMd5;
@property(retain, nonatomic, getter=sFileName, setter=setSFileName:) NSString *jcev2_p_0_r_sFileName; // @synthesize jcev2_p_0_r_sFileName;
@property(retain, nonatomic, getter=sFileUrl, setter=setSFileUrl:) NSString *jcev2_p_1_r_sFileUrl; // @synthesize jcev2_p_1_r_sFileUrl;
@property(retain, nonatomic, getter=sSignature, setter=setSSignature:) NSString *jcev2_p_3_o_sSignature; // @synthesize jcev2_p_3_o_sSignature;

@end

