//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSNumber, NSURL;

@interface IDECoverageResultsDocumentLocation : DVTDocumentLocation
{
    NSURL *_file;
    NSNumber *_line;
}

+ (id)coverageDocumentLocationForLogURL:(id)arg1 coverageData:(id)arg2;
@property(retain, nonatomic) NSNumber *line; // @synthesize line=_line;
@property(retain, nonatomic) NSURL *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

