//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

@class MultiTalkMessageViewModel, UIImageView;

@interface MultiTalkMessageCellView : BaseMessageCellView
{
    UIImageView *m_backgroundImageView;
}

- (void).cxx_destruct;
- (id)getBkgImage;
- (void)layoutContentView;
- (void)onLongTouch;

// Remaining properties
@property(readonly, nonatomic) MultiTalkMessageViewModel *viewModel; // @dynamic viewModel;

@end

