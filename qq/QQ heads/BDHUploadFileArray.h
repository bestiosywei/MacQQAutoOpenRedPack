//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BDHUploadFileArray : NSObject
{
    NSMutableArray *_uploadFiles;
    long long _taskIdMax;
    long long _taskIdMin;
}

@property(nonatomic) long long taskIdMin; // @synthesize taskIdMin=_taskIdMin;
@property(nonatomic) long long taskIdMax; // @synthesize taskIdMax=_taskIdMax;
@property(retain, nonatomic) NSMutableArray *uploadFiles; // @synthesize uploadFiles=_uploadFiles;
- (void)addFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTaskIDWith:(id)arg1;
- (void)dealloc;
- (id)initWithPackets:(id)arg1;
- (id)init;
- (BOOL)deletePacket:(id)arg1;
- (id)getCurrentFileInfo;
- (id)getNextPacket;

@end
