//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IUiUtilExt.h"

@class CContact, NSArray, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface WAAppActionSheet : MMObject <IUiUtilExt>
{
    CContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    NSString *m_destructiveTitle;
    UIImage *m_fakeViewImage;
    _Bool _isUseWeAppModule;
    id <WAAppActionSheetDelegate> m_delegate;
    long long _menuPrivacyState;
    UIView *_interateView;
    UIView *_containerView;
    UIVisualEffectView *_blurView;
    NSMutableArray *_btnArray;
    UIButton *_destructiveBtn;
    UIButton *_cancelBtn;
    UIImageView *_maskView;
    UILabel *_headerTitleLabel;
    UIView *_parentView;
}

+ (double)getActionSheetWidth;
- (void).cxx_destruct;
- (void)_releaseViews;
- (void)addLongPressGestureForHeaderButton:(id)arg1;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
@property(retain, nonatomic) UIButton *destructiveBtn; // @synthesize destructiveBtn=_destructiveBtn;
- (void)dismissWithAnimation;
- (id)genDestructiveBtn;
- (id)genNormalBtn:(id)arg1;
- (id)genPrivacyStateView;
- (id)genWeAppInfoBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (id)getHeaderButtonTitle:(id)arg1;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
- (void)initContainerView;
- (void)initInterateView;
- (void)initMaskView;
- (id)initWithUsrName:(id)arg1 appType:(unsigned long long)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
- (_Bool)isSupportVisualEffect;
@property(nonatomic) _Bool isUseWeAppModule; // @synthesize isUseWeAppModule=_isUseWeAppModule;
- (_Bool)isVisible;
@property(nonatomic) __weak id <WAAppActionSheetDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long menuPrivacyState; // @synthesize menuPrivacyState=_menuPrivacyState;
- (void)onButtonClicked:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)onDestructiveButtonClick:(id)arg1;
- (void)onHeaerButtonClicked:(id)arg1;
- (void)onLongPressHeaderButtonLabel:(id)arg1;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (void)setDebugTitles:(id)arg1;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

