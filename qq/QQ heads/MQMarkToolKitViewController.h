//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MQCustomMenuDelegate.h"

@class MQCustomMenu, MQSSWidthPanleMenuItem, NSButton, NSColor, NSMutableArray, NSString, NSTextField, TXColorView;

@interface MQMarkToolKitViewController : NSViewController <MQCustomMenuDelegate>
{
    NSMutableArray *_buttonArray;
    MQCustomMenu *_textSizeMenu;
    MQCustomMenu *_lineColorMenu;
    MQCustomMenu *_lineWidthMenu;
    int _curMarkType;
    TXColorView *_colorView;
    NSTextField *_fontSizeText;
    MQSSWidthPanleMenuItem *_paintView;
    NSButton *_paintArrowBtn;
    int _screenShareType;
    id <MQMarkToolKitViewControllerDelegate> _delegate;
}

@property(nonatomic) int screenShareType; // @synthesize screenShareType=_screenShareType;
@property int curMarkType; // @synthesize curMarkType=_curMarkType;
@property id <MQMarkToolKitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setLatestConfigWithSize:(long long)arg1 color:(id)arg2;
- (void)configLineWidthDefault;
- (void)configButtonColorDefault;
- (void)getLatestConfigWithType:(int)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)notifySelectMarkType:(int)arg1;
@property(nonatomic) double fontSize;
@property(retain, nonatomic) NSColor *lineColor;
@property(nonatomic) double lineWidth;
- (void)chooseRightPosForMenu:(id)arg1;
- (void)clearButtonClick:(id)arg1;
- (void)widthOrTextButtonClick:(id)arg1;
- (void)lineColorButtonClick:(id)arg1;
- (void)textButtonClick:(id)arg1;
- (void)rectButtonClick:(id)arg1;
- (void)penButtonClick:(id)arg1;
- (void)textMenuItemClick:(id)arg1;
- (void)widthMenuItemClick:(id)arg1;
- (void)colorMenuItemClick:(id)arg1;
- (id)itemOfMenu:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)itemCountOfMenu:(id)arg1;
- (void)dealloc;
- (void)setWeakSelectedButtonType:(int)arg1;
- (void)resetMarkToolKit;
- (id)menuWindowIDs;
- (void)hideAllMenu;
- (void)initMenu;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
