//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOpenGLView.h>

@protocol DYSampler;

@interface GPURenderTargetEditor.GPUGLSamplerView : NSOpenGLView
{
    // Error parsing type: , name: color0
    // Error parsing type: , name: color1
    // Error parsing type: , name: gridColor
    // Error parsing type: , name: outerSize
    // Error parsing type: , name: texture
    // Error parsing type: , name: sampler
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)update;
- (float)mapWithX:(float)arg1 offset:(float)arg2;
@property(nonatomic, retain) id <DYSampler> sampler; // @synthesize sampler;

@end

