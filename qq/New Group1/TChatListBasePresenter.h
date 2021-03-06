//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TChatListPresenterProtocol.h"

@class NSArray, NSString;

@interface TChatListBasePresenter : NSObject <TChatListPresenterProtocol>
{
    BOOL _showSelectAllBtn;
    BOOL _singleCheck;
    NSArray *_dataArray;
    id <TChatPickerDataProtocol> _dataAdapter;
    id _checkItems;
    id _itemCheckState;
    NSString *_rootCellNibName;
    NSString *_childCellNibName;
    long long _oldMemberCount;
    NSArray *_oldSelectedUins;
    long long _pickerType;
}

@property(nonatomic) long long pickerType; // @synthesize pickerType=_pickerType;
@property(nonatomic) BOOL singleCheck; // @synthesize singleCheck=_singleCheck;
@property(retain, nonatomic) NSArray *oldSelectedUins; // @synthesize oldSelectedUins=_oldSelectedUins;
@property(nonatomic) long long oldMemberCount; // @synthesize oldMemberCount=_oldMemberCount;
@property(nonatomic) BOOL showSelectAllBtn; // @synthesize showSelectAllBtn=_showSelectAllBtn;
@property(retain, nonatomic) NSString *childCellNibName; // @synthesize childCellNibName=_childCellNibName;
@property(retain, nonatomic) NSString *rootCellNibName; // @synthesize rootCellNibName=_rootCellNibName;
@property(copy, nonatomic) id itemCheckState; // @synthesize itemCheckState=_itemCheckState;
@property(copy, nonatomic) id checkItems; // @synthesize checkItems=_checkItems;
@property(retain, nonatomic) id <TChatPickerDataProtocol> dataAdapter; // @synthesize dataAdapter=_dataAdapter;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)setExpandedItemUin:(id)arg1;
- (void)outlineView:(id)arg1 actionWithItem:(id)arg2;
- (void)onClickOutlineView:(id)arg1;
- (void)refreshOutlineView:(id)arg1;
- (void)configOutlineView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

