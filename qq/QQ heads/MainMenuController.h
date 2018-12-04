//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSMenu;

@interface MainMenuController : NSObject
{
    NSMenu *mainMenu;
    NSMenu *QQMenu;
    NSMenu *contactMenu;
    NSMenu *stateMenu;
    NSMenu *formatMenu;
    NSMenu *_viewMenu;
    NSMenu *windowMenu;
    NSMenu *applicationMenu;
    NSMenu *helpMenu;
    BOOL isLoadin;
    NSEvent *_eventMonitor;
    BOOL _isCurrentWarnQuitHintShow;
    BOOL _useRefactoringVersion;
}

+ (id)sharedInstance;
@property BOOL useRefactoringVersion; // @synthesize useRefactoringVersion=_useRefactoringVersion;
@property(readonly) NSMenu *windowMenu; // @synthesize windowMenu;
@property(readonly) NSMenu *contactMenu; // @synthesize contactMenu;
- (void).cxx_destruct;
- (void)onShowMemberList:(id)arg1;
- (void)onHideOffline:(id)arg1;
- (void)saveCmdWConfig:(BOOL)arg1;
- (void)ChangeStateOfRemoveSingleSessionMenuItem:(BOOL)arg1;
- (void)setCmdWMenuAction:(BOOL)arg1;
- (void)UpdateHotKey:(struct _KeyCombo)arg1;
- (void)showStatus:(long long)arg1;
- (void)removeCurrentSessionOrCloseWindow;
- (void)EnableStockWidget:(BOOL)arg1;
- (void)EnableWeatherWidget:(BOOL)arg1;
- (void)EnableSwiftlyMain:(BOOL)arg1;
- (void)replaceShortcutKeyToTitle:(id)arg1;
- (void)loadInSuccessWithState:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setupViewMenu:(id)arg1;
- (id)init;

@end
