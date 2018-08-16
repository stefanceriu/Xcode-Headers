//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMemberID, NSMutableArray, NSString;

@interface IBStructureRepresentingObject : NSObject
{
    NSMutableArray *_childObjects;
    NSString *_className;
    NSString *_externalClassName;
    NSString *_effectiveClassName;
    IBMemberID *_objectID;
    IBMemberID *_containingGroupID;
    IBStructureRepresentingObject *_parentObject;
}

@property __weak IBStructureRepresentingObject *parentObject; // @synthesize parentObject=_parentObject;
@property(copy) IBMemberID *containingGroupID; // @synthesize containingGroupID=_containingGroupID;
@property(copy) IBMemberID *objectID; // @synthesize objectID=_objectID;
@property(copy) NSString *effectiveClassName; // @synthesize effectiveClassName=_effectiveClassName;
@property(copy) NSString *externalClassName; // @synthesize externalClassName=_externalClassName;
@property(copy) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)description;
- (id)children;
- (void)addChild:(id)arg1;
- (id)initWithObjectID:(id)arg1 containingGroupID:(id)arg2 className:(id)arg3 externalClassName:(id)arg4 effectiveClassName:(id)arg5 parentObject:(id)arg6;

@end

