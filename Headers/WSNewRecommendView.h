//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMUILabel, WSRecommendModel;

@interface WSNewRecommendView : UIView
{
    WSRecommendModel *_rcmdData;
    MMUILabel *_mainLabel;
    id <WSNewRecommendViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WSNewRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getRcmdDataModel;
- (void)initViewWithData:(id)arg1;
- (id)initWithRecommendModel:(id)arg1 andFrame:(struct CGRect)arg2;
- (id)makeNewButton:(id)arg1;
- (void)onClickButton:(id)arg1;
- (void)updateViewWithData:(id)arg1;

@end

