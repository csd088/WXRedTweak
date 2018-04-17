//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMThemeUtil : NSObject
{
}

+ (_Bool)parseBOOLFromValues:(id)arg1;
+ (id)parseColorFromValues:(id)arg1;
+ (struct UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1 needCeil:(_Bool)arg2;
+ (id)parseFontFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (struct CGPoint)parsePointFromValues:(id)arg1;
+ (struct CGRect)parseRectFromValues:(id)arg1;
+ (struct CGSize)parseSizeFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues_for_different_ios_version:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (void)setUIControl:(id)arg1 FromDictionary:(id)arg2;
+ (void)setUIImageView:(id)arg1 FromDictionary:(id)arg2;
+ (void)setUILabel:(id)arg1 FromDictionary:(id)arg2;
+ (void)setUITableViewCell:(id)arg1 FromDictionary:(id)arg2;
+ (void)setUITextField:(id)arg1 FromDictionary:(id)arg2;
+ (void)setUIView:(id)arg1 FromDictionary:(id)arg2;

@end

