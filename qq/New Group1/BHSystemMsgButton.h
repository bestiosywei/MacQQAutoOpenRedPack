//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BHSystemMsgButton : NSObject
{
    unsigned int _type;
    unsigned int _actionType;
    unsigned int _friendGroupID;
    NSString *_text;
    NSString *_clickedText;
    NSString *_remark;
    void *_obj1;
    void *_obj2;
}

@property(nonatomic) void *obj2; // @synthesize obj2=_obj2;
@property(nonatomic) void *obj1; // @synthesize obj1=_obj1;
@property(nonatomic) unsigned int friendGroupID; // @synthesize friendGroupID=_friendGroupID;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *clickedText; // @synthesize clickedText=_clickedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

