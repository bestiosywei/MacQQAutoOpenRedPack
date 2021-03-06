//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class NSData, NSMutableArray;

@interface PtLoginHTTPResponse : NSObject <HTTPResponse>
{
    unsigned long long offset;
    NSData *_data;
    NSMutableArray *_dataHeaders;
}

@property(retain, nonatomic) NSMutableArray *dataHeaders; // @synthesize dataHeaders=_dataHeaders;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)initWithData:(id)arg1;
- (id)init;

@end

