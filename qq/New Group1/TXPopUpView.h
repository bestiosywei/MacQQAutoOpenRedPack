//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

#import "NSMenuDelegate.h"

@class NSObject<TXPopUpViewDelegate>, NSString, NSTextField;

@interface TXPopUpView : NSPopUpButton <NSMenuDelegate>
{
    NSString *mOriginTitle;
    NSTextField *mTextField;
    NSObject<TXPopUpViewDelegate> *mDelegate;
}

@property(retain) NSString *originTitle; // @synthesize originTitle=mOriginTitle;
@property NSObject<TXPopUpViewDelegate> *delegate; // @synthesize delegate=mDelegate;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)selectionDidEnd;
- (void)insertItemWithObjectValue:(id)arg1 atIndex:(int)arg2;
- (void)addItemsWithObjectValues:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
