//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GKDecisionNode, GKRandomSource, NSArray;

@interface GKDecisionTree : NSObject <NSSecureCoding>
{
    struct GKCDecisionTree *_decisionTree;
    NSArray *forest;
    GKDecisionNode *_rootNode;
    GKRandomSource *_randomSource;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) GKRandomSource *randomSource; // @synthesize randomSource=_randomSource;
@property(retain, nonatomic) GKDecisionNode *rootNode; // @synthesize rootNode=_rootNode;
- (void).cxx_destruct;
- (void)generateForestFromExamples:(id)arg1 andAttributes:(id)arg2;
- (id)description;
- (id)findActionForAnswers:(id)arg1;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttribute:(id)arg1;
- (id)init;

@end
