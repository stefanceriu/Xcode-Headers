//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTHistogramBin, NSColor;

@interface DTHistogramBar : NSObject
{
    unsigned long long height;
    DTHistogramBin *bin;
    unsigned long long binOffset;
    NSColor *color;
    struct CGRect rect;
}

@property(retain) NSColor *color; // @synthesize color;
@property(nonatomic) struct CGRect rect; // @synthesize rect;
@property(nonatomic) unsigned long long binOffset; // @synthesize binOffset;
@property DTHistogramBin *bin; // @synthesize bin;
@property(nonatomic) unsigned long long height; // @synthesize height;
- (void).cxx_destruct;

@end

