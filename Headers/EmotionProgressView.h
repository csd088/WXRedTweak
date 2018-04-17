//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface EmotionProgressView : UIView
{
    double _progress;
    UIColor *_backColor;
    UIColor *_prsColor;
    UIView *_oneView;
    UIView *_twoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *oneView; // @synthesize oneView=_oneView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *prsColor; // @synthesize prsColor=_prsColor;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *twoView; // @synthesize twoView=_twoView;
- (void)setupFrame:(struct CGRect)arg1;
- (void)setupViews;

@end

