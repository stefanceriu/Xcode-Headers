//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLClassifierImp.h>

#import <IDEModelFoundation/XDUMLClass-Protocol.h>

@class NSString;

@interface XDUMLClassImp : XDUMLClassifierImp <XDUMLClass>
{
}

- (void)setParentClass:(id)arg1;
- (id)parentClass;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)newImplementationOf:(id)arg1;
- (void)implementationRemoved:(id)arg1;
- (void)implementationAdded:(id)arg1;
- (id)superClasses;
- (id)ownedOperations;
- (id)ownedAttributes;
- (id)implementations;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

