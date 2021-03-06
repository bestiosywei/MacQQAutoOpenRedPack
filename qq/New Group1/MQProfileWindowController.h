//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class MQSessionID, NSViewController, TXColorView, WeatherProfileViewController;

@interface MQProfileWindowController : NSWindowController
{
    TXColorView *_containerView;
    NSViewController *_profileViewController;
    WeatherProfileViewController *_weatherViewController;
    MQSessionID *_sessionId;
}

@property(retain, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)showWindowAndMakeFirstResponder;
- (void)layoutProfileView:(id)arg1;
- (void)generateWindowProfileWithForecastInfo:(id)arg1;
- (void)generateSelfProfileViewWithUin:(unsigned long long)arg1;
- (void)generateDiscussProfileViewWithUin:(unsigned long long)arg1;
- (void)generateGroupProfileViewWithUin:(unsigned long long)arg1;
- (void)generateBuddyProfileViewWithUin:(unsigned long long)arg1;
- (void)generateGroupProfileViewWithSessionID:(id)arg1 memberUin:(id)arg2;
- (void)generateGroupProfileViewWithSessionID:(id)arg1 groupCode:(unsigned long long)arg2;
- (void)generateGroupProfileViewWithGroup:(id)arg1;
- (void)generateProfileViewWithSessionID:(id)arg1;
- (void)generateProfileViewWithSource:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

@end

