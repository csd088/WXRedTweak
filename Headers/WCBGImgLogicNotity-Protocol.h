//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MyWCDB, NSArray, WCMediaItem, WCUploadTask;

@protocol WCBGImgLogicNotity

@optional
- (void)NotifyBackgroundChanged;
- (void)NotifyToDownloadMedia:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)NotifyToUploadWithTask:(WCUploadTask *)arg1;
- (MyWCDB *)database;
- (NSArray *)getUploadingDataItems;
@end

