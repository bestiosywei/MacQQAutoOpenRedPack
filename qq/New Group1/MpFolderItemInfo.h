//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MpFolderItemInfo : NSObject
{
    NSString *_name;
    NSString *_fileid;
    int _type;
    unsigned long long _size;
    int _group;
    NSString *_time;
    unsigned long long _notifytime;
    NSData *_md5;
}

@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned long long notifytime; // @synthesize notifytime=_notifytime;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) int group; // @synthesize group=_group;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *fileid; // @synthesize fileid=_fileid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
