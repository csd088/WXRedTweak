//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt.h"
#import "FavoritesUploaderDelegate.h"
#import "IClearDataMgrExt.h"

@class FavoritesCDNInfoDB, FavoritesItemDB, FavoritesUploader, NSMutableArray, NSString;

@interface FavoritesUploadMgr : MMObject <IClearDataMgrExt, CNetworkStatusExt, FavoritesUploaderDelegate>
{
    NSMutableArray *_uploadingQueue;
    NSMutableArray *_failedQueue;
    NSMutableArray *_activeQueue;
    _Bool _isUploading;
    FavoritesItemDB *_favItemDB;
    FavoritesCDNInfoDB *_favCdnDB;
    FavoritesUploader *_favUploader;
    _Bool _isCountingMd5;
    id <FavoritesUploadMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)CountItemDataMD5:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)TryStartUpload;
- (_Bool)addUploadItem:(id)arg1;
- (_Bool)addUploadItem:(id)arg1 delayUpload:(_Bool)arg2;
- (void)changeToNoWifi;
- (void)checkAndTryStartUpload;
- (void)dealloc;
- (_Bool)delUploadItem:(id)arg1;
@property(nonatomic) __weak id <FavoritesUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalIdIgnoringStatus:(unsigned int)arg1;
- (void)doCopyFile:(id)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (id)getUploadFailedItemList;
- (id)getUploadItemList;
- (id)getUploadPausedItemList;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)loadFailedQueue;
- (_Bool)loadUploadingQueue;
- (void)onCopyFileFinished:(id)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onUploadFail:(id)arg1 ErrCode:(int)arg2;
- (void)onUploadFavItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFinished:(id)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (_Bool)pauseUploadFavoritesItem:(unsigned int)arg1;
- (void)removeItemByLocalId:(unsigned int)arg1 inQueue:(id)arg2;
- (_Bool)restartAllUploadFailedItems;
- (void)saveMd5ToCdnInfoTable:(id)arg1;
- (void)setItemUploadFail:(id)arg1 ErrCode:(int)arg2;
- (void)startCountMd5;
- (_Bool)startUploadItem:(id)arg1 IsPriority:(_Bool)arg2;
- (void)stopUploadAllFavItem;
- (void)tryStartUpload;
- (_Bool)updateCdnInfo:(id)arg1;
- (_Bool)updateCdnInfo:(id)arg1 MD5:(id)arg2 Head256Md5:(id)arg3 Type:(int)arg4;
- (_Bool)updateCdnInfoByExistCheckCDNItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

