//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayT2BCHistoryItem;

@protocol WCPayT2BCHistoryViewControllerDelegate <NSObject>
- (void)OnWCPayT2BCHistoryViewControllerBack;
- (void)OnWCPayT2BCHistoryViewControllerClickDetail:(WCPayT2BCHistoryItem *)arg1;
- (void)OnWCPayT2BCHistoryViewControllerDeleteHistoryItem:(WCPayT2BCHistoryItem *)arg1;
- (void)OnWCPayT2BCHistoryViewControllerLoadMore:(unsigned int)arg1;
@end

