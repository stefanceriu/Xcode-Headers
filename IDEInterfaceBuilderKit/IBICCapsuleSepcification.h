//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface IBICCapsuleSepcification : NSObject
{
    BOOL _isExplicitBarrier;
    Class _capsuleClass;
    NSSet *_displayedDescendants;
}

@property(readonly) BOOL isExplicitBarrier; // @synthesize isExplicitBarrier=_isExplicitBarrier;
@property(readonly) NSSet *displayedDescendants; // @synthesize displayedDescendants=_displayedDescendants;
@property(readonly) Class capsuleClass; // @synthesize capsuleClass=_capsuleClass;
- (void).cxx_destruct;
- (id)initWithCapsuleClass:(Class)arg1 displayedDescendants:(id)arg2 isExplicitBarrier:(BOOL)arg3;
- (id)initWithCapsuleClass:(Class)arg1 displayedDescendants:(id)arg2;

@end
