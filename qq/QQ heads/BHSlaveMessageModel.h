//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class BHMessageModel, NSString;

@interface BHSlaveMessageModel : NSObject <NSCoding>
{
    unsigned int _time;
    int _msgType;
    int _unreadCount;
    unsigned long long _uin;
    NSString *_nick;
    NSString *_content;
    BHMessageModel *_messageModel;
}

@property(retain, nonatomic) BHMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMessageModel:(id)arg1;

@end
