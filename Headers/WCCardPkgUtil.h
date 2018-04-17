//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCardPkgUtil : NSObject
{
}

+ (id)CardData2WCUploadTask:(id)arg1 CardExt:(id)arg2;
+ (_Bool)GetWCCardPkgSyncInfoFileIsExist;
+ (_Bool)IsWCCardTransferAppServiceInPlane:(id)arg1;
+ (_Bool)ShouldShowWaterMark:(id)arg1;
+ (_Bool)bSupportDynamicCode:(id)arg1;
+ (_Bool)bSupportOfflineDynamicCode:(id)arg1;
+ (void)compressMemberCardBgImgIfNeeded:(id)arg1 imgUrl:(id)arg2;
+ (id)getBrandColor:(id)arg1;
+ (id)getCardDisplayAuxTitle:(id)arg1;
+ (id)getCardDisplaySubTitle:(id)arg1;
+ (id)getCardDisplayTitle:(id)arg1;
+ (id)getDefaultCardTypeName:(unsigned int)arg1;
+ (id)getDistance:(unsigned int)arg1;
+ (id)getHighlightedBgColor;
+ (id)getListViewBackgroundColor;
+ (id)getUserWCCardPkgRootDir;
+ (id)getViewBackgroundColor;
+ (id)getWCCardPkgConfigPath;
+ (id)getWCCardPkgDBPath;
+ (id)getWCCardPkgEntryTipsPath;
+ (id)getWCCardPkgMsgTipsPath;
+ (id)getWCCardPkgSyncBufferPath;
+ (id)insertSpaceChar:(id)arg1 hasTransline:(_Bool)arg2;
+ (_Bool)isEnoughCardInfoToShow:(id)arg1;
+ (_Bool)isFromAppSence:(unsigned int)arg1;
+ (_Bool)isFromFriendFeedScene:(unsigned int)arg1;
+ (_Bool)isFromFriendRecommendScene:(unsigned int)arg1;
+ (_Bool)isFromFriendSence:(unsigned int)arg1;
+ (_Bool)isFromMyselfSence:(unsigned int)arg1;
+ (_Bool)isFromOutAppSence:(unsigned int)arg1;
+ (_Bool)isKnownCardType:(unsigned int)arg1;
+ (_Bool)isKnownGiftCardAppMsgType:(unsigned int)arg1;
+ (_Bool)isShownInListCardStatus:(unsigned int)arg1;
+ (id)memberCardScaledBgImgURL:(id)arg1;
+ (void)mergeCardData:(id)arg1 cardItem:(id)arg2 toMessageWrap:(id)arg3;
+ (void)openMyPackageEntrance;
+ (void)upload11582Ope:(id)arg1 scence:(long long)arg2 cardType:(unsigned int)arg3 tpId:(id)arg4 cardId:(id)arg5 userName:(id)arg6;
+ (void)uploadEntryInfoById:(unsigned int)arg1 hasRedDot:(_Bool)arg2 hasNew:(_Bool)arg3 hasIcons:(_Bool)arg4 hasWords:(_Bool)arg5;
+ (void)uploadKVCardDisplayWithLog:(id)arg1;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned int)arg2 cardTpID:(id)arg3 cardID:(id)arg4;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned int)arg2 cardTpID:(id)arg3 cardID:(id)arg4 hasTip:(unsigned int)arg5 fromScene:(unsigned int)arg6 ChattingName:(id)arg7 HasAnnounce:(_Bool)arg8 svrRedDotTipsWording:(id)arg9;
+ (void)uploadKVPageNameForStayTime:(id)arg1 fromScene:(unsigned int)arg2 tpId:(id)arg3 cardId:(id)arg4 stayTime:(unsigned int)arg5;

@end

