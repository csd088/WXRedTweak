//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "AsyncImageViewDelegate.h"
#import "RichTextLayoutDelegate.h"

@class AsyncImageView, CAGradientLayer, CALayer, NSMutableArray, NSString, RichTextView, UIImageView;

@interface ReaderItemView : UIButton <RichTextLayoutDelegate, AsyncImageViewDelegate>
{
    int type;
    unsigned int itemShowType;
    unsigned int m_uiReaderIndex;
    _Bool m_bHasBottomBtn;
    _Bool m_isSelected;
    RichTextView *m_titleView;
    NSString *m_nsTitle;
    NSString *m_nsCover;
    NSString *m_nsDigest;
    unsigned int m_uiDelFlag;
    unsigned int m_itemShowType;
    struct CGSize m_titleSize;
    struct CGSize m_digestSize;
    NSMutableArray *m_titleStyles;
    NSMutableArray *m_digestStyles;
    UIImageView *m_headImageBk;
    CALayer *m_coverHightlightLayer;
    AsyncImageView *m_coverImage;
    id <ReaderItemViewDelegate> m_delegate;
    RichTextView *m_digestView;
    CAGradientLayer *m_gradientLayer;
    CALayer *m_coverMaskLayer;
}

- (void).cxx_destruct;
- (void)NotifyItemClicked;
- (double)appendNodeViewHeightIfIndex;
- (id)getAsyncImageWithFrame:(struct CGRect)arg1;
- (id)getHighlightedImage;
- (void)handleLongPressEx:(id)arg1;
- (id)init;
- (id)itemLabelWithFont:(double)arg1 size:(struct CGSize)arg2;
@property(nonatomic) _Bool m_bHasBottomBtn; // @synthesize m_bHasBottomBtn;
@property(nonatomic) __weak id <ReaderItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_digestSize; // @synthesize m_digestSize;
@property(retain, nonatomic) NSMutableArray *m_digestStyles; // @synthesize m_digestStyles;
@property(retain, nonatomic) UIImageView *m_headImageBk; // @synthesize m_headImageBk;
@property(nonatomic) unsigned int m_itemShowType; // @synthesize m_itemShowType;
@property(retain, nonatomic) NSString *m_nsCover; // @synthesize m_nsCover;
@property(retain, nonatomic) NSString *m_nsDigest; // @synthesize m_nsDigest;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) struct CGSize m_titleSize; // @synthesize m_titleSize;
@property(retain, nonatomic) NSMutableArray *m_titleStyles; // @synthesize m_titleStyles;
@property(nonatomic) unsigned int m_uiDelFlag; // @synthesize m_uiDelFlag;
@property(nonatomic) unsigned int m_uiReaderIndex; // @synthesize m_uiReaderIndex;
- (void)normalView;
- (void)onAsyncLoadImageOK:(id)arg1;
- (void)onBeginTouch;
- (void)onClicked;
- (void)onTouchRepeat;
- (id)richTextWithFont:(id)arg1 width:(double)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) int type; // @synthesize type;
- (void)startInitView;
- (id)timeText:(unsigned long long)arg1;
- (void)topView;
- (void)updateBkgImage:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

