//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSimulatedMetricsInferrer.h>

@class IBStoryboardDocument, NSOrderedSet;

@interface IBStoryboardMetricsInferrer : IBSimulatedMetricsInferrer
{
    NSOrderedSet *_selectedOrPreviouslySelectedMembersFromOldToFresh;
    NSOrderedSet *_tieBreakersFromOldToNew;
}

@property(retain, nonatomic) NSOrderedSet *tieBreakersFromOldToNew; // @synthesize tieBreakersFromOldToNew=_tieBreakersFromOldToNew;
@property(copy, nonatomic) NSOrderedSet *selectedOrPreviouslySelectedMembersFromOldToFresh; // @synthesize selectedOrPreviouslySelectedMembersFromOldToFresh=_selectedOrPreviouslySelectedMembersFromOldToFresh;
- (void).cxx_destruct;
- (void)rebuildInferredMetrics;
- (void)recursivelyApplyMetricsInheritenceToController:(struct NSObject *)arg1 visited:(id)arg2 inheritanceSegues:(id)arg3;
- (id)globallyInheritedSimulatedMetrics;
- (void)didRemoveSegue:(id)arg1;
- (void)didAddSegue:(id)arg1;
- (void)noteMember:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)documentDidUnarchiveWithTieBreakersFromOldToNew:(id)arg1;
@property(readonly, nonatomic) IBStoryboardDocument *storyboard;

@end

