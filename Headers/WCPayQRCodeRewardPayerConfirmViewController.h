//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITextViewDelegate.h"

@class MMTextView, NSString;

@interface WCPayQRCodeRewardPayerConfirmViewController : WCPayBaseViewController <UITextViewDelegate>
{
    id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> _delegate;
    MMTextView *_payerCommentTextView;
}

- (void).cxx_destruct;
- (void)confirmBtnClick;
- (void)dealloc;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)leftBarButtonClick;
@property(retain, nonatomic) MMTextView *payerCommentTextView; // @synthesize payerCommentTextView=_payerCommentTextView;
- (void)setupContentView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

