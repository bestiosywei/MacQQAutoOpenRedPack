//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class MQPopoverWindowFrame, NSView;

@interface MQSearchResultWindow : NSPanel
{
    int _arrowDirection;
    MQPopoverWindowFrame *_frameView;
    NSView *_resultView;
    struct CGPoint _arrowOffsetPoint;
}

@property(nonatomic) NSView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) MQPopoverWindowFrame *frameView; // @synthesize frameView=_frameView;
@property(nonatomic) struct CGPoint arrowOffsetPoint; // @synthesize arrowOffsetPoint=_arrowOffsetPoint;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)configFrameView;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)resultRectForFrameRect:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

