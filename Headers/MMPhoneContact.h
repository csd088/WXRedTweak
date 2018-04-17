//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MMPhoneContact : NSObject
{
    NSString *m_nickname;
    NSString *m_nicknamePinYin;
    NSString *m_nicknamePinYinShort;
    NSMutableDictionary *m_phoneWithLabels;
    NSMutableDictionary *m_phoneToMd5Dic;
}

+ (id)polyPhones;
- (void).cxx_destruct;
- (void)InternalAddNewAddressBook:(id)arg1;
- (void)addAddressBook:(id)arg1;
- (void)addFirstAddressBook:(id)arg1;
- (id)getFamilyNamePinYinShort:(id)arg1;
- (id)initWithAddressBook:(id)arg1;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=m_nickname;
@property(readonly, nonatomic) NSString *nicknamePinYin; // @synthesize nicknamePinYin=m_nicknamePinYin;
@property(readonly, nonatomic) NSString *nicknamePinYinShort; // @synthesize nicknamePinYinShort=m_nicknamePinYinShort;
@property(readonly, nonatomic) NSDictionary *phoneToMd5Dic; // @synthesize phoneToMd5Dic=m_phoneToMd5Dic;
@property(readonly, nonatomic) NSDictionary *phoneWithLabels; // @synthesize phoneWithLabels=m_phoneWithLabels;

@end

