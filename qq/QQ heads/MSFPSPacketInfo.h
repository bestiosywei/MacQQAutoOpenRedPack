//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSFPSPacketInfo : NSObject
{
    NSString *_pCmdString;
    int _sequence;
    int _size;
    long long _sendTime;
}

@property(nonatomic) long long sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *cmdString; // @synthesize cmdString=_pCmdString;
- (void)dealloc;
- (id)init;

@end

