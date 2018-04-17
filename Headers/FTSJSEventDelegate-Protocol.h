//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, MMUIViewController, NSDictionary, NSMutableDictionary, NSString, UIView<YYWebViewInterface>;

@protocol FTSJSEventDelegate <NSObject>

@optional
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onBeginOnlineSearchContact:(NSString *)arg1;
- (void)onCancelSearchActionSheet:(NSDictionary *)arg1;
- (void)onClearHistoryOperation:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onDeleteSearchHistory:(NSDictionary *)arg1;
- (void)onDoSearchOpLog:(NSDictionary *)arg1;
- (void)onFailReceiveJson;
- (MMUIViewController *)onGetBaseViewController;
- (NSMutableDictionary *)onGetSearchHistory:(NSDictionary *)arg1;
- (void)onGoToRecVideoList:(NSDictionary *)arg1;
- (void)onImagePreview:(NSDictionary *)arg1;
- (void)onInsertHistoryOperation:(NSDictionary *)arg1;
- (NSString *)onInsertVideoPlayerWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onJsbridgeReady:(id <YYWebViewInterface>)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onLaunchDetailPageForWeApp:(NSDictionary *)arg1;
- (void)onLaunchPage:(NSString *)arg1 withParams:(NSDictionary *)arg2;
- (void)onMakePhoneCall:(NSDictionary *)arg1;
- (void)onOpenADCanvasPage:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)onOpenBrandContact:(CContact *)arg1 withParams:(NSDictionary *)arg2;
- (void)onOpenContact:(CContact *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onOpenEmotionPage:(NSDictionary *)arg1;
- (void)onOpenLocation:(NSDictionary *)arg1;
- (void)onOpenMsgSession:(CContact *)arg1;
- (void)onOpenSearchCanvas:(NSDictionary *)arg1;
- (void)onOpenSnsDetail:(NSDictionary *)arg1;
- (void)onOpenVisitHistory:(NSDictionary *)arg1;
- (void)onOpenWAWidgetLogViewWithParams:(NSDictionary *)arg1;
- (void)onOpenWeAppPage:(NSDictionary *)arg1;
- (void)onOperateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onReceiveJson:(NSDictionary *)arg1;
- (void)onRemoveVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onRemoveWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onSearchHotWord:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onSearchRecmdDataFail:(NSString *)arg1;
- (NSString *)onShowSearchActionSheet:(NSDictionary *)arg1;
- (void)onSwitchSearchContext:(NSDictionary *)arg1;
- (void)onTapWAWidgetWithParams:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(UIView<YYWebViewInterface> *)arg1;
- (void)onUpdateReddotTimeStamps:(NSDictionary *)arg1;
- (void)onUpdateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onUpdateWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onViewTypeChange:(NSDictionary *)arg1;
- (void)onWebViewTerminal:(UIView<YYWebViewInterface> *)arg1;
- (void)onWidgetClearCrashProtectCount:(NSDictionary *)arg1;
- (_Bool)viewControllerHasNavController;
@end

