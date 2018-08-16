//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDocumentUnarchiver, NSSet, NSString;

@protocol IBUnarchivableDocument <NSObject>
- (Class)documentUnarchiver:(IBDocumentUnarchiver *)arg1 classForUnknownElementNamed:(NSString *)arg2;
- (NSSet *)documentUnarchiverAllowedReferenceTypes:(IBDocumentUnarchiver *)arg1;
- (BOOL)documentUnarchiverIsUnarchivingStackBasedTreeNode:(IBDocumentUnarchiver *)arg1;
- (void)documentUnarchiver:(IBDocumentUnarchiver *)arg1 didUnarchiveObject:(id)arg2;
- (void)documentUnarchiver:(IBDocumentUnarchiver *)arg1 willUnarchiveObject:(id)arg2;
- (id)documentUnarchiver:(IBDocumentUnarchiver *)arg1 objectForReferenceID:(NSString *)arg2 referenceType:(NSString *)arg3;
- (BOOL)unarchiveDocumentWithUnarchiver:(IBDocumentUnarchiver *)arg1 error:(id *)arg2;
@end

