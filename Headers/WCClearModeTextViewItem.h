//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextViewItem.h"

@class UIButton;

@interface WCClearModeTextViewItem : WCBaseTextViewItem
{
    UIButton *m_clearButton;
}

- (void).cxx_destruct;
- (void)OnClear:(id)arg1;
- (void)initView:(struct CGRect)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)setClearButtonHidden:(_Bool)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

@end
