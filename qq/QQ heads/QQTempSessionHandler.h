//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

@interface QQTempSessionHandler : QQBaseMsgHandler
{
    id <IMsgObserver> _wpaHandler;
    id <IMsgObserver> _publicPlatformHandler;
    id <IMsgObserver> _groupTmpHandler;
    id <IMsgObserver> _discussTmpHandler;
    id <IMsgObserver> _contactsTmpHandler;
    id <IMsgObserver> _nearbyAccostHandler;
    id <IMsgObserver> _crmWPAHandler;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)handleMsg:(const struct Msg *)arg1;
- (void)dealloc;
- (id)init;

@end

