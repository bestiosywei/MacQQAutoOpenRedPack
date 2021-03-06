//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Helper)
+ (id)dateOfDayInterval:(int)arg1;
+ (int)dayIntervalOfYear:(int)arg1 month:(int)arg2 day:(int)arg3;
+ (id)dateByDayOffset:(int)arg1 beginWithHour:(int)arg2;
+ (id)dateOfTomorrowWithHour:(int)arg1;
+ (id)dateOfTodayWithHour:(int)arg1;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (id)dateFromatRencentTimeIntervalToday:(double)arg1 displayHMS:(BOOL)arg2;
+ (id)dateFromatFavoritesTimeInterval:(double)arg1 displayHMS:(BOOL)arg2;
+ (id)dateFromatRencentTimeInterval:(double)arg1 displayHMS:(BOOL)arg2;
+ (id)dateFromatFromTimeInterval:(double)arg1;
+ (id)getQzoneFormatTimeNew:(long long)arg1;
+ (id)getQzoneFormatTime4:(long long)arg1;
+ (id)getQzoneFormatTime3:(long long)arg1;
+ (id)getQzoneFormatTime2:(long long)arg1 isFakeData:(BOOL)arg2;
+ (id)getQzoneFormatTime:(long long)arg1;
+ (id)getRefreshFormatTime:(long long)arg1;
+ (id)getChatTimeCellFormatTime:(long long)arg1;
+ (id)dbFormatString;
+ (id)timestampFormatString;
+ (id)timeFormatString;
+ (id)dateFormatString;
+ (id)QZoneDateFormat:(id)arg1;
+ (id)convertDateFromString:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (id)stringFromDate:(id)arg1 withFormat:(id)arg2;
+ (id)dateFromString:(id)arg1 withFormat:(id)arg2;
+ (id)dateFromString:(id)arg1;
+ (id)stringDaysAgoAgainstMidnightForVoice:(double)arg1;
+ (id)stringDaysAgoAgainstMidnightWithoutSec:(double)arg1;
+ (id)stringDaysAgoAgainstMidnight:(double)arg1;
+ (id)dateStringForPublicPlatformCellFromInterval:(double)arg1;
+ (id)stringDaysAgoAgainstMidnightForChatTime:(double)arg1;
+ (id)hourMinSecondTime:(double)arg1;
+ (void)getToday:(int *)arg1 month:(int *)arg2 day:(int *)arg3;
+ (int)dayOfYear:(int)arg1 month:(int)arg2 day:(int)arg3;
+ (int)getDayOfWeekOfTime:(double)arg1;
+ (void)getDayOfTime:(double)arg1 year:(int *)arg2 month:(int *)arg3 day:(int *)arg4;
+ (id)getMinuteSecond:(double)arg1;
+ (id)getHourMinute:(double)arg1;
+ (BOOL)daysAgoInSameYear:(double)arg1;
+ (unsigned long long)daysAgoAgainstMidnight:(double)arg1;
+ (id)sharedThreadSafeDateFormatter;
- (int)dayInterval;
- (BOOL)later:(id)arg1;
- (BOOL)earlier:(id)arg1;
- (id)dateComponents;
- (BOOL)isEqualToDateIgnoringTime:(id)arg1;
- (id)dateBySubtractingDays:(long long)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (BOOL)isInSameDayAsDate:(id)arg1;
- (id)endOfDay;
- (id)endOfWeek;
- (id)beginningOfDay;
- (id)beginningOfWeek;
- (id)stringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)dateStringWithFormat:(id)arg1;
- (id)string;
- (id)stringWithFormat:(id)arg1;
- (unsigned long long)weekday;
- (id)stringDaysAgo;
- (id)hourTime;
- (unsigned long long)daysAgo;
@end

