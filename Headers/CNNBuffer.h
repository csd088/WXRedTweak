//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CNNBuffer : NSObject
{
    NSString *_name;
    id <MTLBuffer> _mtlBuffer;
}

- (void).cxx_destruct;
- (_Bool)attachToCommandEncoder:(id)arg1 withOffset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (id)description;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 device:(id)arg3;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 device:(id)arg3 option:(unsigned long long)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 device:(id)arg3;
- (id)initWithLength:(unsigned long long)arg1 device:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 device:(id)arg2 option:(unsigned long long)arg3;
- (id)initWithLength:(unsigned long long)arg1 mtlBuffer:(id)arg2;
@property(readonly, nonatomic) id <MTLBuffer> mtlBuffer; // @synthesize mtlBuffer=_mtlBuffer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

