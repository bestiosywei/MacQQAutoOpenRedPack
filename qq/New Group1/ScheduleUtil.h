//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ScheduleUtil : NSObject
{
}

+ (long long)lastDayInMonthOfInterval:(unsigned long long)arg1;
+ (long long)diffDaysFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
+ (id)componentsOfInterval:(unsigned long long)arg1;
+ (id)optType2String:(long long)arg1;
+ (id)getErrorMessageOfType:(long long)arg1 result:(long long)arg2 dict:(id)arg3;
+ (int)getServerTimeDiff;
+ (double)getCurrentLocalTime;
+ (id)getNetworkError;
+ (id)GetSubStr:(id)arg1;
+ (id)GetSubStringForSummary:(id)arg1 Length:(unsigned long long)arg2;
+ (BOOL)ReportData:(id)arg1;
+ (id)getTimeStringForQUINT64:(unsigned long long)arg1;
+ (unsigned long long)SplitStampTime:(unsigned long long)arg1;
+ (unsigned long long)SplitStampDate:(unsigned long long)arg1;
+ (long long)getyear:(unsigned long long)arg1;
+ (long long)getDay:(unsigned long long)arg1;
+ (id)getStrWeek:(unsigned long long)arg1;
+ (long long)getWeek:(unsigned long long)arg1;
+ (id)getName:(id)arg1 sourcetype:(unsigned short)arg2 sourceid:(id)arg3;
+ (BOOL)RepeatOptionsIfComplyrules:(long long)arg1 beginTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
+ (id)RepeatOptionsIndexToString:(long long)arg1;
+ (id)RemindOptionsIndexToString:(long long)arg1;
+ (BOOL)isRemindUser;
+ (id)getScheduleEmptyListSectionTextValueByData:(unsigned long long)arg1;
+ (id)getScheduleListSectionTextValueByData:(unsigned long long)arg1;
+ (BOOL)isYesterday:(unsigned long long)arg1;
+ (BOOL)isTomorrow:(unsigned long long)arg1;
+ (BOOL)isToday:(unsigned long long)arg1;
+ (unsigned long long)distanceBetweenDateTimeStamp:(unsigned long long)arg1;
+ (id)getFormattedTimeStringForQUint:(unsigned long long)arg1 dataAndTime:(BOOL)arg2;
+ (id)getFormattedDateStringWithoutTime:(id)arg1;
+ (id)getFormattedTimeStringWithoutDate:(id)arg1;
+ (id)getFormattedTimeString:(id)arg1 dataAndTime:(BOOL)arg2;
+ (id)getTimeString:(unsigned long long)arg1;

@end

