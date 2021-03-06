//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQAVAvatarImageView, NSImage, NSMutableDictionary, NSString, SChatDelegate, TDOService;

@interface TSChatServiceAgent : NSObject
{
    BOOL _hasConnected;
    NSString *_uin;
    long long _chatType;
    NSString *_name;
    MQAVAvatarImageView *_avatar;
    NSImage *_avatarImg;
    TDOService *_service;
    NSMutableDictionary *_uin2WindowControllers;
    SChatDelegate *_appDelegate;
}

+ (id)shareInstance;
@property(nonatomic) BOOL hasConnected; // @synthesize hasConnected=_hasConnected;
@property(nonatomic) __weak SChatDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
@property(retain, nonatomic) NSMutableDictionary *uin2WindowControllers; // @synthesize uin2WindowControllers=_uin2WindowControllers;
@property(retain, nonatomic) TDOService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSImage *avatarImg; // @synthesize avatarImg=_avatarImg;
@property(retain, nonatomic) MQAVAvatarImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)setUnread:(id)arg1;
- (void)setupAvIcon:(id)arg1;
- (void)setDockTileContentView;
- (void)setAppDockTileIcon:(id)arg1;
- (void)unpinToTop;
- (void)pinToTop;
- (void)showSCWindow:(id)arg1;
- (void)hideWindow;
- (void)responseClickDockForReport;
- (void)responseClickDock;
- (void)sendMessage:(id)arg1;
- (void)startService;
- (void)dealloc;

@end

