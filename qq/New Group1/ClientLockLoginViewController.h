//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MQColorTitleButton, NSDictionary, NSTextField, TXHoverButton;

@interface ClientLockLoginViewController : NSViewController
{
    long long _currentType;
    NSDictionary *_dicPGInfo;
    NSTextField *_txErrorInfo;
    TXHoverButton *_btnStepBack;
    MQColorTitleButton *_btnOtherCheck;
    id <ClientLockManagerDelegate> _delegate;
}

+ (id)textShadow;
+ (id)linkTextAttribute:(unsigned long long)arg1;
+ (id)buttonTextAttribute:(unsigned long long)arg1;
+ (id)tipTextAttribute:(long long)arg1;
+ (id)tipTextAttribute;
+ (id)titleTextAttribute;
+ (id)hyperTextAttribute;
+ (id)normalTextAttribute;
@property(retain) NSDictionary *dicPGInfo; // @synthesize dicPGInfo=_dicPGInfo;
@property long long currentType; // @synthesize currentType=_currentType;
@property id <ClientLockManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onUserInputDone:(id)arg1;
- (void)onOtherCheck:(id)arg1;
- (void)onStepBack:(id)arg1;
- (void)setInitialFocus;
- (void)setCheckErrorState:(id)arg1;
- (id)initWithType:(long long)arg1 withPGItemInfo:(id)arg2;

@end
