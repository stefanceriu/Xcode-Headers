//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEInitialization.h"

@class NSArray;

@interface DVTKitDFRSupport : NSObject <IDEInitialization>
{
    NSArray *_inFlightCompletionPairs;
}

+ (id)imageNamed:(id)arg1;
+ (void)setDFRStatus:(unsigned long long)arg1;
+ (unsigned long long)DFRStatus;
+ (id)sharedInstance;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
@property(retain) NSArray *inFlightCompletionPairs; // @synthesize inFlightCompletionPairs=_inFlightCompletionPairs;
- (void).cxx_destruct;

@end

