//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol SelectAttachmentViewDataSource <NSObject>

@optional
- (NSString *)appIDAtIndex:(unsigned int)arg1;
- (NSString *)descriptionForAttachmentAtIndex:(unsigned int)arg1;
- (unsigned long long)numberOfAttachment;
- (unsigned long long)numberOfCols;
- (unsigned long long)numberOfRows;
- (UIView *)viewForAttachmentAtIndex:(unsigned int)arg1;
@end

