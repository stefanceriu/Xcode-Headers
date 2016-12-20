//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CALayerDelegate.h"

@class CALayer, NSArray, NSMapTable, NSMutableArray, NSString;

@interface XCSUIIntegrationSteppedProgressView : NSView <CALayerDelegate>
{
    NSArray *_possibleSteps;
    long long _currentStep;
    CALayer *_rootLayer;
    NSMutableArray *_labelLayers;
    NSMapTable *_buddyLayers;
    id <XCSUIIntegrationSteppedProgressViewLabelProvider> _labelProvider;
}

@property __weak id <XCSUIIntegrationSteppedProgressViewLabelProvider> labelProvider; // @synthesize labelProvider=_labelProvider;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)reloadInformativeString;
- (void)reloadLabel;
- (void)repositionLabels;
- (void)layoutLabels;
@property(nonatomic) long long currentStep;
@property(copy, nonatomic) NSArray *possibleSteps;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

