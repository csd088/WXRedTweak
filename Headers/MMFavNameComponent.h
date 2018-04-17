//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponent.h"

#import "IStrangerContactMgrExt.h"

@class AttributeLabel, NSString;

@interface MMFavNameComponent : MMComponent <IStrangerContactMgrExt>
{
    AttributeLabel *_nameLabel;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)configCardLabel;
- (void)configContentLayout;
- (void)configLabel;
- (void)dealloc;
- (id)getContactDisplayName:(id)arg1;
- (id)getTitleText;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

