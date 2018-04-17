//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class WCCardLayoutStorage;

@interface WCCardLayoutMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardLayoutStorage *_layoutStg;
    unsigned int _waitLocationTime;
    id <WCCardLayoutMgrDelegate> _delegate;
    _Bool _bGettingLayout;
}

- (void).cxx_destruct;
- (id)GetPathOfWCCardLayoutStorage;
- (_Bool)IsLayoutListChanged:(id)arg1 LocalList:(id)arg2;
- (_Bool)IsNeedNotifyChangedExipringList:(id)arg1 MemberCardList:(id)arg2 NearbyList:(id)arg3 RecentList:(id)arg4 LabelList:(id)arg5 FirstList:(id)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearLayoutRedDot;
- (void)dealloc;
- (void)getCardLayoutByCGI:(id)arg1 Scene:(unsigned int)arg2;
- (id)getEntrySubTitle;
- (id)getExpiringList;
- (id)getFirstList;
- (id)getLabelList;
- (id)getLayoutBuff;
- (id)getMemberCardList;
- (id)getNearByList;
- (id)getRecentList;
- (unsigned int)getTopScene;
- (_Bool)hasLayoutRedDot;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isGettingLayout;
- (id)layoutTip;
- (void)loadLayoutStg;
- (void)saveLayoutStg;

@end

