//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHMessageModel, MQFileViewModel, NSString;

@interface MQPhotoLogicObject : NSObject
{
    BHMessageModel *_msgModel;
    long long _index;
    MQFileViewModel *_viewModel;
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) MQFileViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) BHMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void).cxx_destruct;

@end
