//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "TChatHisContactsPresenterDelegate.h"
#import "TChatHisLeftToolBarDelegate.h"
#import "TChatHisSearchPresenterDelegate.h"

@class NSArray, NSDate, NSImageView, NSLayoutConstraint, NSString, NSTableView, NSTextField, RFOverlayScrollView, TChatHisContactTableView, TChatHisContactsPresenter, TChatHisLeftToolBar, TChatHisSearchPresenter, TXColorView;

@interface TChatHisLeftView : NSView <TChatHisContactsPresenterDelegate, TChatHisSearchPresenterDelegate, TChatHisLeftToolBarDelegate>
{
    BOOL _isFilterMode;
    id <TChatHisLeftViewDelegate> _delegate;
    unsigned long long _sessionFilter;
    unsigned long long _timeFilter;
    TChatHisLeftToolBar *_leftToolBar;
    TChatHisContactTableView *_contactsTableView;
    NSTableView *_searchTableView;
    TXColorView *_containerBody;
    RFOverlayScrollView *_contactsScrollView;
    RFOverlayScrollView *_searchScrollView;
    TChatHisContactsPresenter *_contactsPresenter;
    TChatHisSearchPresenter *_searchPresenter;
    NSArray *_searchDataSource;
    NSString *_key;
    NSDate *_searchFromDate;
    id _searchingBlock;
    id _filterEndBlock;
    id _searchEngBlock;
    NSLayoutConstraint *_leftToolBarHeightConstraint;
    long long _allResultCount;
    NSView *_containerView;
    NSImageView *_imageView;
    NSTextField *_textField;
}

@property BOOL isFilterMode; // @synthesize isFilterMode=_isFilterMode;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long allResultCount; // @synthesize allResultCount=_allResultCount;
@property(retain, nonatomic) NSLayoutConstraint *leftToolBarHeightConstraint; // @synthesize leftToolBarHeightConstraint=_leftToolBarHeightConstraint;
@property(copy, nonatomic) id searchEngBlock; // @synthesize searchEngBlock=_searchEngBlock;
@property(copy, nonatomic) id filterEndBlock; // @synthesize filterEndBlock=_filterEndBlock;
@property(copy, nonatomic) id searchingBlock; // @synthesize searchingBlock=_searchingBlock;
@property(retain, nonatomic) NSDate *searchFromDate; // @synthesize searchFromDate=_searchFromDate;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSArray *searchDataSource; // @synthesize searchDataSource=_searchDataSource;
@property(retain, nonatomic) TChatHisSearchPresenter *searchPresenter; // @synthesize searchPresenter=_searchPresenter;
@property(retain, nonatomic) TChatHisContactsPresenter *contactsPresenter; // @synthesize contactsPresenter=_contactsPresenter;
@property(retain, nonatomic) RFOverlayScrollView *searchScrollView; // @synthesize searchScrollView=_searchScrollView;
@property(retain, nonatomic) RFOverlayScrollView *contactsScrollView; // @synthesize contactsScrollView=_contactsScrollView;
@property(retain, nonatomic) TXColorView *containerBody; // @synthesize containerBody=_containerBody;
@property(retain) NSTableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain) TChatHisContactTableView *contactsTableView; // @synthesize contactsTableView=_contactsTableView;
@property(retain) TChatHisLeftToolBar *leftToolBar; // @synthesize leftToolBar=_leftToolBar;
@property unsigned long long timeFilter; // @synthesize timeFilter=_timeFilter;
@property unsigned long long sessionFilter; // @synthesize sessionFilter=_sessionFilter;
@property __weak id <TChatHisLeftViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timeMenuSelectedChanged:(id)arg1 sessionFilter:(unsigned long long)arg2;
- (void)timeMenuSelectedChanged:(id)arg1 timeFilter:(unsigned long long)arg2;
- (void)searchOrFilterNotResult;
- (void)searchCountChanged:(long long)arg1;
- (void)ItemSelectChanged:(id)arg1 searcherModel:(id)arg2;
- (void)ItemSelectChanged:(id)arg1 sessionID:(id)arg2;
- (void)_createSearchTable;
- (void)_createContactsTable;
- (void)_isFilterMode;
- (void)_showNoDataView;
- (void)_initData;
- (void)_initUI;
- (void)showLeftView;
- (void)setSelectedItemWithSessionID:(id)arg1;
- (void)clearSelectedItem;
- (void)setDefaultMode;
- (void)cancelSearch;
- (void)searchWithKey:(id)arg1 timeFilter:(unsigned long long)arg2 sessionFilter:(unsigned long long)arg3 completion:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
