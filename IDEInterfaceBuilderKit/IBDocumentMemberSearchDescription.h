//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTPropertyListEncoding-Protocol.h>

@class IBMemberID, NSArray, NSDictionary, NSString;

@interface IBDocumentMemberSearchDescription : NSObject <DVTPropertyListEncoding>
{
    NSArray *_attributeKeyPaths;
    NSDictionary *_attributeKeyPathsToSearchLocations;
    NSDictionary *_attributeSearchLocationsToIndexes;
    IBMemberID *_memberID;
    NSString *_className;
    NSString *_contextLabel;
    NSArray *_attributeDescriptions;
}

@property(readonly, copy, nonatomic) NSArray *attributeDescriptions; // @synthesize attributeDescriptions=_attributeDescriptions;
@property(readonly, copy, nonatomic) NSString *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, copy, nonatomic) IBMemberID *memberID; // @synthesize memberID=_memberID;
- (void).cxx_destruct;
- (long long)compareAttributeSearchLocation:(id)arg1 toLocation:(id)arg2;
- (id)attributeDescriptionForSearchLocation:(id)arg1;
- (unsigned long long)indexOfAttributeSearchLocation:(id)arg1;
- (id)attributeSearchLocationsForKeyPath:(id)arg1;
- (id)attributeKeyPaths;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithMemberID:(id)arg1 className:(id)arg2 attributeDescriptions:(id)arg3 contextLabel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

