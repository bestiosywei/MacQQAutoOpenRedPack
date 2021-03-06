//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "V5ViewController.h"

@class MQAIOTextField, MQSessionID, NSButton, NSImageView, NSLayoutConstraint, NSTextField, NSView;

@interface MQAIOChatCounterpartInfoViewController : V5ViewController
{
    NSButton *_name;
    MQAIOTextField *_longNickName;
    MQAIOTextField *_tempChatSource;
    NSImageView *_onlineStatus;
    NSLayoutConstraint *_nameCenterYConstraint;
    NSLayoutConstraint *_nameTailingConstraint;
    MQSessionID *_sessionId;
    MQSessionID *_lastSelectedsessionId;
    id <MQAIOChatHeadViewControllerDelegate> _delegate;
    NSView *_singleChatView;
    NSButton *_topBtn;
    NSButton *_scCursorButton;
    MQAIOTextField *_scTempTextField;
    NSTextField *_scTitle;
    NSLayoutConstraint *_scTitleTopConstraint;
    NSLayoutConstraint *_scTitleTrailConstraint;
    NSTextField *_scDiscussNumTextField;
    NSImageView *_scOnlineStatus;
}

@property __weak NSImageView *scOnlineStatus; // @synthesize scOnlineStatus=_scOnlineStatus;
@property __weak NSTextField *scDiscussNumTextField; // @synthesize scDiscussNumTextField=_scDiscussNumTextField;
@property __weak NSLayoutConstraint *scTitleTrailConstraint; // @synthesize scTitleTrailConstraint=_scTitleTrailConstraint;
@property __weak NSLayoutConstraint *scTitleTopConstraint; // @synthesize scTitleTopConstraint=_scTitleTopConstraint;
@property __weak NSTextField *scTitle; // @synthesize scTitle=_scTitle;
@property __weak MQAIOTextField *scTempTextField; // @synthesize scTempTextField=_scTempTextField;
@property __weak NSButton *scCursorButton; // @synthesize scCursorButton=_scCursorButton;
@property __weak NSButton *topBtn; // @synthesize topBtn=_topBtn;
@property(retain) NSView *singleChatView; // @synthesize singleChatView=_singleChatView;
- (void).cxx_destruct;
- (BOOL)isSingleChat;
- (void)pinTopChanged;
- (void)onTopClick:(id)arg1;
- (void)showProfile:(id)arg1;
- (void)setLongNickName:(id)arg1;
- (void)scSetName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)onSimplestModeChanged:(id)arg1;
- (void)setOnlineStatusForImageView:(id)arg1;
- (void)refreshUI;
- (void)refreshSingleChatUI;
- (unsigned long long)getDisMemberCount;
- (void)setChattingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshAppearance;
- (void)awakeFromNib;

@end

