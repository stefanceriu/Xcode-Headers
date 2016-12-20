//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSAttributedString, NSString;

@interface IBUIRefreshControl : IBUIControl <IBDocumentArchiving, NSCoding>
{
    NSAttributedString *attributedTitle;
}

+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibPasteboardTypes;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

