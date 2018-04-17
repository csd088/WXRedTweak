//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "IWNAudioMgrExt.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIImageView, UILabel, UIView;

@interface WNParaObjectVoiceView : WNParaObjectBaseView <IWNAudioMgrExt, UIAlertViewDelegate>
{
    UILabel *titleLabel;
    UIImageView *playingImageView;
    int viewType;
    UIView *_recordingPoint;
}

- (void).cxx_destruct;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (_Bool)canAlwaysClick;
- (void)dealloc;
- (id)getDuration:(int)arg1;
- (_Bool)ifLayoutViewByBase;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutView;
- (void)onClickObject;
- (void)showNormalView;
- (void)showPlayingView;
- (void)showRecordingView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

