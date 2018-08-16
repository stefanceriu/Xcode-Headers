//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBSceneUpdateRequest-Protocol.h>

@class IBSceneUpdateProcessingRequestGroup, NSString;

@interface IBIncrementalSceneUpdateRequest : NSObject <IBSceneUpdateRequest>
{
    NSString *_identifier;
    IBSceneUpdateProcessingRequestGroup *_processingRequestGroup;
    NSString *_incrementalUpdateSessionID;
}

+ (id)request;
@property(copy, nonatomic) NSString *incrementalUpdateSessionID; // @synthesize incrementalUpdateSessionID=_incrementalUpdateSessionID;
@property(readonly, nonatomic) IBSceneUpdateProcessingRequestGroup *processingRequestGroup; // @synthesize processingRequestGroup=_processingRequestGroup;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)visitWithFullRequestBlock:(CDUnknownBlockType)arg1 incrementalRequestBlock:(CDUnknownBlockType)arg2;
- (void)configureWithConfigurer:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

