//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_audioURL;
    NSString *_audioName;
    BOOL _loops;
    BOOL _shouldStream;
    BOOL _loaded;
    BOOL positional;
    float volume;
    float rate;
    float reverbBlend;
}

+ (BOOL)supportsSecureCoding;
+ (id)audioSourceNamed:(id)arg1;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)arg1;
@property(nonatomic) BOOL shouldStream; // @synthesize shouldStream=_shouldStream;
@property(nonatomic) BOOL loops; // @synthesize loops=_loops;
@property(nonatomic) float reverbBlend; // @synthesize reverbBlend;
@property(nonatomic) float rate; // @synthesize rate;
@property(nonatomic, getter=isPositional) BOOL positional; // @synthesize positional;
@property(nonatomic) float volume; // @synthesize volume;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNAudioSource:(id)arg1;
- (void)_customEncodingOfSCNAudioSource:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)duration;
- (void)loadIfNeeded;
- (void)_load;
- (void)load;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)fileName;
- (id)initWithFileNamed:(id)arg1 inBundle:(id)arg2;
- (void)_loadURLWithBundle:(id)arg1;
- (long long)renderingAlgorithm;
- (id)initWithAVAudioPCMBuffer:(id)arg1;

@end

