//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IHttpCacheExt.h"

@class NSMutableData, NSString, NSURLConnection, UIActivityIndicatorView, UIImageView;

@interface AsyncImageView : MMUIView <IHttpCacheExt>
{
    NSURLConnection *connection;
    NSMutableData *m_data;
    UIActivityIndicatorView *m_activityIndicator;
    UIImageView *m_imageView;
    long long m_contentMode;
    id <AsyncImageViewDelegate> _delegate;
    NSString *m_nsNotifyKey;
    NSString *m_url;
    _Bool m_showLoadingView;
}

- (void).cxx_destruct;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (void)adjustSubviewLayout;
- (void)cancelLoadImage;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <AsyncImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned int)arg2;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned int)arg2 showLoadingView:(_Bool)arg3;
- (void)loadImageFromURL:(id)arg1;
@property(nonatomic) long long m_contentMode; // @synthesize m_contentMode;
@property(retain, nonatomic) NSString *m_nsNotifyKey; // @synthesize m_nsNotifyKey;
@property(readonly, nonatomic) NSString *m_url;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

