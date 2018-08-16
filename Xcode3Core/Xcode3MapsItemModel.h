//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSSet;
@protocol IDEFlightChecking;

@interface Xcode3MapsItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
    NSSet *_enabledRoutingTypes;
}

+ (id)keyPathsForValuesAffectingOther;
+ (id)keyPathsForValuesAffectingTrain;
+ (id)keyPathsForValuesAffectingTaxi;
+ (id)keyPathsForValuesAffectingSubway;
+ (id)keyPathsForValuesAffectingStreetcar;
+ (id)keyPathsForValuesAffectingRidesharing;
+ (id)keyPathsForValuesAffectingPedestrian;
+ (id)keyPathsForValuesAffectingFerry;
+ (id)keyPathsForValuesAffectingCar;
+ (id)keyPathsForValuesAffectingBus;
+ (id)keyPathsForValuesAffectingBike;
+ (id)keyPathsForValuesAffectingAirplane;
@property(retain, nonatomic) NSSet *enabledRoutingTypes; // @synthesize enabledRoutingTypes=_enabledRoutingTypes;
- (void).cxx_destruct;
- (void)removeDirctionsRequestDocumentType;
- (void)addDirectionsRequestDocumentType;
- (id)directionsRequestDocumentTypeDeclarations;
- (BOOL)plistContainsDirectionsRequestDocumentType;
- (id)flightChecks;
- (id)linkedFrameworksFlightCheck;
@property(nonatomic) BOOL other; // @dynamic other;
- (void)_setOther:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL train; // @dynamic train;
- (void)_setTrain:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL taxi; // @dynamic taxi;
- (void)_setTaxi:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL subway; // @dynamic subway;
- (void)_setSubway:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL streetcar; // @dynamic streetcar;
- (void)_setStreetcar:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL ridesharing; // @dynamic ridesharing;
- (void)_setRidesharing:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL pedestrian; // @dynamic pedestrian;
- (void)_setPedestrian:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL ferry; // @dynamic ferry;
- (void)_setFerry:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL car; // @dynamic car;
- (void)_setCar:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL bus; // @dynamic bus;
- (void)_setBus:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL bike; // @dynamic bike;
- (void)_setBike:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL airplane; // @dynamic airplane;
- (void)_setAirplane:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)_setEnabledRoutingTypes:(id)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)readValuesFromPlist;
- (void)publishStateWithContext:(id)arg1;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

