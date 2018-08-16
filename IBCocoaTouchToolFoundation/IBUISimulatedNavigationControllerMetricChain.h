//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@class IBUIMetricRepresentation;

@interface IBUISimulatedNavigationControllerMetricChain : IBUISimulatedMetricChain
{
    BOOL _navigationBarHidden;
    BOOL _toolbarHidden;
    IBUIMetricRepresentation *_navigationBar;
    IBUIMetricRepresentation *_toolbar;
}

@property(readonly, nonatomic) IBUIMetricRepresentation *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) IBUIMetricRepresentation *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) BOOL toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(readonly, nonatomic) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (void).cxx_destruct;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithNavigationBarHidden:(BOOL)arg1 toolbarHidden:(BOOL)arg2 navigationBar:(id)arg3 toolbar:(id)arg4 precedingMetric:(id)arg5;

@end

