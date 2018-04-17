//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class MMTimer, NSMutableData, NSString, NSURLConnection;

@interface MMResourceDownloader : NSObject <NSURLConnectionDataDelegate>
{
    NSString *_resUrl;
    double _startReceiveResponseTime;
    double _didReceivedResponseTime;
    double _lastReceiveDataTime;
    MMTimer *_timer;
    NSURLConnection *_connection;
    NSMutableData *_receiveBytes;
    unsigned long long _downloadStatus;
    id <MMResourceDownloadDelegate> _downloadDelegate;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <MMResourceDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (id)initWithUrl:(id)arg1;
- (void)onEndDownloading:(long long)arg1;
- (void)onTimeoutCheck:(id)arg1;
- (void)startup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

