//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

#import <DebuggerUI/MKMapViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, IDESimulateLocationMenuController, IDEWorkspaceTabController, MKMapView, NSPopUpButton, NSString;

@interface IDESimulatedLocationPopoverContentViewController : DVTPopoverContentViewController <MKMapViewDelegate>
{
    NSPopUpButton *_locationPopUp;
    MKMapView *_map;
    DVTBorderedView *_mapBorder;
    IDEWorkspaceTabController *_tabController;
    IDESimulateLocationMenuController *_menuController;
    DVTObservingToken *_locationObserver;
}

@property(retain) DVTObservingToken *locationObserver; // @synthesize locationObserver=_locationObserver;
@property(retain) IDESimulateLocationMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain) IDEWorkspaceTabController *tabController; // @synthesize tabController=_tabController;
@property(retain) DVTBorderedView *mapBorder; // @synthesize mapBorder=_mapBorder;
@property(retain) MKMapView *map; // @synthesize map=_map;
@property(retain) NSPopUpButton *locationPopUp; // @synthesize locationPopUp=_locationPopUp;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)_currentLocationImage;
- (void)primitiveInvalidate;
- (void)_updateMapLocation;
- (void)_resetMapToDefaultRegionAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithWorkspaceTabController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

