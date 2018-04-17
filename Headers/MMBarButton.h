//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface MMBarButton : UIButton
{
    long long iContentWidth;
    long long iContentHight;
    long long iOriginWidth;
    long long iOriginHeight;
    int eBarButtonStyle;
}

- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
@property(nonatomic) int eBarButtonStyle; // @synthesize eBarButtonStyle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) long long iContentHight; // @synthesize iContentHight;
@property(nonatomic) long long iContentWidth; // @synthesize iContentWidth;
@property(nonatomic) long long iOriginHeight; // @synthesize iOriginHeight;
@property(nonatomic) long long iOriginWidth; // @synthesize iOriginWidth;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;

@end

