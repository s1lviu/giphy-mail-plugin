//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSDateFormatter, NSFont;

@interface DateCell : NSTextFieldCell
{
    BOOL _forceTextColor;
    _Bool _lastStringWasRTL;
    long long _dateDetailLevel;
    double _lastWidth;
}

+ (void)_resetDateFormats:(id)arg1;
+ (void)initialize;
- (void)_dateCellCommonInit;
- (void)_initDateFormatter;
- (id)_newMonthWidthReferenceDates;
- (id)_newWeekdayWidthReferenceDatesFirstWeekday:(NSUInteger *)arg1;
- (BOOL)_readWidthsFromDefaults;
- (void)_saveWidthsToDefaults;
- (void)_updateDateColumnDetailLevelWidths;
- (void)_updateDateColumnDetailLevels;
- (double)_widthOfLongestDateStringWithLevel:(long long)arg1 format:(id)arg2;
- (double)_widthOfStringWithTimeFormat:(id)arg1 withDatePrefix:(id)arg2;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (id)accessibilityValue;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (void)awakeFromNib;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long dateDetailLevel; // @synthesize dateDetailLevel=_dateDetailLevel;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)drawingAttributes;
@property(nonatomic) BOOL forceTextColor; // @synthesize forceTextColor=_forceTextColor;
@property(retain) NSDateFormatter *formatter;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSFont *lastFont;
@property(nonatomic) _Bool lastStringWasRTL; // @synthesize lastStringWasRTL=_lastStringWasRTL;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(readonly, nonatomic) double minimumWidth;
- (void)setAlignment:(NSUInteger)arg1;
- (void)setDrawingAttributes:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
@property(nonatomic) BOOL underlinesText;
- (id)stringValue;

@end

