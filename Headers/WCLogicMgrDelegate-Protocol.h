//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, WCDataItem;

@protocol WCLogicMgrDelegate

@optional
- (void)onAdvertiseItemDeleted:(NSString *)arg1;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(NSString *)arg2 dataItemID:(NSString *)arg3;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onDataItemExposeFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onSetWCMessageNotifyFinished:(int)arg1 dataItemID:(NSString *)arg2 opFlag:(_Bool)arg3;
- (void)onUpdateDataItemDetailFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
@end

