//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatHistoryBaseViewController.h"

#import "TChatHisViewDelegate.h"

@class NSMutableArray, NSString, NSTextField, TChatHisView, TXColorView;

@interface TChatHisMessageViewController : TChatHistoryBaseViewController <TChatHisViewDelegate>
{
    TChatHisView *_chatView;
    NSString *_keyword;
    NSMutableArray *_seletedItems;
    NSTextField *_timeLabel;
    TXColorView *_timeContainer;
}

@property(retain, nonatomic) TXColorView *timeContainer; // @synthesize timeContainer=_timeContainer;
@property(retain, nonatomic) NSTextField *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSMutableArray *seletedItems; // @synthesize seletedItems=_seletedItems;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) TChatHisView *chatView; // @synthesize chatView=_chatView;
- (void).cxx_destruct;
- (void)hisView:(id)arg1 clickedMenuItem:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1 row:(long long)arg2 rowSet:(id)arg3;
- (void)clickDisable:(id)arg1 row:(long long)arg2 rowSet:(id)arg3;
- (void)deleteSelectedItems:(id)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)_setTimeLable;
- (void)_initData;
- (void)refreshUIDown:(id)arg1;
- (void)refreshUIUp:(id)arg1;
- (void)refreshUI:(id)arg1;
- (void)reloadMsgAfterRoaming:(id)arg1 completion:(id)arg2;
- (void)refreshContext:(id)arg1 completion:(id)arg2;
- (unsigned long long)filter;
- (id)currentDate;
- (void)onCleanAllItems;
- (void)reloadDataWithSessionId:(id)arg1;
- (void)createChatView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (void)handleDataSourceChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

