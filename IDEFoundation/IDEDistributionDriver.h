//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionContext, NSDictionary;

@interface IDEDistributionDriver : NSObject
{
    IDEDistributionContext *_initialContext;
    NSDictionary *_exportOptionsPlist;
}

+ (id)distributionDriverWithArchive:(id)arg1 optionsPlist:(id)arg2;
@property(readonly, copy) NSDictionary *exportOptionsPlist; // @synthesize exportOptionsPlist=_exportOptionsPlist;
@property(retain) IDEDistributionContext *initialContext; // @synthesize initialContext=_initialContext;
- (void).cxx_destruct;
- (_Bool)runWithDestinationPath:(id)arg1 error:(id *)arg2;

@end

