//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WNVideoInfo : NSObject
{
    unsigned int videoDuration;
    double width;
    double height;
    NSString *videoPath;
    NSString *thumbImagePath;
    NSString *videoFmt;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double height; // @synthesize height;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath;
@property(nonatomic) unsigned int videoDuration; // @synthesize videoDuration;
@property(retain, nonatomic) NSString *videoFmt; // @synthesize videoFmt;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath;
@property(nonatomic) double width; // @synthesize width;

@end

