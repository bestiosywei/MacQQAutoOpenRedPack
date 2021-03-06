//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQUnreadMsgItem.h"

@class NSMutableArray;

@interface MQUnreadBuddyMsgItem : MQUnreadMsgItem
{
    NSMutableArray *_messages;
    unsigned long long _lastMessageReadTime;
    unsigned long long _lastMessageTime;
}

@property(nonatomic, setter=updateLastMessageTime:) unsigned long long lastMessageTime; // @synthesize lastMessageTime=_lastMessageTime;
@property(nonatomic, setter=updateLastMessageReadTime:) unsigned long long lastMessageReadTime; // @synthesize lastMessageReadTime=_lastMessageReadTime;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)resetAfterRead;
- (void)addShakeWindowMessageByUin:(unsigned long long)arg1;
- (int)addMessage:(id)arg1 MessageTail:(id)arg2;
- (BOOL)isMessageAlreadyExists:(id)arg1;
- (BOOL)isOfflineMsg;
- (id)textOfChatMsg;
- (unsigned long long)latestMsgTime;
- (unsigned long long)msgCount;
- (id)messageArray;
- (void)updateLastReadTime:(unsigned long long)arg1;
- (void)itemTitleCallBack:(id)arg1;
- (id)itemTitle;
- (id)itemIcon;
- (void)dealloc;
- (id)initWithUin:(unsigned long long)arg1 chatType:(int)arg2;

@end

