//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, IDEProfileQualification, IDEProvisioningProfileInfoViewController;

@interface IDEProvisioningProfileDownloaderDetailViewController : IDEViewController
{
    BOOL _hasUpdatedPortalProfile;
    IDEProfileQualification *_qualification;
    DVTObservingToken *_qualificationObserver;
    DVTObservingToken *_hasUpdatedPortalProfileObserver;
    IDEProvisioningProfileInfoViewController *_infoViewController;
}

@property(retain, nonatomic) IDEProvisioningProfileInfoViewController *infoViewController; // @synthesize infoViewController=_infoViewController;
@property(retain, nonatomic) DVTObservingToken *hasUpdatedPortalProfileObserver; // @synthesize hasUpdatedPortalProfileObserver=_hasUpdatedPortalProfileObserver;
@property(retain, nonatomic) DVTObservingToken *qualificationObserver; // @synthesize qualificationObserver=_qualificationObserver;
@property(nonatomic) BOOL hasUpdatedPortalProfile; // @synthesize hasUpdatedPortalProfile=_hasUpdatedPortalProfile;
@property(retain, nonatomic) IDEProfileQualification *qualification; // @synthesize qualification=_qualification;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setupObservations;
- (void)viewDidLoad;

@end

