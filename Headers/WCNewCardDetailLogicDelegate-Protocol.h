//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCCardAcceptCardInfo, WCCardData, WCShareCardData;

@protocol WCNewCardDetailLogicDelegate <NSObject>
- (void)onAcceptCardRet:(_Bool)arg1 withLoadingStr:(NSString *)arg2 withAcceptInfoJsonStr:(NSString *)arg3 isShareCard:(_Bool)arg4;
- (void)onCardHasBeenUsed:(WCCardData *)arg1;
- (void)onCurShareCardUpdate:(WCShareCardData *)arg1;
- (void)onGetCardDataFromSvrErr:(int)arg1;
- (void)onGetOfflineCodeError;
- (void)onGiftCardRet:(int)arg1 cardData:(WCCardData *)arg2;
- (void)onMarkShareCardError;
- (void)onMarkShareCardWithRet:(_Bool)arg1 isMark:(_Bool)arg2 andMarkUsr:(NSString *)arg3 markCardId:(NSString *)arg4 expireTime:(float)arg5 qrCodeWording:(NSString *)arg6;
- (void)onShareCardConsumedWithShareCardTpInfoList:(NSArray *)arg1 shareCardId:(NSString *)arg2 consumedBoxId:(NSString *)arg3 subscribeAppUserName:(NSString *)arg4 subscribeWording:(NSString *)arg5 retMsg:(NSString *)arg6;
- (void)onShareCardDataNotPrepare;
- (void)onShareCardDelete:(_Bool)arg1 withShareCard:(WCShareCardData *)arg2;
- (void)onShareCardReqRetSystemErr:(_Bool)arg1;
- (void)onShareCardReqRetWithCardInfo:(WCCardAcceptCardInfo *)arg1;
- (void)onShareCardSuccessWithCardData:(WCCardData *)arg1;
- (void)onViewControllerAllContentNeedReload;
- (void)onViewControllerNeedReload;
- (_Bool)shouldRefreshWithShareCard;
@end

