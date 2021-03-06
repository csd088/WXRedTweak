//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage, UIImageView, UILabel;

@interface MMAssetSelectCheckButton : UIButton
{
    long long m_selectedIndex;
    UIImageView *m_notSelectImageView;
    UILabel *m_selectedIndexView;
    UIImage *m_normalImage;
    UIImage *m_selectedImage;
    struct CGRect _selectedIndexViewFrame;
}

- (void).cxx_destruct;
- (id)imageForState:(unsigned long long)arg1;
- (_Bool)isSelected;
@property(nonatomic) struct CGRect selectedIndexViewFrame; // @synthesize selectedIndexViewFrame=_selectedIndexViewFrame;
- (id)selectedView;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;

@end

