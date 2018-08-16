//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class IBUIViewCachedGeometryInfo, NSString;

@interface IBUICachedGeometryRequest : IBSceneUpdateProcessingRequest
{
    IBUIViewCachedGeometryInfo *_underlyingInfo;
    NSString *_requestedKeyPath;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *requestedKeyPath; // @synthesize requestedKeyPath=_requestedKeyPath;
@property(retain, nonatomic) IBUIViewCachedGeometryInfo *underlyingInfo; // @synthesize underlyingInfo=_underlyingInfo;
- (void).cxx_destruct;
- (void)processResult:(id)arg1 orError:(id)arg2;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCachedGeometryInfo:(id)arg1 object:(id)arg2;

@end

