//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewControllerDelegate.h"

@class UIScrollView;

@protocol MMRichTextCopyEventDelegate <MMUIViewControllerDelegate>
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (struct CGRect)getMsgVisibleFrame;
- (UIScrollView *)getScrollView;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)onDoubleClick;
- (void)onRichTextViewExit;
- (void)onTextMessageCellMenuClick:(SEL)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)willShowMenuController:(id)arg1;
@end
