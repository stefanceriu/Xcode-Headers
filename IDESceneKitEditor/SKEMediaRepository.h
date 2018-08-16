//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEContainerContentsMediaRepository.h>

@class NSMutableDictionary;

@interface SKEMediaRepository : IDEContainerContentsMediaRepository
{
    NSMutableDictionary *_resources;
}

+ (id)containerContentProducer:(id)arg1 produceValueForFilePath:(id)arg2 fileDataType:(id)arg3;
+ (id)allSupportedMediaFileDataTypes;
- (void).cxx_destruct;
- (void)fileReferenceObserverDidReportUpdatedAndAddedResourcesByPath:(id)arg1 removedPaths:(id)arg2;
- (id)resources;
- (void)primitiveInvalidate;
- (id)initWithContentProductionSpecifier:(id)arg1;

@end

