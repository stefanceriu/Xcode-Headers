//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAppIDAbstractFlightCheck.h>

@class DVTPortalProfileFeature;

@interface IDEAppIDFeatureFlightCheck : IDEAppIDAbstractFlightCheck
{
    DVTPortalProfileFeature *_feature;
}

@property(readonly, nonatomic) DVTPortalProfileFeature *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (id)resolvingTitle;
- (id)pastTitle;
- (id)title;
- (id)expectedFeaturesWithError:(id *)arg1;
- (id)initWithAppIDFeatureCoordinator:(id)arg1 feature:(id)arg2;

@end

