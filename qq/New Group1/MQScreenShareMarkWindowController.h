//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class MQScreenShareMarkViewController;

@interface MQScreenShareMarkWindowController : NSWindowController
{
    MQScreenShareMarkViewController *_markViewController;
}

+ (struct CGRect)defaultFrame;
@property(readonly) MQScreenShareMarkViewController *markViewController; // @synthesize markViewController=_markViewController;
- (void)clearAllMark;
- (void)hideToolKitFromWindow:(id)arg1;
- (void)updateTollKitFrame:(struct CGRect)arg1;
- (void)showToolKitInWindow:(id)arg1 viewRect:(struct CGRect)arg2;
- (void)windowDidLoad;
- (void)updateFrame:(struct CGRect)arg1;
- (void)parentWindowFrameChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

