//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavStreamVideoItem : NSObject
{
    NSString *_streamVideoUrl;
    NSString *_streamVideoTitle;
    NSString *_streamVideoWording;
    NSString *_streamVideoWebUrl;
    unsigned int _uiStreamVideoTime;
    NSString *_streamVideoThumbUrl;
    NSString *_streamVideoPublishId;
    NSString *_streamVideoAdUxInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *streamVideoAdUxInfo; // @synthesize streamVideoAdUxInfo=_streamVideoAdUxInfo;
@property(retain, nonatomic) NSString *streamVideoPublishId; // @synthesize streamVideoPublishId=_streamVideoPublishId;
@property(retain, nonatomic) NSString *streamVideoThumbUrl; // @synthesize streamVideoThumbUrl=_streamVideoThumbUrl;
@property(retain, nonatomic) NSString *streamVideoTitle; // @synthesize streamVideoTitle=_streamVideoTitle;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;
@property(retain, nonatomic) NSString *streamVideoWebUrl; // @synthesize streamVideoWebUrl=_streamVideoWebUrl;
@property(retain, nonatomic) NSString *streamVideoWording; // @synthesize streamVideoWording=_streamVideoWording;
@property(nonatomic) unsigned int uiStreamVideoTime; // @synthesize uiStreamVideoTime=_uiStreamVideoTime;

@end

