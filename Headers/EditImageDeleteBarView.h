//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UILabel, UIView;

@interface EditImageDeleteBarView : MMUIView
{
    UIView *_line;
    _Bool _isSelected;
    UIButton *_deleteBtn;
    UILabel *_tipLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *_deleteBtn; // @synthesize _deleteBtn;
@property(nonatomic) _Bool _isSelected; // @synthesize _isSelected;
@property(retain, nonatomic) UILabel *_tipLabel; // @synthesize _tipLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadButton;
- (void)setFrame:(struct CGRect)arg1;

@end

