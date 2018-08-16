//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XRMobileAgentItinerary;

@interface XRMobileAgent : NSObject
{
    id _ticket;
    unsigned long long _movementType;
    XRMobileAgentItinerary *_itinerary;
    BOOL _held;
    NSString *_mode;
}

+ (void)initialize;
@property(nonatomic) BOOL held; // @synthesize held=_held;
@property(readonly, nonatomic) XRMobileAgentItinerary *itinerary; // @synthesize itinerary=_itinerary;
@property(readonly, nonatomic) unsigned long long movementType; // @synthesize movementType=_movementType;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (BOOL)holdsItinerary:(id)arg1;
- (void)deactivated;
- (void)executeStopOnItinerary:(id)arg1;
- (void)__park;
- (void)activateWithFinalDestination:(id)arg1 ticket:(id)arg2;
- (void)activateAtStop:(id)arg1 activationTicket:(id)arg2 finalDestination:(id)arg3 finalTicket:(id)arg4;
- (id)init;
- (void)goodbye;
- (void)hello;
- (id)ticket;

@end

