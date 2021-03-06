//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TChatBaseViewModel, TChatCellBuilderOption, TChatHrAssistantView;

@interface TChatHrAssistantControl : NSObject
{
    TChatHrAssistantView *_cell;
    TChatBaseViewModel *_viewModel;
    TChatCellBuilderOption *_option;
}

@property(nonatomic) __weak TChatCellBuilderOption *option; // @synthesize option=_option;
@property(readonly, nonatomic) TChatBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak TChatHrAssistantView *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)destory;
- (void)parseMsgModel;
- (void)doubleClickAction:(id)arg1;
- (void)resetView:(id)arg1;

@end

