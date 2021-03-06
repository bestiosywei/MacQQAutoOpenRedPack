//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FADBAgent : NSObject
{
    unsigned long long _currentUin;
}

- (id)queryAllFileRecord;
- (id)queryFileRecordInFileListByFileName:(id)arg1 count:(int)arg2;
- (id)queryFileRecordInFileListByUin:(id)arg1 msgSessionType:(int)arg2 count:(short)arg3;
- (id)queryFileRecordInFileListByFilter:(long long)arg1 order:(long long)arg2 count:(short)arg3;
- (BOOL)deleteAllFileRecordByUin:(unsigned long long)arg1 sessionType:(int)arg2;
- (BOOL)deleteFileRecord:(unsigned long long)arg1 inDb:(id)arg2;
- (BOOL)deleteFileRecord:(unsigned long long)arg1;
- (void)parseFMResultSet:(id)arg1 toModel:(id)arg2;
- (id)_queryMultiFileRecordBy:(id)arg1;
- (id)queryFileRecordsAtDatalineByTimeDescWithPeerUin:(id)arg1 count:(unsigned int)arg2;
- (id)queryFileRecordsAtDatalineWithPeerUin:(id)arg1 groupID:(unsigned int)arg2;
- (id)queryMsgUuidArray:(int)arg1 byFABusinessType:(int)arg2;
- (id)queryFileRecordByUIN:(id)arg1 relationID:(unsigned long long)arg2 andMsgId:(unsigned long long)arg3 msgFlag:(int)arg4 inDb:(id)arg5;
- (id)queryFileRecordByUIN:(id)arg1 relationID:(unsigned long long)arg2 andMsgId:(unsigned long long)arg3 msgFlag:(int)arg4;
- (id)queryFileRecordByUIN:(id)arg1 uniMsgSeq:(unsigned long long)arg2 msgFlag:(int)arg3 inDb:(id)arg4;
- (id)queryFileRecordByUIN:(id)arg1 uniMsgSeq:(unsigned long long)arg2 msgFlag:(int)arg3;
- (id)queryFileRecordByUUID:(id)arg1 inDb:(id)arg2;
- (id)queryFileRecordByUUID:(id)arg1;
- (id)queryFileRecord:(unsigned long long)arg1 inDb:(id)arg2;
- (id)queryFileRecord:(unsigned long long)arg1;
- (BOOL)updateFileRecordDeleteFlag:(int)arg1 withJobID:(unsigned long long)arg2;
- (BOOL)updateFileRecordUrl:(id)arg1 withJobID:(unsigned long long)arg2 inDb:(id)arg3;
- (BOOL)updateFileRecordUrl:(id)arg1 withJobID:(unsigned long long)arg2;
- (BOOL)updateFileRecordUuid:(id)arg1 withJobID:(unsigned long long)arg2 inDb:(id)arg3;
- (BOOL)updateFileRecordUuid:(id)arg1 withJobID:(unsigned long long)arg2;
- (BOOL)updateFileRecordUniMsgSeq:(unsigned long long)arg1 withJobID:(unsigned long long)arg2 inDb:(id)arg3;
- (BOOL)updateFileRecordUniMsgSeq:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (BOOL)updateFileRecordTime:(unsigned long long)arg1 withJobID:(unsigned long long)arg2 inDb:(id)arg3;
- (BOOL)updateFileRecordTime:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (BOOL)updateFileRecord:(id)arg1 inDb:(id)arg2;
- (BOOL)updateFileRecord:(id)arg1;
- (BOOL)reinsertFileRecordToFA:(unsigned long long)arg1 inDb:(id)arg2;
- (BOOL)reinsertFileRecordToFA:(unsigned long long)arg1;
- (BOOL)insertFileRecord:(id)arg1 deleteFlag:(int)arg2 inDb:(id)arg3;
- (BOOL)insertFileRecord:(id)arg1 deleteFlag:(int)arg2;
- (void)registerFileFilterFun:(id)arg1;
- (BOOL)isFileRecordExist:(unsigned long long)arg1 inDb:(id)arg2;
- (BOOL)isFileRecordExist:(unsigned long long)arg1;
- (void)importIpadTBFile;
- (void)creatFATable:(id)arg1;
- (void)creatFATable;
- (id)initWithUin:(unsigned long long)arg1;

@end

