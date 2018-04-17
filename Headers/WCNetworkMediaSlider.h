//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class UIColor;

@interface WCNetworkMediaSlider : UISlider
{
    double m_cacheTime;
    _Bool _showCacheProgress;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    UIColor *_cacheColor;
    double _sliderHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *cacheColor; // @synthesize cacheColor=_cacheColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
- (id)getBackgroundImage;
- (id)getFrontgroundImage;
- (id)init;
- (void)initView;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)resizeCacheProgress;
- (void)setCacheProgress:(double)arg1;
@property(nonatomic) _Bool showCacheProgress; // @synthesize showCacheProgress=_showCacheProgress;
@property(nonatomic) double sliderHeight; // @synthesize sliderHeight=_sliderHeight;

@end

