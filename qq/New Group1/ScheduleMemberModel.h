//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ScheduleMemberModel : NSObject
{
    short _sourceType;
    unsigned long long _uin;
    unsigned long long _sourceUin;
    unsigned long long _groupUin;
    unsigned long long _rootUin;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long rootUin; // @synthesize rootUin=_rootUin;
@property(nonatomic) unsigned long long groupUin; // @synthesize groupUin=_groupUin;
@property(nonatomic) short sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned long long sourceUin; // @synthesize sourceUin=_sourceUin;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;

@end

