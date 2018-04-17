//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, UIButton, UIImageView, UILabel, WCBaseKeyboardToolBar, WCPayInputTextInfoCtrlItem;

@interface WCPayVerifyPayCardViewController : WCPayBaseViewController <ILinkEventExt>
{
    UIButton *m_footerButton;
    WCPayInputTextInfoCtrlItem *m_textFieldItem;
    UIButton *m_sendVerifyCodeBtn;
    UILabel *m_sendVerifyCodeLabel;
    long long m_iCountDown;
    NSString *m_nsHeaderTip;
    NSString *m_nsHeaderTipForCustom;
    RichTextView *richTextView;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayVerifyPayCardViewControllerDelegate> m_delegate;
    _Bool bShowedModifyBtn;
    UIImageView *_m_iconView;
    UILabel *_m_iconDescLabel;
    UILabel *_m_contentLabel;
}

- (void).cxx_destruct;
- (void)OnModifyPhoneBtn;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)autoInputVerifyCode:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)initSendVerifyCodeButton;
@property(retain, nonatomic) UILabel *m_contentLabel; // @synthesize m_contentLabel=_m_contentLabel;
@property(retain, nonatomic) UILabel *m_iconDescLabel; // @synthesize m_iconDescLabel=_m_iconDescLabel;
@property(retain, nonatomic) UIImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
- (void)makeDigitalCertVerifyCell:(id)arg1;
- (void)makeInfoCell:(id)arg1;
- (_Bool)needShowDigitalVersionView;
- (void)onAlertModifyPhone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onOpenQA;
- (void)onSendVerifyCodeClicked:(id)arg1;
- (id)phoneNumber;
- (void)reloadTableView;
- (void)reloadTableWithDigitalLayout;
- (void)reloadTableWithVerifyLayout;
- (void)setDelegate:(id)arg1;
- (void)setFooterBtnTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setHeaderTipForCustom:(id)arg1;
- (void)showModifyPhoneBtn;
- (void)showNotAnyOneSMSTipBtn;
- (void)showNotSMSTipBtn;
- (void)startTimer;
- (void)stopTimer;
- (void)updateIconDescLabelWithSuperView:(id)arg1;
- (void)updateIconViewWithSuperView:(id)arg1;
- (void)updateSendVerifyCodeButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

