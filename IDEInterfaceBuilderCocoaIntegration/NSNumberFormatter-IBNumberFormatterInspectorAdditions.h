//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

@interface NSNumberFormatter (IBNumberFormatterInspectorAdditions)
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedTenOhMaximum;
+ (id)keyPathsForValuesAffectingIbInspectedTenOhMinimum;
+ (id)keyPathsForValuesAffectingIbInspectedNumberStyle;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibUnarchiveNilDefaultStringForKey:(id)arg1 withUnarchiver:(id)arg2 xcode5DefaultValue:(id)arg3;
- (void)ibArchiveNilDefaultString:(id)arg1 forKey:(id)arg2 withArchiver:(id)arg3 xcode5DefaultValue:(id)arg4;
- (id)ibMaximumDefaultValue;
- (id)ibMinimumDefaultValue;
- (void)setIbInspectedTenOhMaximum:(id)arg1;
- (id)ibInspectedTenOhMaximum;
- (void)setIbInspectedTenOhMinimum:(id)arg1;
- (id)ibInspectedTenOhMinimum;
- (void)setIbInspectedNumberStyle:(long long)arg1;
- (long long)ibInspectedNumberStyle;
- (SEL)ibExternalSampleValueTooltipRelatedSelector;
- (id)ibExternalSampleValueFormatted;
- (id)ibExternalSampleValueDefault;
- (void)setIbInspectedFormatterBehavior:(long long)arg1;
- (long long)ibInspectedFormatterBehavior;
- (BOOL)ibInspectedShowsNegativeNumbersInRed;
- (void)setIbInspectedShowsNegativeNumbersInRed:(BOOL)arg1;
@end

