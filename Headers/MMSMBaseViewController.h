//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MMLoadingView, UIScrollView;

@interface MMSMBaseViewController : UIViewController
{
    MMLoadingView *m_loadingViewX;
    UIScrollView *m_contentView;
    unsigned long long m_scene;
}

- (void).cxx_destruct;
- (double)getContentViewY;
- (id)init;
- (void)onBackBtnDone:(id)arg1;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=m_scene;
- (void)startLoadingBlocked;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)stopLoading;
- (void)viewDidLoad;

@end

