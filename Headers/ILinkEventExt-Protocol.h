//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTRichTextView, LinkWeAppJumpWrap, MMCPLabel, NSString, RichTextView;

@protocol ILinkEventExt <NSObject>

@optional
- (void)onAddressClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onAddressLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(MMCPLabel *)arg3;
- (void)onFavAdd:(id)arg1;
- (void)onLinkClicked:(NSString *)arg1 backupUrl:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(NSString *)arg1 backupUrl:(NSString *)arg2 withRect:(struct CGRect)arg3 extraInfo:(id)arg4;
- (void)onLinkClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onLinkHighlighted:(_Bool)arg1 url:(NSString *)arg2;
- (void)onLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onPhoneClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onPhoneLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onTextLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onTextLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onWeAppLinkClicked:(LinkWeAppJumpWrap *)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkLongPressed:(LinkWeAppJumpWrap *)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkLongPressed:(LinkWeAppJumpWrap *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
@end

