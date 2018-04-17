//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTimelineCellABTestBaseTip.h"

#import "ILinkEventExt.h"
#import "RichTextLayoutDelegate.h"

@class NSMutableArray, NSString, UIImageView;

@interface WCTimelineCellABTestActionListTip : WCTimelineCellABTestBaseTip <ILinkEventExt, RichTextLayoutDelegate>
{
    NSMutableArray *arrRichTextActionView;
    NSMutableArray *arrActionItemView;
    UIImageView *backgroundImageView;
}

+ (double)heightForTipView:(id)arg1;
- (void).cxx_destruct;
- (void)createNormalCellView:(id)arg1 paddingTop:(double)arg2 addLine:(_Bool)arg3;
- (void)createRevokeCellView:(id)arg1 paddingTop:(double)arg2 addLine:(_Bool)arg3;
- (void)initView;
- (void)onActionJump:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)resetStatus;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

