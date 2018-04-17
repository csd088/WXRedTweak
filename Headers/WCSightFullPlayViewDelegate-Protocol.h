//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCMediaItem, WCSightFullPlayView;

@protocol WCSightFullPlayViewDelegate <NSObject>

@optional
- (NSString *)getDetailButtonTitle;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickFullSightView:(WCSightFullPlayView *)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragToClose;
- (void)onFullSightDownloadFinished:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onLongPressedFullSightView:(WCSightFullPlayView *)arg1;
- (_Bool)shouldShowDetailButton;
@end

