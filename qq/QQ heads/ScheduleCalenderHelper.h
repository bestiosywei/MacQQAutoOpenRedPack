//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ScheduleActionDelegate.h"

@class EKEventStore, NSMutableArray, NSString;

@interface ScheduleCalenderHelper : NSObject <ScheduleActionDelegate>
{
    EKEventStore *_eventStore;
    NSMutableArray *_scheduleOptQueue;
    unsigned int _optIndex;
    BOOL _bOpting;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)doCgiChangeShortUrl:(id)arg1 Title:(id)arg2 StartDate:(double)arg3 EndDate:(double)arg4 Notes:(id)arg5 Location:(id)arg6;
- (id)parseShortURL:(id)arg1;
- (id)createPostBody:(id)arg1;
- (void)addActionToQueue:(short)arg1 scheduleId:(id)arg2;
- (void)OnActionResult:(id)arg1;
- (void)deleteScheduleFromCalender:(id)arg1 bAction:(BOOL)arg2;
- (void)addScheduleToCalender:(id)arg1 Title:(id)arg2 StartDate:(double)arg3 EndDate:(double)arg4 Notes:(id)arg5 Location:(id)arg6;
- (BOOL)isAuthorizedForSchedule;
- (void)actionNextScheduleCalender;
- (void)updateScheduleCalender:(id)arg1 bRequest:(BOOL)arg2;
- (void)deleteScheduleFromCalender:(id)arg1;
- (void)addScheduleToCalender:(id)arg1 bRequest:(BOOL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

