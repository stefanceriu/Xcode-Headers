//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEKeyDrivenNavigableItem.h"

@class DVTObservingToken, IDEEditorDocument;

@interface IDEMemoryGraphNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_documentTopLevelStructObservation;
    IDEEditorDocument *_document;
    BOOL _hideStatusIcon;
}

@property(nonatomic) BOOL hideStatusIcon; // @synthesize hideStatusIcon=_hideStatusIcon;
- (void).cxx_destruct;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (id)contentDocumentLocation;
- (BOOL)isDocumentNavigableItem;
- (id)_editorDocument;
- (void)_updateEditorDocument:(id)arg1;
- (void)primitiveInvalidate;

@end

