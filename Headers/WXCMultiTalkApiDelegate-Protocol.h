//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSMutableArray, NSString, WXCMultiTalkGroup, WXCPbWxBannerVoiceInfo;

@protocol WXCMultiTalkApiDelegate
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(WXCMultiTalkGroup *)arg2;
- (void)onCancelCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onEnterMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onErr:(int)arg1 groupUserName:(NSString *)arg2;
- (void)onInviteMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onMemberChange:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkBannerChange:(WXCPbWxBannerVoiceInfo *)arg1 WxGroupId:(NSString *)arg2;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkReady;
- (void)onMultiTalkRedirectOk;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onReawakeFriendOrSendPokerToFriendResult:(_Bool)arg1;
- (void)onReceiveMissMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onReceiveMutilTalkPokerMsg;
- (void)onReceiveReawakeOrPokerMsg:(WXCMultiTalkGroup *)arg1 extData:(NSData *)arg2;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(WXCMultiTalkGroup *)arg1 extArray:(NSMutableArray *)arg2;
- (void)onRespActiveGroupBriefInfoList:(NSArray *)arg1 isSuccess:(_Bool)arg2;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5;
@end

