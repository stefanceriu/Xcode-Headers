//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBAbstractRelationshipInfo : NSObject <NSCopying, NSCoding, IBDocumentArchiving>
{
    NSString *_name;
    NSString *_candidateClassName;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1 relationshipName:(id)arg2 andCandidateClassName:(id)arg3;
+ (Class)relationshipInfoClassForRelationshipType:(long long)arg1;
+ (id)relationshipInfoWithName:(id)arg1;
+ (id)relationshipInfoWithName:(id)arg1 andCandidateClassName:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)relationshipInfoWithCandidateClassName:(id)arg1;
- (id)relationshipInfoWithName:(id)arg1;
@property(readonly) long long relationshipType;
@property(readonly, copy) NSString *candidateClassName;
@property(readonly, copy) NSString *name;
- (long long)compareForArchiving:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 andCandidateClassName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

