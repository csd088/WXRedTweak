//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YYWKWebView.h"

#import "WebSearchInterface.h"
#import "YYWebViewInterface.h"

@class NSMutableArray, NSString, NSURLRequest, UIScrollView;

@interface WKWebSearchView : YYWKWebView <YYWebViewInterface, WebSearchInterface>
{
    _Bool _isSnsContactPage;
    int _context;
    unsigned long long _bizType;
    NSString *_keyword;
    NSMutableArray *_keywordStack;
    NSString *_navTitle;
    NSString *_subSessionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) _Bool isSnsContactPage; // @synthesize isSnsContactPage=_isSnsContactPage;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *keywordStack; // @synthesize keywordStack=_keywordStack;
- (void)loadRequest:(id)arg1;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;

// Remaining properties
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool scalesPageToFit;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;

@end

