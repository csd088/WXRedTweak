//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCActionSheet.h"

@class WCUIActionSheetLogic;

@interface WCUIActionSheet : WCActionSheet
{
    WCUIActionSheetLogic *logic;
    id m_userData;
}

- (void).cxx_destruct;
- (void)addBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addCancelBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addDestructiveButtonTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (id)init;
- (id)initWithTitle:(id)arg1;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;

@end

