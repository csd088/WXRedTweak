//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QBBeaconLocalStrategy;

@interface QBBeaconAnalytics : NSObject
{
    _Bool analyticsEnabled;
    QBBeaconLocalStrategy *localStrategy;
    NSMutableArray *anaModules;
    int workType;
    int status;
    _Bool hasLocalDB;
    _Bool hasSyncServer;
    int serverSyncDelay;
    long long currentStatus;
}

+ (id)getDefualtAnalytics;
- (void).cxx_destruct;
- (id)aesKey;
- (id)aesKeyEncrypt;
@property(retain, nonatomic) NSMutableArray *anaModules; // @synthesize anaModules;
@property(nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled;
- (void)apnEventNotifyListen;
- (void)appEnterBackground;
- (void)appResumed;
- (void)asyncStrategyQuery;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus;
- (_Bool)enableAnlytics:(int)arg1 uin:(id)arg2 gatewayIP:(id)arg3;
- (_Bool)fetchCommonStrategyFormDB;
@property(nonatomic) _Bool hasLocalDB; // @synthesize hasLocalDB;
@property(nonatomic) _Bool hasSyncServer; // @synthesize hasSyncServer;
- (id)init;
- (_Bool)initLocalService;
- (void)initStrategyConfig;
- (_Bool)isBackground;
@property(retain) QBBeaconLocalStrategy *localStrategy; // @synthesize localStrategy;
- (void)reachabilityChanged:(id)arg1;
- (void)registObserver;
@property(nonatomic) int serverSyncDelay; // @synthesize serverSyncDelay;
- (id)sessionId;
- (void)setAesKey:(id)arg1;
- (void)setAesKeyEncrypt:(id)arg1;
- (void)setSessionId:(id)arg1;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) int workType; // @synthesize workType;

@end

