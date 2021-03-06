//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray;

@interface MQWeatherChartBaseView : NSView
{
    NSArray *_points;
    double _animationDuration;
    long long currentTag;
    NSArray *_values;
    struct MQValueRange _valueRanges;
}

@property(nonatomic) struct MQValueRange valueRanges; // @synthesize valueRanges=_valueRanges;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)pointsForArray:(id)arg1;
- (struct MQValueRange)graphRangeFromValue:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

