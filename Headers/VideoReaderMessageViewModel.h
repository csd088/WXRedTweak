//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

@class NSString;

@interface VideoReaderMessageViewModel : ReaderMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (struct CGSize)calculateTitleViewSize;
- (id)cellViewClassName;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (double)messageNodeViewHeight;
@property(readonly, nonatomic) NSString *timeText;

@end

