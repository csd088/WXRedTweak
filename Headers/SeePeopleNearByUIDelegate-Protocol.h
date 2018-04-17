//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LbsContactInfoList, LbsRecommendPoiItem, LbsRoomResponse, MMLbsContactInfo, NSArray, NSString;

@protocol SeePeopleNearByUIDelegate <NSObject>

@optional
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)onGetCertificationFinish;
- (void)onGetLBSRecommendPoiList:(NSArray *)arg1;
- (void)onJoinChatRoomFailed;
- (void)onJoinChatRoomFinishedWithResult:(LbsRoomResponse *)arg1;
- (void)onJoinChatRoomStart;
- (void)onSelectedWithLbsContactInfo:(MMLbsContactInfo *)arg1;
- (void)onSelectedWithLbsPoiItem:(LbsRecommendPoiItem *)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(LbsContactInfoList *)arg1;
- (void)showMessage:(NSString *)arg1;
@end

