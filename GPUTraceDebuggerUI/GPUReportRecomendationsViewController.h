//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class GPUReportSubSection, NSFont, NSTableView;

__attribute__((visibility("hidden")))
@interface GPUReportRecomendationsViewController : NSViewController
{
    GPUReportSubSection *_reportSubSection;
    NSTableView *_recomendationTable;
}

@property(nonatomic) __weak NSTableView *recomendationTable; // @synthesize recomendationTable=_recomendationTable;
@property(nonatomic) __weak GPUReportSubSection *reportSubSection; // @synthesize reportSubSection=_reportSubSection;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSFont *recomendationFont;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 subSection:(id)arg3;

@end

