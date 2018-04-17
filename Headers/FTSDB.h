//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WCTDatabase, WCTTable;

@interface FTSDB : NSObject
{
    NSString *_tokenizerName;
    WCTDatabase *m_db;
    WCTTable *m_tableFav;
    NSDictionary *m_dicTableMessage;
    WCTTable *m_tableMsgUserNameID;
    id <FTSDBDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)CreateMessageTable;
- (unsigned int)MsgTableCount;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (_Bool)createAllMsgTable;
- (_Bool)createFavTable;
- (_Bool)createUserNameIdTable;
- (void)dealloc;
@property(nonatomic) __weak id <FTSDBDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteAllRowsInFavTable;
- (_Bool)deleteInvalidRowsInChatTable:(id)arg1 limit:(int)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)deleteRowInFavTable:(unsigned int)arg1;
- (_Bool)deleteRowInUserNameIDTable:(unsigned int)arg1;
- (_Bool)deleteRowsInFavTable:(id)arg1;
- (id)getUserNameIdWithLimit:(unsigned int)arg1 where:(const struct WCTExpr *)arg2;
- (id)getValidIndexItemByUserName:(id)arg1;
- (id)getValidIndexItemByUserNameId:(unsigned int)arg1;
- (id)init;
- (_Bool)initDB;
- (_Bool)insertNewRowInUserNameIDTable:(id)arg1 lastMsg:(id)arg2;
- (_Bool)insertRowInFavTable:(id)arg1;
- (_Bool)insertRowsInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)insertRowsInFavTable:(id)arg1;
- (_Bool)isFTSDB:(unsigned int)arg1;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
@property(retain, nonatomic) NSDictionary *m_dicTableMessage; // @synthesize m_dicTableMessage;
@property(retain, nonatomic) WCTTable *m_tableFav; // @synthesize m_tableFav;
@property(retain, nonatomic) WCTTable *m_tableMsgUserNameID; // @synthesize m_tableMsgUserNameID;
- (id)msgTableNameWithIndex:(unsigned int)arg1;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (id)queryMsgItemOmitMsg:(id)arg1 tableIndex:(unsigned int)arg2 limitUsrIds:(id)arg3;
- (id)queryMsgItemOmitMsg:(id)arg1 tableIndex:(unsigned int)arg2 limitUsrIds:(id)arg3 limit:(unsigned int)arg4 maxTime:(unsigned int)arg5;
- (id)queryTextInFavTable:(id)arg1;
- (id)queryTextInFavTable:(id)arg1 limit:(int)arg2 searchAll:(id *)arg3;
- (void)recoverDB;
- (_Bool)reloadDB;
- (unsigned int)tableIdFromUserName:(id)arg1;
@property(readonly, nonatomic) NSString *tokenizerName; // @synthesize tokenizerName=_tokenizerName;
- (_Bool)updateRowInFavTable:(id)arg1;
- (_Bool)updateRowsInFavTable:(id)arg1;
- (_Bool)updateUserNameInvalid:(unsigned int)arg1;
- (_Bool)updateUserNextCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (unsigned int)validMsgTableIndex:(unsigned int)arg1;

@end

