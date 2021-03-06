//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCoding-Protocol.h>

@class DVTFilePath, IDETextFragmentIndexQuickRejectionFilter, NSError, NSNumber;
@protocol NSCoding><NSCopying;

@interface IDETextFragmentIndexEntry : NSObject <NSCoding>
{
    DVTFilePath *_filePath;
    Class _providerClass;
    NSNumber *_sourceFileModificationTimestamp;
    NSObject<NSCoding><NSCopying> *_retainedSeed;
    IDETextFragmentIndexQuickRejectionFilter *_filter;
    NSError *_providerError;
}

@property(readonly) NSError *providerError; // @synthesize providerError=_providerError;
@property(readonly) IDETextFragmentIndexQuickRejectionFilter *filter; // @synthesize filter=_filter;
@property(readonly) NSObject<NSCoding><NSCopying> *retainedSeed; // @synthesize retainedSeed=_retainedSeed;
@property(readonly) NSNumber *sourceFileModificationTimestamp; // @synthesize sourceFileModificationTimestamp=_sourceFileModificationTimestamp;
@property(readonly) Class providerClass; // @synthesize providerClass=_providerClass;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilePath:(id)arg1 providerClass:(Class)arg2 sourceFileModificationTimestamp:(id)arg3 seed:(id)arg4 retainFragments:(BOOL)arg5;
- (id)initWithFilePath:(id)arg1 providerClass:(Class)arg2 sourceFileModificationTimestamp:(id)arg3 providerError:(id)arg4;

@end

