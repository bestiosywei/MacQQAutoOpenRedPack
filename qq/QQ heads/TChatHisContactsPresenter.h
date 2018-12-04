//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQContactsListPresenter.h"

#import "TChatHisCellItemDelegate.h"
#import "TChatHisCellSectionDelegate.h"
#import "TChatHisRowViewDelegate.h"

@class MQContacts, MQSessionID, NSString;

@interface TChatHisContactsPresenter : MQContactsListPresenter <TChatHisRowViewDelegate, TChatHisCellSectionDelegate, TChatHisCellItemDelegate>
{
    id <TChatHisContactsPresenterDelegate> _delegate;
    id _selectedItem;
    MQContacts *_contactGroup;
    MQContacts *_contactDiscuss;
    MQContacts *_contactRecent;
    MQContacts *_contactDevice;
    MQContacts *_contactFriendFolder;
    MQContacts *_contactTempChat;
    id _willCleanSession;
    MQSessionID *_sessionId;
}

@property(retain, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) id willCleanSession; // @synthesize willCleanSession=_willCleanSession;
@property(retain, nonatomic) MQContacts *contactTempChat; // @synthesize contactTempChat=_contactTempChat;
@property(retain, nonatomic) MQContacts *contactFriendFolder; // @synthesize contactFriendFolder=_contactFriendFolder;
@property(retain, nonatomic) MQContacts *contactDevice; // @synthesize contactDevice=_contactDevice;
@property(retain, nonatomic) MQContacts *contactRecent; // @synthesize contactRecent=_contactRecent;
@property(retain, nonatomic) MQContacts *contactDiscuss; // @synthesize contactDiscuss=_contactDiscuss;
@property(retain, nonatomic) MQContacts *contactGroup; // @synthesize contactGroup=_contactGroup;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
@property __weak id <TChatHisContactsPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellRightDown:(id)arg1 event:(id)arg2;
- (void)sectionMouseDown:(id)arg1 event:(id)arg2;
- (void)_cleanSessionWithRoman:(BOOL)arg1;
- (void)onHisOpenInfo:(id)arg1;
- (void)onHisSendMsg:(id)arg1;
- (void)onHisClearCell:(id)arg1;
- (void)drawSelectionForContactRowView:(id)arg1 rect:(struct CGRect)arg2;
- (void)_selectionChange;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (void)setOutlineView:(id)arg1;
- (void)selectedItemWithSessinId:(id)arg1;
- (void)selectedFirstItem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
