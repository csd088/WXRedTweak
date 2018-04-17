//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardMultiMenuCollectionViewCell.h"

#import "MMWebImageViewDelegate.h"

@class CAGradientLayer, MMWebImageView, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface WCCardHomeMemberCardCell : WCCardMultiMenuCollectionViewCell <MMWebImageViewDelegate>
{
    unsigned int _layoutType;
    NSString *_backImageURL;
    UIColor *_backColor;
    NSString *_iconURL;
    NSString *_topText;
    NSString *_bottomText;
    NSString *_tagText;
    MMWebImageView *_backImageView;
    UIImageView *_backDefaulImageView;
    UIImage *_defaulDefaulImage;
    MMWebImageView *_iconImageView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    UIButton *_tagButton;
    UIView *_highlightView;
    CAGradientLayer *_gradientLayer;
    UIView *_iconBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
@property(retain, nonatomic) UIImageView *backDefaulImageView; // @synthesize backDefaulImageView=_backDefaulImageView;
@property(retain, nonatomic) NSString *backImageURL; // @synthesize backImageURL=_backImageURL;
@property(retain, nonatomic) MMWebImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
- (void)confiUI;
@property(retain, nonatomic) UIImage *defaulDefaulImage; // @synthesize defaulDefaulImage=_defaulDefaulImage;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *iconBgView; // @synthesize iconBgView=_iconBgView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned int layoutType; // @synthesize layoutType=_layoutType;
- (void)onLoadImageOK:(id)arg1;
- (void)prepareForReuse;
- (id)scaleToBottom:(id)arg1 scale:(double)arg2;
- (id)scaleToTop:(id)arg1 scale:(double)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(retain, nonatomic) UIButton *tagButton; // @synthesize tagButton=_tagButton;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) NSString *topText; // @synthesize topText=_topText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

