//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPacketSendResultHandler.h"

@class NSMutableDictionary, NSString;

@interface WupTransportationProxy : NSObject <IPacketSendResultHandler>
{
    NSMutableDictionary *_delegateDic;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (BOOL)handleRecivedPacket:(CDStruct_a00ab4be)arg1 sendingModel:(id)arg2;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (BOOL)handleResult:(int)arg1 wupStruct:(CDStruct_a00ab4be *)arg2 userInfo:(id)arg3 delegateInfo:(id)arg4;
- (int)sendWupBuffer:(char *)arg1 cmd:(id)arg2 identityUin:(unsigned long long)arg3 timeOut:(int)arg4 retryCount:(int)arg5 sendResultCallback:(id)arg6 userInfo:(id)arg7;
- (int)sendWupBuffer:(char *)arg1 cmd:(id)arg2 identityUin:(unsigned long long)arg3 timeOut:(int)arg4 retryCount:(int)arg5 delegate:(id)arg6 userInfo:(id)arg7;
- (int)sendWupBuffer:(char *)arg1 identityUin:(unsigned long long)arg2 seqid:(int)arg3 cmd:(id)arg4 timeOut:(int)arg5 retryCount:(int)arg6 userInfo:(id)arg7;
- (void)dealloc;
- (void)doInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

