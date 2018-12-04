//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSDate, NSString, NSTimer;

@interface AVStatusLabel : NSTextField
{
    NSDate *_startTime;
    NSTimer *_timer;
    BOOL _curIsTruncWording;
    NSString *_truncFmt;
    NSString *_truncReplace;
    NSString *_normalText;
    NSString *_newsText;
    BOOL _isNeedStart;
}

@property(nonatomic) BOOL isNeedStart; // @synthesize isNeedStart=_isNeedStart;
@property(readonly, copy, nonatomic) NSString *newsText; // @synthesize newsText=_newsText;
@property(retain, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
- (id)truncationNameInText:(id)arg1 withReplaceStr:(id)arg2 limitLength:(double)arg3 withFont:(id)arg4;
- (void)stopNews:(id)arg1;
- (void)onTimeUpdateUI:(id)arg1;
- (void)showCurTime;
- (void)breakingNews:(id)arg1;
- (void)stopTiming;
- (void)startTiming;
- (void)calcCurName;
- (void)setStringValueWithTrunc:(id)arg1 withReplaceStr:(id)arg2;
- (void)viewDidEndLiveResize;
- (void)setStringValue:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end
