//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface LBSContactInfoAssist : PluginContactInfoAssist <UIAlertViewDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)clearLBSBtnFooter;
- (void)clearLBSData;
- (void)dealloc;
- (id)getPluginIntro;
- (void)onGoToLBS;
- (void)reloadInstalledTableViewData;
- (void)uninstallPlugin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

