//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCActionSheetItem : NSObject
{
    _Bool _bEnable;
    _Bool _bCustom;
    NSString *_title;
    NSString *_titleColor;
    long long _titleSize;
    NSString *_desc;
    NSString *_descColor;
    long long _descSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bCustom; // @synthesize bCustom=_bCustom;
@property(nonatomic) _Bool bEnable; // @synthesize bEnable=_bEnable;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(nonatomic) long long descSize; // @synthesize descSize=_descSize;
- (double)getItemHeight;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 fontSize:(long long)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(long long)arg5 descFontColor:(id)arg6 enable:(_Bool)arg7;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) long long titleSize; // @synthesize titleSize=_titleSize;

@end

