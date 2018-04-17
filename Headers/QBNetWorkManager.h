//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QBReachability;

@interface QBNetWorkManager : NSObject
{
    QBReachability *_internetReach;
    int _oldAPN;
    _Bool _systemProxySet;
    int _apnSubtype;
    int _curAPN;
    long long _mccCode;
    long long _mncCode;
    NSString *_mccmncStr;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *apnString;
@property(nonatomic) int apnSubtype; // @synthesize apnSubtype=_apnSubtype;
- (void)checkAPNType;
- (void)checkNetworkStatus;
@property(readonly, nonatomic) int curAPN; // @synthesize curAPN=_curAPN;
- (void)getApnSubtype:(id)arg1;
- (id)init;
- (id)internetReach;
@property(readonly, nonatomic) _Bool isAPNChanged;
@property(nonatomic) long long mccCode; // @synthesize mccCode=_mccCode;
@property(retain, nonatomic) NSString *mccmncStr; // @synthesize mccmncStr=_mccmncStr;
@property(nonatomic) long long mncCode; // @synthesize mncCode=_mncCode;
- (void)mttNetworkReachabilityChanged:(id)arg1;
- (long long)networkStatus;
- (void)notifyOtherModules;
@property _Bool systemProxySet; // @synthesize systemProxySet=_systemProxySet;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (void)updateAPN:(int)arg1;

@end

