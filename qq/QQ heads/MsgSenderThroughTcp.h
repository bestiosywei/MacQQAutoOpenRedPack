//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageSender.h"

@class NSString;

@interface MsgSenderThroughTcp : NSObject <MessageSender>
{
    id <MessageSenderDelagate> mDelegate;
}

- (void).cxx_destruct;
- (void)onPacketSendAndRecvResult:(id)arg1;
- (int)sendMessage:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
