//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DNTDocumentationSupport/NSURLSessionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TtC23DNTDocumentationSupport38DocumentationServiceCertificatePinning : NSObject <NSURLSessionDelegate>
{
    // Error parsing type: , name: pinnedHost
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPinnedHost:(id)arg1;
@property(nonatomic, readonly) NSString *pinnedHost; // @synthesize pinnedHost;

@end
