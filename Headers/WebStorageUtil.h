//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WebStorageUtil : MMObject
{
}

+ (id)getDbPath;
+ (id)getFileName:(id)arg1;
+ (id)getMD5:(id)arg1;
+ (id)getWebStorageDataDirPath:(_Bool)arg1;
+ (id)getWebStorageDataDirPathForAppId:(id)arg1 CreatePathIfNotExist:(_Bool)arg2;
+ (id)getWebStorageDataPath:(id)arg1 FileName:(id)arg2 CreatePathIfNotExist:(_Bool)arg3;
+ (id)getWebStorageDbDirPath;
+ (id)getWebStoragePath:(_Bool)arg1;

@end

