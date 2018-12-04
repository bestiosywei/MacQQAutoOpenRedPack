//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSMutableArray, NSMutableDictionary, NSString, QQRegisterProxyTask;

@interface QQMsgSyncManager : QQBaseSingleton
{
    NSString *_uin;
    BOOL _receiveCacheModified;
    BOOL _sendCacheModified;
    int _c2cCacheUpdate;
    NSMutableDictionary *_c2cReceiveCache;
    NSMutableDictionary *_c2cSendCache;
    NSMutableDictionary *_c2cSeqCache;
    NSMutableArray *_relationNoticeCache;
    NSMutableDictionary *_c2cMsgSourceCache;
    int _groupPttSeqCacheUpdate;
    BOOL _groupPttSeqCacheModified;
    NSMutableDictionary *_groupPttSeqCache;
    NSMutableDictionary *_groupRichSeqCache;
    NSMutableDictionary *_readConfirmCache;
    NSMutableArray *_syncTasks;
    int _delayPostGroupMessageInvokeCount;
    QQRegisterProxyTask *_registerTask;
    NSMutableArray *_groupMessagePostSerialList;
    BOOL _readingSaveTrafficModeOn;
}

- (void).cxx_destruct;
- (long long)getC2CMsgSourceWithSsoSeq:(int)arg1;
- (void)cacheC2CMsgSource:(long long)arg1 ssoSeq:(int)arg2;
- (BOOL)hasUnreportMessage:(id)arg1;
- (void)onSaveFinish:(id)arg1 success:(BOOL)arg2;
- (id)deepcopy:(id)arg1;
- (void)didSyncTaskFinished:(id)arg1;
- (void)sendReadConfirmOnEnterBackground;
- (id)requestOfflineMessage:(unsigned int)arg1 identityUin:(unsigned long long)arg2 c2cRetrySeq:(int)arg3 msgSource:(long long)arg4;
- (unsigned int)_sendMessageRandom;
- (unsigned int)getSendMessageRandom;
- (unsigned short)getC2CSendMessageSeq:(long long)arg1;
- (void)saveGroupPttSeqCache:(BOOL)arg1;
- (void)saveGroupRichSeqCache;
- (void)doSaveGroupRichSeqCache;
- (void)doSaveGroupPttSeqCache;
- (void)removeC2CCache:(id)arg1;
- (void)excuteSaveC2CCache;
- (void)saveC2CCache;
- (void)loadReportCache;
- (id)getCacheFromAsynFileStorageByPath:(id)arg1;
- (id)getGroupRichSeqCacheFileName;
- (id)getGroupPttSeqCacheFileName;
- (id)getReadConfirmCacheFileName;
- (id)getC2CSendCacheFileName;
- (id)getC2CReceiveCacheFileName;
- (id)getCacheFileName:(id)arg1;
- (void)updateC2CCacheWithDelay;
- (void)endUpdateC2CCache;
- (void)beginUpdateC2CCache;
- (void)clearCacheData;
- (void)changeAccount:(id)arg1;
- (void)clearOutOfDateMsg;
- (void)dealloc;
- (id)init;

@end
