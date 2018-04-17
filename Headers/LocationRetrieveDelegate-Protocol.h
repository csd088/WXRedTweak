//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation;

@protocol LocationRetrieveDelegate <NSObject>
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(CLLocation *)arg1;
- (void)onRetrieveLocationTimeOut:(CLLocation *)arg1;

@optional
- (void)onRetrieveHeadingError:(int)arg1;
- (void)onRetrieveHeadingOK:(CLHeading *)arg1;
@end

