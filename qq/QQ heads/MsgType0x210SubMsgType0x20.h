//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MsgType0x210SubMsgType0x20 : NSObject
{
    unsigned int dwOpType;
    unsigned int dwType;
    long long dwUin;
    NSString *strRemaek;
}

+ (void)parseMsgType0x210SubMsgType0x20:(struct MsgType0x210SubMsgType0x20 *)arg1;
@property(retain, nonatomic) NSString *strRemaek; // @synthesize strRemaek;
@property(nonatomic) long long dwUin; // @synthesize dwUin;
@property(nonatomic) unsigned int dwType; // @synthesize dwType;
@property(nonatomic) unsigned int dwOpType; // @synthesize dwOpType;
- (void).cxx_destruct;

@end

