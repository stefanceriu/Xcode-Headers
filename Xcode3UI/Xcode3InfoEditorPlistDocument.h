//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>
#import <Xcode3UI/DVTPlistDocumentProtocol-Protocol.h>

@class DVTPlistModel, DVTPlistStructureDefinition, DVTStackBacktrace, NSString;

@interface Xcode3InfoEditorPlistDocument : NSDocument <DVTPlistDocumentProtocol, DVTInvalidation>
{
    DVTPlistModel *_model;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)propertyListChanged:(id)arg1;
- (BOOL)isReadOnly;
- (void)revealNode:(id)arg1;
- (BOOL)commitEdits;
- (id)model;
- (id)plist;
- (void)changeStructureDefinitionAction:(id)arg1;
@property(retain) DVTPlistStructureDefinition *plistStructureDefinition;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

