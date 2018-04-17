//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BackupInfoReport;

@interface WXGBackupAnalysis : NSObject
{
    BackupInfoReport *m_backupInfoReport;
    BackupInfoReport *m_recoverInfoReport;
}

+ (id)compareItemReport:(id)arg1 withReport:(id)arg2;
+ (id)compareReport:(id)arg1 withReport:(id)arg2;
+ (void)deleteInfo;
+ (_Bool)getShouldAnalysis;
+ (id)getStringForInfoReport:(id)arg1;
+ (id)mergeReport:(id)arg1;
+ (void)resetTheStateOfAnalysis:(_Bool)arg1;
- (void).cxx_destruct;
- (void)addBackupInfoItem:(id)arg1;
- (void)addRecoverInfoItem:(id)arg1;
- (id)getBackupInfoReport;
- (id)getRecoverInfoReport;
- (id)init;
- (void)syncBackupInfo;
- (void)syncRecoverInfo;

@end
