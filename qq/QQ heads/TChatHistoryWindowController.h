//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUIWindowController.h"

#import "HistoryHelperDelegate.h"
#import "NSSplitViewDelegate.h"
#import "TChatHisLeftViewDelegate.h"
#import "TChatHisRightViewDelegate.h"
#import "TChatTitleViewDelegate.h"

@class MQSessionID, NSLayoutConstraint, NSMutableArray, NSString, TChatContainerView, TChatHisLeftView, TChatHisRightView, TChatMenuController, TChatTitleView, TXSplitView;

@interface TChatHistoryWindowController : QUIWindowController <NSSplitViewDelegate, TChatTitleViewDelegate, TChatHisLeftViewDelegate, HistoryHelperDelegate, TChatHisRightViewDelegate>
{
    id _monitor;
    BOOL _isOpening;
    BOOL _isModeBtnClicked;
    BOOL _isAnimationRuning;
    BOOL _isFullScreen;
    MQSessionID *_sessionId;
    unsigned long long _timeFilterHisRecordPanel;
    unsigned long long _timeFilterMessagePanel;
    unsigned long long _sessionFilterMessagePanel;
    NSMutableArray *_timeAndSessionDataSource;
    NSMutableArray *_timeDataSource;
    NSString *_keyword;
    NSLayoutConstraint *_leftViewWidthConstraint;
    TChatMenuController *_menuController;
    unsigned long long _windowMode;
    unsigned long long _hisStyle;
    TChatContainerView *_contentView;
    TChatHisRightView *_rightView;
    TChatHisLeftView *_leftView;
    TChatTitleView *_titleView;
    TXSplitView *_splitView;
    NSLayoutConstraint *_leftViewWidth;
    NSLayoutConstraint *_leftViewWidthGreater;
    NSLayoutConstraint *_leftViewWidthLess;
    NSLayoutConstraint *_rightViewWidth;
    NSLayoutConstraint *_rightViewWidthLess;
}

+ (id)defaultWindowController;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) BOOL isAnimationRuning; // @synthesize isAnimationRuning=_isAnimationRuning;
@property(nonatomic) BOOL isModeBtnClicked; // @synthesize isModeBtnClicked=_isModeBtnClicked;
@property(retain, nonatomic) NSLayoutConstraint *rightViewWidthLess; // @synthesize rightViewWidthLess=_rightViewWidthLess;
@property(retain, nonatomic) NSLayoutConstraint *rightViewWidth; // @synthesize rightViewWidth=_rightViewWidth;
@property(retain, nonatomic) NSLayoutConstraint *leftViewWidthLess; // @synthesize leftViewWidthLess=_leftViewWidthLess;
@property(retain, nonatomic) NSLayoutConstraint *leftViewWidthGreater; // @synthesize leftViewWidthGreater=_leftViewWidthGreater;
@property(retain, nonatomic) NSLayoutConstraint *leftViewWidth; // @synthesize leftViewWidth=_leftViewWidth;
@property(retain, nonatomic) TXSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) TChatTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TChatHisLeftView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) TChatHisRightView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) TChatContainerView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long hisStyle; // @synthesize hisStyle=_hisStyle;
@property(nonatomic) unsigned long long windowMode; // @synthesize windowMode=_windowMode;
@property(nonatomic) __weak TChatMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) NSLayoutConstraint *leftViewWidthConstraint; // @synthesize leftViewWidthConstraint=_leftViewWidthConstraint;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *timeDataSource; // @synthesize timeDataSource=_timeDataSource;
@property(retain, nonatomic) NSMutableArray *timeAndSessionDataSource; // @synthesize timeAndSessionDataSource=_timeAndSessionDataSource;
@property(nonatomic) BOOL isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) unsigned long long sessionFilterMessagePanel; // @synthesize sessionFilterMessagePanel=_sessionFilterMessagePanel;
@property(nonatomic) unsigned long long timeFilterMessagePanel; // @synthesize timeFilterMessagePanel=_timeFilterMessagePanel;
@property(nonatomic) unsigned long long timeFilterHisRecordPanel; // @synthesize timeFilterHisRecordPanel=_timeFilterHisRecordPanel;
@property(readonly, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)_saveViewsSize:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)RightView:(id)arg1 messagePanelSearchResultDeleteCount:(long long)arg2;
- (id)getFaceText:(int)arg1;
- (void)sessionMenuItemChanged:(unsigned long long)arg1;
- (void)timeMenuItemChanged:(unsigned long long)arg1;
- (void)searchOrFilterNotResult;
- (void)searchCountChanged:(long long)arg1;
- (void)ItemSelectChanged:(id)arg1 searcherModel:(id)arg2;
- (void)ItemSelectChanged:(id)arg1 sessionID:(id)arg2;
- (void)titleView:(id)arg1 textChanged:(id)arg2;
- (void)titleView:(id)arg1 clearSearchText:(id)arg2;
- (void)titleView:(id)arg1 messagePanelButtonClicked:(id)arg2;
- (void)titleView:(id)arg1 searchBarEnterKeyDown:(id)arg2;
- (void)titleView:(id)arg1 searchRuleButtonClicked:(id)arg2;
- (void)_reportSessionChanged;
- (void)_reportTimeChanged;
- (void)windowWillClose:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)_searchMessagePanelWithKeyword:(id)arg1 timeFilter:(unsigned long long)arg2 sessionFilter:(unsigned long long)arg3 titleView:(id)arg4;
- (void)_searchHisRecordPanel:(id)arg1 timeFilter:(unsigned long long)arg2 titleView:(id)arg3;
- (void)showWindowWithSessionId:(id)arg1 style:(unsigned long long)arg2;
- (void)_sessionMenuItemSelectedChanged:(unsigned long long)arg1;
- (void)_timeMenuItemSelectedChange:(unsigned long long)arg1;
- (void)showStyle:(unsigned long long)arg1;
- (void)expandCollapseWith:(unsigned long long)arg1;
- (void)initSubviews;
- (void)initData;
- (void)initState;
- (void)setWindowContentView;
- (void)showToast:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

