//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface IBLayoutGuideGeneratorResult : NSObject
{
    long long _validGuides;
    NSArray *_layoutGuides;
    NSSet *_layoutGuideMatches;
    struct CGRect _targetRect;
}

@property struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(retain, nonatomic) NSSet *layoutGuideMatches; // @synthesize layoutGuideMatches=_layoutGuideMatches;
@property(retain, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property long long validGuides; // @synthesize validGuides=_validGuides;
- (void).cxx_destruct;

@end

