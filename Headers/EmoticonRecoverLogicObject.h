//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonDownloadMd5ListCgiDelegate.h"
#import "EmoticonDownloadProxyDelegate.h"

@class EmoticonDownloadMd5ListCgi, EmoticonDownloadProxy, NSString;

@interface EmoticonRecoverLogicObject : MMObject <EmoticonDownloadMd5ListCgiDelegate, EmoticonDownloadProxyDelegate>
{
    _Bool _m_isActive;
    _Bool _m_hasStartLogic;
    unsigned int _m_needNotifyCount;
    EmoticonDownloadMd5ListCgi *_m_recoverCgi;
    EmoticonDownloadProxy *_m_downloadCgi;
    id <EmoticonRecoverLogicObjectDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)asyncAddEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)callFailedDelegate;
- (void)callOkDelegate;
- (_Bool)canStartCgiNow;
- (_Bool)clearLocalContentByMd5List:(id)arg1;
- (void)completeAndAddEmoticonWithMd5:(id)arg1 imageData:(id)arg2;
- (void)continueDownloadFromDownloadFinished:(_Bool)arg1;
- (void)downloadEmoticon;
- (void)goonLogic;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isActive;
@property(nonatomic) __weak id <EmoticonRecoverLogicObjectDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) EmoticonDownloadProxy *m_downloadCgi; // @synthesize m_downloadCgi=_m_downloadCgi;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(nonatomic) unsigned int m_needNotifyCount; // @synthesize m_needNotifyCount=_m_needNotifyCount;
@property(retain, nonatomic) EmoticonDownloadMd5ListCgi *m_recoverCgi; // @synthesize m_recoverCgi=_m_recoverCgi;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5ListFailed;
- (void)onEmoticonDownloadMd5ListOk:(id)arg1;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)startDownloadWithMd5List:(id)arg1;
- (void)startLogic;
- (void)startLogicWithCheckMd5Exist;
- (void)startLogicWithIncrementMd5List:(id)arg1;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

