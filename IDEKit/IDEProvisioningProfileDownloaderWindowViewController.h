//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEProvisioningProfileDownloaderContainerViewController, IDEProvisioningProfileDownloaderContext, NSError, NSString;
@protocol IDEProvisioningBasicProfile;

@interface IDEProvisioningProfileDownloaderWindowViewController : NSWindowController <DVTInvalidation>
{
    IDEProvisioningProfileDownloaderContext *_context;
    NSError *_error;
    IDEProvisioningProfileDownloaderContainerViewController *_profileDownloaderContainerViewController;
}

+ (void)initialize;
@property(retain, nonatomic) IDEProvisioningProfileDownloaderContainerViewController *profileDownloaderContainerViewController; // @synthesize profileDownloaderContainerViewController=_profileDownloaderContainerViewController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) IDEProvisioningProfileDownloaderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) id <IDEProvisioningBasicProfile> profile;
- (void)windowDidLoad;
- (id)initWithError:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

