//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DBGViewChildMemberList, DVTStackBacktrace, NSArray, NSSet, NSString;

@interface DBGViewObject : NSObject <DVTInvalidation>
{
    DBGViewChildMemberList *_memberList;
    NSArray *_childViewObjects;
    BOOL _memberListFinished;
    BOOL _shouldConsiderInteresting;
    BOOL _hidden;
    id <DBGViewDescriber> _viewDescriber;
    NSString *_inferiorPointer;
    NSString *_displayName;
    NSString *_representedObjectClassName;
    NSString *_representedObjectClassNameForDisplay;
    DBGViewObject *_parentViewObject;
    NSSet *_constraintAddressesAffectingViewObject;
    unsigned long long _numberOfIssues;
    unsigned long long _numberOfChildObjectsWithIssues;
    struct CGRect _frame;
}

+ (struct NSEdgeInsets)edgeInsetsFromArray:(id)arg1;
+ (struct CATransform3D)transformFromArray:(id)arg1;
+ (struct CGPoint)pointFromArray:(id)arg1;
+ (struct CGRect)rectFromArray:(id)arg1;
+ (void)initialize;
@property unsigned long long numberOfChildObjectsWithIssues; // @synthesize numberOfChildObjectsWithIssues=_numberOfChildObjectsWithIssues;
@property unsigned long long numberOfIssues; // @synthesize numberOfIssues=_numberOfIssues;
@property(readonly) NSSet *constraintAddressesAffectingViewObject; // @synthesize constraintAddressesAffectingViewObject=_constraintAddressesAffectingViewObject;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property __weak DBGViewObject *parentViewObject; // @synthesize parentViewObject=_parentViewObject;
@property(readonly) BOOL shouldConsiderInteresting; // @synthesize shouldConsiderInteresting=_shouldConsiderInteresting;
@property(readonly) NSString *representedObjectClassNameForDisplay; // @synthesize representedObjectClassNameForDisplay=_representedObjectClassNameForDisplay;
@property(retain) NSString *representedObjectClassName; // @synthesize representedObjectClassName=_representedObjectClassName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *inferiorPointer; // @synthesize inferiorPointer=_inferiorPointer;
@property struct CGRect frame; // @synthesize frame=_frame;
@property(retain) id <DBGViewDescriber> viewDescriber; // @synthesize viewDescriber=_viewDescriber;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (void)_willInflateChildMemberList:(id)arg1;
- (void)_inflateObjectIfNecessary;
- (BOOL)_isInflated;
- (id)recursiveDescription;
- (id)_collectSubViewDescriptions:(id)arg1 level:(long long)arg2;
@property(readonly, copy) NSString *description;
- (unsigned long long)recursivelyUpdateNumberOfChildObjectsWithIssues;
- (BOOL)childObjectsHaveIssues;
- (BOOL)hasIssues;
@property(readonly) NSArray *classHierarchy;
@property(retain, nonatomic) id object;
- (id)fetchedMemberList;
@property(retain) NSArray *childViewObjects;
@property(readonly) NSString *identifier;
- (void)primitiveInvalidate;
- (id)initWithViewDescriber:(id)arg1 parent:(id)arg2 dictionary:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

