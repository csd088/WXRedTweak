//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, UIDatePicker, UIPickerView;

@interface WADateTimePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIDatePicker *_picker;
    UIPickerView *_customPicker;
    NSString *_format;
    int _customMode;
    int _curYear;
    int _curMonth;
    int _minYear;
    int _maxYear;
    int _minMonth;
    int _maxMonth;
    int _minCurrentMonth;
    int _maxCurrentMonth;
    id <WADateTimePickerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WADateTimePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getValue;
- (void)initPicker:(long long)arg1 field:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)resetMonth;
- (void)setCurrent:(int)arg1 month:(int)arg2;
- (void)setRangeFrom:(id)arg1 toEnd:(id)arg2;
- (void)setValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

