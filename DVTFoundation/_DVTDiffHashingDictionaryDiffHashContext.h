//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DVTDiffDataSource;

@interface _DVTDiffHashingDictionaryDiffHashContext : NSObject
{
    DVTDiffDataSource *_dataSource;
    unsigned long long _diffHash;
}

@property unsigned long long diffHash; // @synthesize diffHash=_diffHash;
@property(retain) DVTDiffDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 diffHash:(unsigned long long)arg2;

@end

