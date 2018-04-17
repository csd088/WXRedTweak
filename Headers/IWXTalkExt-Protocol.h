//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSMutableArray, NSString, WXCPbVoiceGroupInfo, WXCPbWxBannerVoiceInfo;

@protocol IWXTalkExt

@optional
- (void)OnBeginStartDevice;
- (void)OnCreateTalkModeOKWithGroupId:(NSString *)arg1;
- (void)OnDataConnectOK;
- (void)OnDeviceStartOK;
- (void)OnEnterTalkModeOK:(NSString *)arg1;
- (void)OnError:(NSString *)arg1 errorType:(int)arg2 errorNo:(int)arg3 groupUserName:(NSString *)arg4;
- (void)OnGroupInfoChange:(WXCPbVoiceGroupInfo *)arg1;
- (void)OnInviteWXTalkModeResult:(_Bool)arg1 groupId:(NSString *)arg2;
- (void)OnModifyGroupInfoResult:(_Bool)arg1 groupId:(NSString *)arg2;
- (void)OnMuteStateChange:(_Bool)arg1;
- (void)OnReceiveOtherMemberTalkData;
- (void)OnRoomMemberChange:(NSString *)arg1;
- (void)OnSelfAndOtherEntered;
- (void)OnSpeakerState;
- (void)OnSpeakerStateChange:(_Bool)arg1;
- (void)OnSysCallNotifyHold:(int)arg1 andHoldMember:(unsigned int)arg2;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onCancelCreateMultiTalk:(NSString *)arg1;
- (void)onInviteMultiTalk:(NSString *)arg1;
- (void)onMemberStatueChangeRingtonPlayFininsh;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkBannerChange:(WXCPbWxBannerVoiceInfo *)arg1 WxGroupId:(NSString *)arg2;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onReceiveMissMultiTalk:(NSString *)arg1;
- (void)onReceiveReawakeOrPokerMessage:(NSString *)arg1 extData:(NSData *)arg2;
- (void)onReceiveSubscribedVideoChangeMessage:(int)arg1;
- (void)onReceiveVideoMemberChangeMessage:(NSString *)arg1 extArray:(NSMutableArray *)arg2;
- (void)onRespActiveGroupInfoItemList:(NSArray *)arg1 isSuccess:(_Bool)arg2;
- (void)onRespPokerOrResumeFriend:(NSString *)arg1 isSuccess:(_Bool)arg2;
- (void)onSingleToMutilTalkConfictChangeToEnterFriendGroupNotify;
- (void)onTalkStatusChange:(NSArray *)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5;
@end

