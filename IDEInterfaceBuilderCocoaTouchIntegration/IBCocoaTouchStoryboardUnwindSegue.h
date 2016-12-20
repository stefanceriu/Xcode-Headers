//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

#import "NSCoding.h"

@class NSString;

@interface IBCocoaTouchStoryboardUnwindSegue : IBUIStoryboardAbstractTriggeredSegue <NSCoding>
{
    NSString *_unwindAction;
}

+ (BOOL)isValidForStoryboardDocument:(id)arg1;
+ (void)populatePrototypes:(id)arg1 inStoryboard:(id)arg2 forSegueFromObject:(id)arg3 toObject:(id)arg4 withTrigger:(id)arg5;
+ (id)prototypeTriggeredSeguesForDestination:(id)arg1 inStoryboard:(id)arg2;
+ (id)unwindActionsForDocument:(id)arg1;
+ (id)classIdentifier;
+ (id)menuLabelForConnection:(id)arg1;
+ (double)displayOrderPriority;
+ (BOOL)isObjectValidDestination:(id)arg1;
@property(copy, nonatomic) NSString *unwindAction; // @synthesize unwindAction=_unwindAction;
- (void).cxx_destruct;
- (id)missingComponents;
- (id)segueAttributeInspectorExtensionIdentifier;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)destinationDisplayName;
- (id)prototypeWithRespectTo:(id)arg1;
- (Class)classForPrototypeWithRespectTo:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)copyCommonInstanceStateToTriggeredSegue:(id)arg1;
- (id)instantiateSegueTemplate;
- (id)sourceMembersForIllustrativePurposes;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEqualToPrototype:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

