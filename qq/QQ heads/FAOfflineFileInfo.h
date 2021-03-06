//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface FAOfflineFileInfo : NSObject
{
    unsigned int _fileWidth;
    unsigned int _fileHeight;
    unsigned int _reserved;
    NSString *_fileName;
    NSString *_fileID;
    NSData *_fileMD5;
    unsigned long long _fileSize;
    unsigned long long _previewType;
    unsigned long long _lifeTime;
    unsigned long long _uploadTime;
    unsigned long long _clientType;
    unsigned long long _dangerLevel;
    unsigned long long _expireTime;
}

@property(nonatomic) unsigned int reserved; // @synthesize reserved=_reserved;
@property(nonatomic) unsigned int fileHeight; // @synthesize fileHeight=_fileHeight;
@property(nonatomic) unsigned int fileWidth; // @synthesize fileWidth=_fileWidth;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned long long dangerLevel; // @synthesize dangerLevel=_dangerLevel;
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(nonatomic) unsigned long long uploadTime; // @synthesize uploadTime=_uploadTime;
@property(nonatomic) unsigned long long lifeTime; // @synthesize lifeTime=_lifeTime;
@property(nonatomic) unsigned long long previewType; // @synthesize previewType=_previewType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSData *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(copy, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (id)init;

@end

