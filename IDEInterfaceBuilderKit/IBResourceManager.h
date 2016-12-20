//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IBDocument, IBMutableIdentityDictionary, IDEContainer, IDEMediaResourceVariantContext, IDEMutableMediaRepository, NSDictionary, NSMutableDictionary, NSString;

@interface IBResourceManager : NSObject <DVTInvalidation>
{
    id <DVTInvalidation> _variantContextObservation;
    IDEMediaResourceVariantContext *_variantContext;
    IDEMutableMediaRepository *_placeholderRepository;
    IDEMutableMediaRepository *_importedRepository;
    NSMutableDictionary *_observers;
    IBMutableIdentityDictionary *_escapedResourceValuesToVariantSets;
    IBMutableIdentityDictionary *_transformedValuesToTransformers;
    NSMutableDictionary *_mediaTypesToNamesToResources;
    CDUnknownBlockType _variantSetTieBreaker;
    IBDocument *_document;
    IDEContainer *_resourceProvidingContainer;
    NSDictionary *_variantForMatching;
}

+ (id)systemMediaRepository;
+ (void)initialize;
@property(copy, nonatomic) NSDictionary *variantForMatching; // @synthesize variantForMatching=_variantForMatching;
@property(retain, nonatomic) IDEContainer *resourceProvidingContainer; // @synthesize resourceProvidingContainer=_resourceProvidingContainer;
@property(readonly) __weak IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)variantContextExportedToLibrary;
- (BOOL)mediaLibraryController:(id)arg1 variantSetIsSystemProvided:(id)arg2;
- (id)mediaLibraryController:(id)arg1 dragImagesByStateIdentifierForMediaResourceVariantSet:(id)arg2;
- (void)mediaLibraryController:(id)arg1 populatePasteboard:(id)arg2 withMediaResourceVariantSets:(id)arg3;
- (id)placeholderResourceIconForMediaType:(id)arg1;
- (id)placeholderResourceContentForMediaType:(id)arg1 originalValue:(id)arg2;
- (void)synchronizeObjectPropertyValuesWithVariantContext;
- (id)computeResourceReferencesFromObjects:(id)arg1;
- (id)computeResourceReferences;
- (id)resourceReferenceForObject:(id)arg1 resourceValue:(id)arg2 keyPath:(id)arg3 configuration:(id)arg4;
- (void)importResourcesWithNamesGroupedByType:(id)arg1 fromResourceManager:(id)arg2;
- (id)resourcesWithNamesGroupedByType:(id)arg1;
- (id)registerResourceObserver:(CDUnknownBlockType)arg1;
- (id)extractResourceValuesFromPasteboard:(id)arg1 ofMediaType:(id)arg2;
- (void)populatePasteboard:(id)arg1 withMediaResourceVariantSets:(id)arg2;
- (id)dragIdentifierForResourceValue:(id)arg1;
- (id)dragIdentifierForVariantSet:(id)arg1;
- (id)transformResourceValue:(id)arg1 withValueTransformer:(id)arg2;
- (id)resourceNamesGroupedByMediaTypeReferencedByObjects:(id)arg1;
- (id)referencedResourceValuesToRuntimeNamesForMediaType:(id)arg1;
- (id)firstResourceValueOfMediaType:(id)arg1 withRuntimeName:(id)arg2 creatingPlaceholderOfClassIfMissing:(Class)arg3 fromOriginalValue:(id)arg4;
- (id)firstResourceValueOfMediaType:(id)arg1 withRuntimeName:(id)arg2;
- (id)scaleVaraibleForForcingOneXImages;
- (id)availableRuntimeNamesForMediaType:(id)arg1;
- (id)resources;
- (id)runtimeNameForResourceValue:(id)arg1;
- (id)variantSetForEscapedResourceValue:(id)arg1;
- (void)setupVariantContextWithContainerRepositories:(id)arg1;
- (id)repositoriesForProvidingContainer:(id)arg1;
- (id)typesForDefaultMediaRepositories;
- (id)foldingStrategy;
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

