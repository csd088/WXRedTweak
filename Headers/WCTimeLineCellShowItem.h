//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSObject.h"

@class NSString;

@interface WCTimeLineCellShowItem : NSObject <NSObject>
{
    _Bool m_showWithInfo;
    _Bool m_showLocationInfo;
    _Bool m_showActionInfo;
    _Bool m_isUploadFailed;
    _Bool m_showABTestTip;
    NSString *m_dataItemID;
    NSString *m_layerId;
    unsigned int m_rewardCount;
    _Bool m_isSightThumbImageDownloaded;
}

- (void).cxx_destruct;
- (id)initWithDataItem:(id)arg1;
- (_Bool)isDifferentWithDataItem:(id)arg1;
@property(nonatomic) _Bool m_isSightThumbImageDownloaded; // @synthesize m_isSightThumbImageDownloaded;
@property(nonatomic) _Bool m_isUploadFailed; // @synthesize m_isUploadFailed;
@property(nonatomic) unsigned int m_rewardCount; // @synthesize m_rewardCount;
@property(nonatomic) _Bool m_showABTestTip; // @synthesize m_showABTestTip;
@property(nonatomic) _Bool m_showActionInfo; // @synthesize m_showActionInfo;
@property(nonatomic) _Bool m_showLocationInfo; // @synthesize m_showLocationInfo;
@property(nonatomic) _Bool m_showWithInfo; // @synthesize m_showWithInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

