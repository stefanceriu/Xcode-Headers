//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBICAbstractCatalogDocument, IBMutableIdentityDictionary, NSDictionary, NSMutableOrderedSet, NSString;

@interface IBICDragContext : NSObject <DVTInvalidation>
{
    IBMutableIdentityDictionary *_itemsToTargetParents;
    IBICAbstractCatalogDocument *_document;
    IBMutableIdentityDictionary *_itemsToTargetParentConfigurationBlocks;
    NSMutableOrderedSet *_itemsToRemove;
    IBMutableIdentityDictionary *_perItemUserInfo;
}

+ (void)initialize;
@property(readonly) IBICAbstractCatalogDocument *document; // @synthesize document=_document;
@property(readonly) IBMutableIdentityDictionary *perItemUserInfo; // @synthesize perItemUserInfo=_perItemUserInfo;
@property(readonly) NSDictionary *itemsToTargetParents; // @synthesize itemsToTargetParents=_itemsToTargetParents;
- (void).cxx_destruct;
- (void)applyScheduledTreeChanges;
- (void)applyScheduledAdditions;
- (void)applyScheduledRemovals;
- (void)scheduleRemovalOfItem:(id)arg1;
- (void)scheduleAditionOfItem:(id)arg1 toParent:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

