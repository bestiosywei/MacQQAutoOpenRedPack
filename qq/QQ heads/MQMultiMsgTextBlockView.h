//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQTextBlockBaseView.h"

@class BHMessageModel, MQBubbleView, NSArray, NSMutableDictionary, NSString, NSTextField, NSTrackingArea, TXColorView;

@interface MQMultiMsgTextBlockView : MQTextBlockBaseView
{
    MQBubbleView *_baseView;
    TXColorView *_bgView;
    NSTextField *_textField;
    NSTextField *_sumField;
    NSTextField *_sourceField;
    NSArray *_msgList;
    NSMutableDictionary *_msgInfo;
    double _msgHeight;
    NSTrackingArea *_trackingArea;
    BHMessageModel *_msgModel;
    NSString *_displayName;
}

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) BHMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void).cxx_destruct;
- (BOOL)TryDblClk:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)setMouseTrack;
- (void)setDrawSelectedRange:(BOOL)arg1;
- (void)onSelectedChanged;
- (void)drawBubbleBorder;
- (void)layout;
- (BOOL)isFlipped;
- (void)onGetMultiForwardMsg:(BOOL)arg1 Messages:(id)arg2 Error:(id)arg3;
- (void)getForwardMsg;
- (void)parseForwardMsg;
- (void)showMultiMsg:(id)arg1;
- (void)formatTextField:(id)arg1;
- (void)buildUI;
- (struct CGSize)layoutWithMaxSize:(struct CGSize)arg1 inVisibleRect:(struct CGRect)arg2;
- (void)dealloc;
- (void)onFrameChanged:(id)arg1;
- (void)update:(id)arg1;
- (id)initWithMessageModel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
