//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray;

@interface WAHeaderStackDisplayView : MMUIView
{
    double _coverGap;
    NSMutableArray *_headerViews;
}

- (void).cxx_destruct;
@property(nonatomic) double coverGap; // @synthesize coverGap=_coverGap;
- (void)fillWithHeaderImageUrls:(id)arg1 animated:(_Bool)arg2;
- (void)fitHeaderViewCount:(unsigned long long)arg1;
- (double)getHeight;
- (double)getWidth;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
- (id)init;
- (void)orderHeaderViews;
- (void)resetHeaderViewsPosition;

@end

