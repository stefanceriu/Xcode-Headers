//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScreen, NSTimer;

__attribute__((visibility("hidden")))
@interface SKDisplayLink : NSObject
{
    NSTimer *_timer;
    id _client;
    struct __CVDisplayLink *_cvDisplayLink;
    unsigned int _activeDisplayCount;
    unsigned int _activeDisplayIDs[10];
    SKDisplayLink *_keepAlive;
    NSScreen *_display;
    BOOL _paused;
    _Bool _callbackAlreadyInProgress;
    double _previousFrameTime;
    float _preferredFramesPerSecond;
    CDUnknownBlockType _block;
    float _averageFrameTime;
    long long _frameCount;
    double _frameCountBeginTime;
}

+ (id)displayLinkWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_callbackForNextFrame:(double)arg1;
- (void)invalidate;
- (void)_teardown;
- (void)_setup;
@property(retain, nonatomic) NSScreen *display;
@property(nonatomic) long long preferredFramesPerSecond;
@property(nonatomic, getter=isPaused) BOOL paused;
- (id)init;
- (id)initWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;
- (void)_setCallbackAlreadyInProgress:(_Bool)arg1;
- (_Bool)_callbackAlreadyInProgress;

@end

