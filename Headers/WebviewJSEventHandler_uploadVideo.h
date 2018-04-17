//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWebviewResourceManagerExt.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString;

@interface WebviewJSEventHandler_uploadVideo : WebviewJSEventHandlerBase <IWebviewResourceManagerExt, UIAlertViewDelegate>
{
    _Bool _isShowProgressTips;
    NSMutableArray *arrLocalIDs;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)doDelayCancel;
- (void)doUploadVideo;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;
- (void)onLocalResourceUploadFinished:(id)arg1 SvrId:(id)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

