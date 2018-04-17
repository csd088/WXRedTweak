//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCTDatabase, WCTTable;

@interface MultiTalkSessionMgr : MMService <MMService>
{
    WCTDatabase *_dataBase;
    WCTTable *_contactTable;
    WCTTable *_messageTable;
    WCTTable *_sessionTable;
    WCTTable *_bannerTable;
}

- (void).cxx_destruct;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (_Bool)addNewMultiTalkChatroomMessageWithGroupData:(id)arg1 sessionItem:(id)arg2 msgLocalID:(unsigned int)arg3 isSelfCaller:(_Bool)arg4 sessionState:(unsigned int)arg5 inviteUsername:(id)arg6;
@property(retain, nonatomic) WCTTable *bannerTable; // @synthesize bannerTable=_bannerTable;
- (void)clearTables;
- (void)closeDB;
- (void)closeDBBeforeInit;
@property(retain, nonatomic) WCTTable *contactTable; // @synthesize contactTable=_contactTable;
- (_Bool)createNewMultiTalkBannerWithGroupData:(id)arg1;
- (unsigned int)createNewMultiTalkMessageDataWithGroupData:(id)arg1;
- (_Bool)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(_Bool)arg3 sessionState:(unsigned int)arg4;
- (_Bool)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(_Bool)arg3 sessionState:(unsigned int)arg4 inviteUsername:(id)arg5;
- (void)createTables;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (void)dealloc;
- (_Bool)deleteMultiTalkBannerItem:(id)arg1;
- (void)fillBannerItemUpdatePropertiesForBannerObject:(struct WCTPropertyList *)arg1;
- (void)fillContactItemUpdatePropertiesForContactObject:(struct WCTPropertyList *)arg1;
- (void)fillMessageItemUpdatePropertiesForMessageObject:(struct WCTPropertyList *)arg1;
- (void)fillSessionItemUpdatePropertiesForSessionObject:(struct WCTPropertyList *)arg1;
- (id)genContactItemWithGroupData:(id)arg1;
- (id)genMessageItemWithGroupData:(id)arg1;
- (id)genMsgJsonContentWithDisplayContentHeader:(id)arg1 subContent:(id)arg2 sessionItem:(id)arg3 msgLocalID:(unsigned int)arg4;
- (id)genSessionItemWithGroupData:(id)arg1;
- (id)getAllMultiTalkBannerInfos;
- (id)getHeaderMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)getMultiTalkBannerInfoByWxGroupId:(id)arg1;
- (id)getMultiTalkMsgDigestFromMessageContent:(id)arg1;
- (unsigned int)getSessionLastMessageIDWithGroupData:(id)arg1;
- (id)getSubMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)init;
- (void)initDatabase;
- (_Bool)insertNewRowInBannerTable:(id)arg1;
- (_Bool)insertNewRowInContactTable:(id)arg1;
- (_Bool)insertNewRowInMessageTable:(id)arg1;
- (_Bool)insertNewRowInSessionTable:(id)arg1;
- (_Bool)insertOrUpdateRowInBannerTable:(id)arg1;
- (_Bool)insertOrUpdateRowInContactTable:(id)arg1;
- (_Bool)insertOrUpdateRowInMessageTable:(id)arg1;
- (_Bool)insertOrUpdateRowInSessionTable:(id)arg1;
- (_Bool)insertOrUpdateSessionWithMultiTalkGroupData:(id)arg1;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (_Bool)isGroupDataValid:(id)arg1;
@property(retain, nonatomic) WCTTable *messageTable; // @synthesize messageTable=_messageTable;
@property(retain, nonatomic) WCTTable *sessionTable; // @synthesize sessionTable=_sessionTable;
- (_Bool)updateHasGenMessageWithMessageID:(unsigned int)arg1;
- (_Bool)updateMessageWithMessageID:(unsigned int)arg1 multiTalkGroup:(id)arg2 duration:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

