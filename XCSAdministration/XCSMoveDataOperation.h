//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class NSString;

@interface XCSMoveDataOperation : XCSInitializationOperation
{
    NSString *_destinationDataPath;
}

@property(retain, nonatomic) NSString *destinationDataPath; // @synthesize destinationDataPath=_destinationDataPath;
- (void).cxx_destruct;
- (void)run;
- (id)statusDescription;

@end

