//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BHCollectionContent.h"

@class NSData, NSString;

@interface BHCollectionAudioContent : BHCollectionContent
{
    NSData *_data;
    NSString *_pttPath;
    NSString *_md5;
}

@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *pttPath; // @synthesize pttPath=_pttPath;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (struct MessageLite *)encode;

@end

