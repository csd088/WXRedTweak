//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VOIPStatHelper : NSObject
{
}

+ (id)Gen11123Log:(id)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)Gen12805Log:(id)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)GenAVQualityExtLog:(struct tagAVQualityReportInfo *)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)GenAVQualityLog:(struct tagAVQualityReportInfo *)arg1 extAVReport:(struct NewAVExtReport_t *)arg2 androidReport:(struct AndroidReport_t *)arg3;
+ (id)GenDialLog:(struct DialReport_t *)arg1;
+ (id)GenDirectLog:(struct tagDirectReport *)arg1;
+ (id)GenExtLog:(struct ExtReport_t *)arg1 withQual:(struct tagAVQualityReportInfo)arg2;
+ (id)GenNewDialLog:(struct NewDialReport_t *)arg1 androidReport:(struct AndroidReport_t *)arg2;
+ (id)GenQualityLog:(struct tagAVQualityReportInfo *)arg1;
+ (id)GenRelayLog:(struct tagRelayReport *)arg1;
+ (id)GetChannelLog:(struct tagDirectReport *)arg1 withRelayReport:(struct tagRelayReport *)arg2 withDirectReportV2:(struct NewDirectReport *)arg3 withRelayReportV2:(struct NewRelayReport *)arg4 withDialReport:(struct DialReport_t *)arg5;
+ (id)GetChannelTcpLog:(struct RelayTcpReport *)arg1 tcpSwitchCnt:(unsigned int)arg2 withDialReport:(struct DialReport_t *)arg3 withRelayReportV2:(struct NewRelayReport *)arg4 withDirectReportV2:(struct NewDirectReport *)arg5;

@end

