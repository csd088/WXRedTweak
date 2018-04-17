//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UINavigationController;

@interface WAAppTansitionController : NSObject <UIViewControllerTransitioningDelegate>
{
    _Bool _isSimulatedNativeWeApp;
    UINavigationController *_owerNav;
    id <WAAppTansitionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <WAAppTansitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
@property(nonatomic) _Bool isSimulatedNativeWeApp; // @synthesize isSimulatedNativeWeApp=_isSimulatedNativeWeApp;
@property(nonatomic) __weak UINavigationController *owerNav; // @synthesize owerNav=_owerNav;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

