//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCBeautifyFilter.h"

@class TXCSoftSmoothFilter, UIImage;

@interface TXCSoftBeautifyFilter : TXCBeautifyFilter
{
    double smoothDegree;
    double whiteDegree;
    double mixDegree;
    double ruddyDegree;
    UIImage *filterImagae;
    TXCSoftSmoothFilter *smoothFilter;
}

- (void).cxx_destruct;
- (id)init;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setBeautyLevel:(float)arg1;
- (void)setRuddinessLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;

@end

