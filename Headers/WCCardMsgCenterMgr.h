//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt.h"

@class NSString, WCCardEntryTips, WCCardMsgTips, WCCardPkgDB;

@interface WCCardMsgCenterMgr : MMObject <IMsgExt>
{
    WCCardPkgDB *_wccardPkgDB;
    WCCardMsgTips *_wccardMsgTips;
    WCCardEntryTips *_wccardEntryTips;
    unsigned long long _lastMsgSvrId;
    unsigned long long _lastLastMsgSvrId;
    NSString *_nsLastConsumedBoxID;
    id <WCCardMsgCenterMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)addMsg:(id)arg1 XML:(id)arg2;
- (unsigned int)bubbleMessageCount;
- (id)bubbleMessageIconUrl;
- (id)bubbleMessageWording;
- (void)cleanBubbleMessage;
- (void)cleanEntryTipBySvr;
- (void)cleanRedDotBuffBySvr;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardMsgCenterMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (id)entryTipIconUrlBySvr;
- (id)entryTipWordingBySvr;
- (id)getFirstPageMsgList;
- (id)getRedDotBuffBySvr;
- (unsigned int)getUnreadMsgCount;
- (_Bool)hasEntryShowNewBySvr;
- (_Bool)hasEntryShowRedDotBySvr;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)isLastMsgNeedCheckForClear;
- (id)lastMsgCardIdForEntryTip;
- (void)loadCardTips;
- (_Bool)setAllMsgRead;
- (_Bool)setConsumedMsgRead:(id)arg1;

@end

