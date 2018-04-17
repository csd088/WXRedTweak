//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WSWebViewLogic.h"

#import "YYWebViewDelegate.h"

@class NSString, NSURLRequest;

@interface WSResultViewLogic : WSWebViewLogic <YYWebViewDelegate>
{
    _Bool _hasLoadedForMainH5;
    _Bool _hasLoadedForDetailH5;
    NSString *_lastInputText;
    unsigned long long _lastInputTime;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasLoadMainPage;
- (id)initWithWebView:(id)arg1;
- (void)loadFile:(id)arg1;
- (void)loadUrlRequest:(id)arg1;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onJsEvaluateError:(id)arg1;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)onWebViewFailLoad:(id)arg1 withError:(id)arg2;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)prepareForDetailSearch:(id)arg1;
- (void)safeSendQueryChangedJSEvent:(id)arg1;
- (void)sendSearchActionSheetClick:(id)arg1;
- (void)sendSearchWAWidgetAttrChanged:(id)arg1;
- (void)sendSearchWAWidgetDataPush:(id)arg1;
- (void)sendSearchWAWidgetFail:(id)arg1;
- (void)sendSearchWAWidgetOpenApp:(id)arg1;
- (void)sendSearchWAWidgetShouldReloadData:(id)arg1;
- (void)updateLocalSuggestion:(id)arg1;
- (id)urlFromParamsBeforeLoadFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

