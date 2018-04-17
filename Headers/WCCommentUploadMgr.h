//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "INewSyncExt.h"
#import "PBMessageObserverDelegate.h"

@class FIFOFileQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface WCCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt>
{
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    NSMutableArray *m_failedCommentQueue;
    NSMutableArray *m_failedLikeQueue;
    int m_uploadingCount;
    id <WCCommentUploadMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addComment:(id)arg1;
- (void)addCommentToWCObjectCache:(id)arg1;
- (void)dealloc;
- (void)deleteFailedComment:(id)arg1;
- (_Bool)doComment:(id)arg1;
- (id)getFailedComments;
- (id)getFailedLike;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (id)init;
- (_Bool)loadFailedQueue;
@property(nonatomic) __weak id <WCCommentUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onNewSyncOplogOK;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (_Bool)saveFailedCommentQueue;
- (_Bool)saveFailedLikeQueue;
- (void)setTopTaskFailWithRet:(int)arg1;
- (void)tryStartNextTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

