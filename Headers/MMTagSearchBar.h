//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUISearchBar.h"

@class UILabel;

@interface MMTagSearchBar : MMUISearchBar
{
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
- (id)getTextField;
- (void)internalInitTipsLabel;
- (void)layoutSubviews;
- (void)resetAttributes;
- (void)resetTextAttributes;
- (void)setCustomTipsLabelHidden:(_Bool)arg1;
- (void)setTagAttributeText:(id)arg1;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setTipsLabelText:(id)arg1;
- (void)textFieldAddSubView:(id)arg1;

@end

