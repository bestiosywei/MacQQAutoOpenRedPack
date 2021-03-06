//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSingleChatWindowControllerDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface TSingleChatManager : NSObject <TSingleChatWindowControllerDelegate>
{
    id m_dragGlobalEvent;
    BOOL _scOpening;
    BOOL _shouldFilt;
    NSMutableDictionary *_connections;
    NSMutableDictionary *_uin2WindowControllers;
    NSMutableDictionary *_singleChatStayTimeInfo;
    NSMutableDictionary *_singleChatOpenCountInfo;
    NSMutableSet *_quitSessions;
}

+ (id)pidStoragePath:(int)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableSet *quitSessions; // @synthesize quitSessions=_quitSessions;
@property(retain, nonatomic) NSMutableDictionary *singleChatOpenCountInfo; // @synthesize singleChatOpenCountInfo=_singleChatOpenCountInfo;
@property(retain, nonatomic) NSMutableDictionary *singleChatStayTimeInfo; // @synthesize singleChatStayTimeInfo=_singleChatStayTimeInfo;
@property(retain, nonatomic) NSMutableDictionary *uin2WindowControllers; // @synthesize uin2WindowControllers=_uin2WindowControllers;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(nonatomic) BOOL shouldFilt; // @synthesize shouldFilt=_shouldFilt;
- (void).cxx_destruct;
- (id)chatViewControllerBySession:(id)arg1;
- (void)handleHideOtherAppNotify:(id)arg1;
- (void)windowWillCloseSession:(id)arg1;
- (void)maintainConnectionBySession:(id)arg1;
- (BOOL)shouldColseQuitWithSession:(id)arg1;
- (void)quitSessionAndBackToMain:(id)arg1;
- (void)quitSession:(id)arg1;
- (void)updatePinTopStateForSession:(id)arg1 isTop:(BOOL)arg2;
- (void)syncUnreadCount;
- (void)updateUnreadCountForSession:(id)arg1 msgModel:(id)arg2;
- (void)hideSChatWindows:(BOOL)arg1;
- (BOOL)shouldHideScWindowEvent:(id)arg1;
- (void)pinToTopWindow:(id)arg1 isTop:(BOOL)arg2;
- (void)hideSCWindow:(id)arg1;
- (void)showSCWindow:(id)arg1 originPoint:(struct CGPoint)arg2 fromRecentList:(BOOL)arg3;
- (void)showSCWindow:(id)arg1 originPoint:(struct CGPoint)arg2;
- (void)showSCWindow:(id)arg1;
- (id)screenShot:(id)arg1;
- (BOOL)availableSChatSession:(id)arg1;
- (void)caculateSingleChatOpenCountBySesson:(id)arg1;
- (void)caculateSingleChatStayTimeInfoBySession:(id)arg1;
- (void)caculateSingleChatStayTimeOnTerminate;
- (void)sendMsg:(id)arg1 forSession:(id)arg2;
- (void)sendMsg:(id)arg1 forName:(id)arg2;
- (void)putSessionToMsgList:(id)arg1 needTop:(BOOL)arg2;
- (void)doOnDisconnectService:(id)arg1;
- (void)reportSChatWindowNum;
- (void)doReportWork;
- (BOOL)isSessionActive:(id)arg1;
- (id)windowControllerBy:(id)arg1;
- (BOOL)isSingleChat:(id)arg1;
- (void)startAScingleChat:(id)arg1 originPoint:(struct CGPoint)arg2;
- (void)startAScingleChat:(id)arg1;
- (void)showSingleChat:(id)arg1;
- (void)addSessionToList:(id)arg1 isTop:(BOOL)arg2;
- (unsigned long long)listTypeBySession:(id)arg1;
- (long long)numberOfSingleChats;
- (id)singleChatList;
- (id)init;
- (void)handleDiscussEventNotification:(id)arg1;
- (void)handleGroupEventNotification:(id)arg1;
- (void)handleContactIMInfoEvtDidChange:(id)arg1;
- (void)handleContactIMStatusDidChange:(id)arg1;
- (void)registerNotificaiton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

