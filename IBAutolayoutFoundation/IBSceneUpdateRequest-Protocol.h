//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class IBSceneUpdateProcessingRequestGroup, NSString;
@protocol IBSceneUpdateRequestConfiguring;

@protocol IBSceneUpdateRequest <IBBinaryArchiving>
@property(copy, nonatomic) NSString *incrementalUpdateSessionID;
@property(readonly, nonatomic) IBSceneUpdateProcessingRequestGroup *processingRequestGroup;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)visitWithFullRequestBlock:(void (^)(IBFullSceneUpdateRequest *))arg1 incrementalRequestBlock:(void (^)(IBIncrementalSceneUpdateRequest *))arg2;
- (void)configureWithConfigurer:(id <IBSceneUpdateRequestConfiguring>)arg1;
@end

