//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QSMCalloutView;

@protocol QSMCalloutViewDelegate <NSObject>

@optional
- (double)calloutView:(QSMCalloutView *)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)calloutViewDidAppear:(QSMCalloutView *)arg1;
- (void)calloutViewDidDisappear:(QSMCalloutView *)arg1;
- (void)calloutViewWillAppear:(QSMCalloutView *)arg1;
- (void)calloutViewWillDisappear:(QSMCalloutView *)arg1;
@end
