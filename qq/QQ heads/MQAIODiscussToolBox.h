//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQAIOToolBox.h"

@class MQAIOSendFilesButton, MQAIOToolButton, TXHoverButton;

@interface MQAIODiscussToolBox : MQAIOToolBox
{
    MQAIOToolButton *_btnQuitDiscuss;
    TXHoverButton *_btnGroupAdd;
    MQAIOToolButton *_btnGroupMember;
    MQAIOSendFilesButton *_btnSendFiles;
    MQAIOToolButton *_btnDiscussVideo;
    MQAIOToolButton *_btnDiscussAudio;
    MQAIOToolButton *_btnDiscussScreenshare;
}

@property(nonatomic) MQAIOToolButton *btnDiscussScreenshare; // @synthesize btnDiscussScreenshare=_btnDiscussScreenshare;
@property(nonatomic) MQAIOToolButton *btnDiscussAudio; // @synthesize btnDiscussAudio=_btnDiscussAudio;
@property(nonatomic) MQAIOToolButton *btnDiscussVideo; // @synthesize btnDiscussVideo=_btnDiscussVideo;
@property(nonatomic) MQAIOSendFilesButton *btnSendFiles; // @synthesize btnSendFiles=_btnSendFiles;
@property(nonatomic) MQAIOToolButton *btnGroupMember; // @synthesize btnGroupMember=_btnGroupMember;
@property(nonatomic) TXHoverButton *btnGroupAdd; // @synthesize btnGroupAdd=_btnGroupAdd;
@property(nonatomic) MQAIOToolButton *btnQuitDiscuss; // @synthesize btnQuitDiscuss=_btnQuitDiscuss;
- (void)awakeFromNib;

@end

