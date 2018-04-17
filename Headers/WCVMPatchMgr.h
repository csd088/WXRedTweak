//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMResourceMgrExt.h"

@class NSString, WCVMPatchInfo;

@interface WCVMPatchMgr : NSObject <MMResourceMgrExt>
{
    _Bool m_isServiceInit;
    WCVMPatchInfo *_patchInfo;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)clearNewClientVersion;
- (void)dealloc;
- (void)exitOnEnteringBackground;
- (void)forceUpdatePatchCode:(unsigned int)arg1;
- (id)formatUUID:(id)arg1;
- (id)getPatchInfo;
- (id)getRealPath:(id)arg1;
- (id)getUUIDs;
- (id)init;
- (_Bool)isPatchMatch:(id)arg1;
- (void)loadAndExecutePatch;
- (unsigned int)newClientVersion;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)registerExtension;
- (void)reportIDKeyData:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)reportIDKeyListData:(const vector_ecc2264a *)arg1;
- (void)runPatch;
- (_Bool)savePatchData:(id)arg1;
- (void)setNewClientVersion:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

