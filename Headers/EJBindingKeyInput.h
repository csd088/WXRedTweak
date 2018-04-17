//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingEventedBase.h"

#import "EJKeyInputDelegate.h"

@class EJKeyInputResponder, NSMutableString, NSString;

@interface EJBindingKeyInput : EJBindingEventedBase <EJKeyInputDelegate>
{
    EJKeyInputResponder *_inputController;
    NSMutableString *_value;
}

+ (void *)_ptr_to_func_blur;
+ (void *)_ptr_to_func_focus;
+ (void *)_ptr_to_func_isOpen;
+ (void *)_ptr_to_get_onblur;
+ (void *)_ptr_to_get_onchange;
+ (void *)_ptr_to_get_ondelete;
+ (void *)_ptr_to_get_onfocus;
+ (void *)_ptr_to_get_value;
+ (void *)_ptr_to_set_onblur;
+ (void *)_ptr_to_set_onchange;
+ (void *)_ptr_to_set_ondelete;
+ (void *)_ptr_to_set_onfocus;
+ (void *)_ptr_to_set_value;
- (struct OpaqueJSValue *)_func_blur:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_focus:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_isOpen:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_value:(struct OpaqueJSContext *)arg1;
- (void)_set_value:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)dealloc;
- (_Bool)hasText;
@property(retain, nonatomic) EJKeyInputResponder *inputController; // @synthesize inputController=_inputController;
- (void)keyInput:(id)arg1 insertText:(id)arg2;
- (void)keyInputDidBecomeFirstResponder:(id)arg1;
- (void)keyInputDidDeleteBackwards:(id)arg1;
- (void)keyInputDidResignFirstResponderStatus:(id)arg1;
- (id)nextResponderForKeyInput:(id)arg1;
@property(retain, nonatomic) NSMutableString *value; // @synthesize value=_value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

