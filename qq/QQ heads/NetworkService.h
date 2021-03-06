//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "INetworkService.h"
#import "QQAccountEventObserver.h"

@class NSString, ReachabilityManager;

@interface NetworkService : QQBaseSingleton <INetworkService, QQAccountEventObserver>
{
    long long _lastOnlineStateWhenDisconnect;
    unsigned long long _curState;
    long long _sessionID;
    ReachabilityManager *_reachabilityManager;
}

- (void).cxx_destruct;
- (void)_performMSFNetworkState:(id)arg1;
- (void)doNetworkChange:(id)arg1;
- (void)_testNetworkChange:(id)arg1;
- (void)testNetworkChange;
- (void)notifyJitter;
- (void)notifyDisconnected;
- (void)notifyConnected;
- (void)delayNotifyJitter:(long long)arg1;
- (void)delayNotifyDisConnected:(long long)arg1;
- (void)delayNotifyConnected:(long long)arg1;
- (void)onMSFNetworkStateChange:(unsigned long long)arg1;
- (void)_onNetworkDidChangeForSystem:(id)arg1;
- (void)_onNetworkDidDisConnected:(id)arg1;
- (void)_onNetworkDidConnected:(id)arg1;
- (void)onWillLogoutCurrentAccount;
- (void)onDidChangeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

