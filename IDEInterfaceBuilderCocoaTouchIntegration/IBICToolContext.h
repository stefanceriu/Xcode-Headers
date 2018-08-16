//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBCocoaTouchImageCatalogToolProxy, NSDictionary, NSError, NSString;
@protocol IBCocoaTouchImageCatalogTool, OS_dispatch_source;

@interface IBICToolContext : NSObject
{
    NSString *_platformIdentifier;
    IBCocoaTouchImageCatalogToolProxy<IBCocoaTouchImageCatalogTool> *_toolProxy;
    NSDictionary *_capturedEnvironmentVariables;
    NSObject<OS_dispatch_source> *_toolDispatchSource;
    NSError *_launchError;
}

@property(retain, nonatomic) NSError *launchError; // @synthesize launchError=_launchError;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *toolDispatchSource; // @synthesize toolDispatchSource=_toolDispatchSource;
@property(retain, nonatomic) NSDictionary *capturedEnvironmentVariables; // @synthesize capturedEnvironmentVariables=_capturedEnvironmentVariables;
@property(retain, nonatomic) IBCocoaTouchImageCatalogToolProxy<IBCocoaTouchImageCatalogTool> *toolProxy; // @synthesize toolProxy=_toolProxy;
@property(retain, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (void).cxx_destruct;

@end

