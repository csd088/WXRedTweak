//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

#import "RichTextLayoutDelegate.h"

@class NSString, RichTextView, TextReaderMessageViewModel, UIImageView, UILabel, UIView;

@interface TextReaderMessageCellView : ReaderMessageCellView <RichTextLayoutDelegate>
{
    UIImageView *m_bgImageView;
    RichTextView *m_titleView;
    UIView *m_oLine;
    UILabel *m_realAll;
    UIImageView *m_arrowImageView;
}

- (void).cxx_destruct;
- (void)layoutContentView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TextReaderMessageViewModel *viewModel;

@end

