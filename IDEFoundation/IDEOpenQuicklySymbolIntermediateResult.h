//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@interface IDEOpenQuicklySymbolIntermediateResult : IDEOpenQuicklyResult
{
}

+ (id)resultWithCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1 query:(id)arg2;
- (BOOL)isFromPoject;
- (id)sourceSDKFilePath;
- (id)location;
- (BOOL)representsSameResult:(id)arg1;
- (BOOL)representsSameResultAsSymbolIntermediateResult:(id)arg1;
- (unsigned long long)hashOfResultIdentity;
- (id)updatedResultForQuery:(id)arg1;

@end

