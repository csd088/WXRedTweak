//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavRecordBaseNodeView.h"

@class MMUIImageView, NSString, UILabel;

@interface FavRecordLeftThumbRightLabelNodeView : FavRecordBaseNodeView
{
    MMUIImageView *m_thumbView;
    NSString *m_titleText;
    NSString *m_detailText;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
}

- (void).cxx_destruct;
- (void)addContentSubView;
- (void)initDetailLabel;
- (void)onClick;
- (void)onLongTouch;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)updateBkgImage:(_Bool)arg1;

@end

