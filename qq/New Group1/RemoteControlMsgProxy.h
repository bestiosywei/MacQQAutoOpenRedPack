//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RemoteControlMsgProxy : NSObject
{
}

- (struct RoutingHead *)_genRoutingHead:(id)arg1 ccSeq:(unsigned int)arg2 cmd:(unsigned int)arg3;
- (int)_sendPBTransMessage:(id)arg1 ccSeq:(unsigned int)arg2 cmd:(unsigned int)arg3 completion:(id)arg4;
- (int)sendCCMsg:(id)arg1 cmd:(unsigned int)arg2 seq:(unsigned int)arg3 toUin:(unsigned long long)arg4 completion:(id)arg5;

@end
