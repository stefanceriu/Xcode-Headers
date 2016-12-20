//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProjectItemModel.h"

@class IDEAppIDItemIdentifiersItemModelSet;

@interface Xcode3ApplePayItemModel : IDEProjectItemModel
{
    IDEAppIDItemIdentifiersItemModelSet *_merchantIDs;
}

@property(retain) IDEAppIDItemIdentifiersItemModelSet *merchantIDs; // @synthesize merchantIDs=_merchantIDs;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (void)publishStateWithContext:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

