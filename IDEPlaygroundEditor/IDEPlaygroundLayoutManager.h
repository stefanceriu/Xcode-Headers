//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutManager.h>

@class DVTMutableRangeArray, IDEPlaygroundTextView, NSArray;

@interface IDEPlaygroundLayoutManager : DVTLayoutManager
{
    DVTMutableRangeArray *_sectionCharRanges;
    CDStruct_bf6d4a14 _inlineToysInset;
}

+ (Class)_dvtDefaultTypesetterClass;
@property CDStruct_bf6d4a14 inlineToysInset; // @synthesize inlineToysInset=_inlineToysInset;
- (void).cxx_destruct;
- (void)removeMarkupTextFolds:(id)arg1 fromParentFold:(id)arg2;
- (id)configuredWebTextFoldForDocumentationSectionRange:(struct _NSRange)arg1 pageContext:(id)arg2;
- (id)configuredMarkupTextFoldForDocumentationSectionRange:(struct _NSRange)arg1 pageContext:(id)arg2;
- (id)documentationSectionRanges;
- (void)foldingManager:(id)arg1 didFoldRange:(struct _NSRange)arg2;
- (void)textStorage:(id)arg1 didReplaceCharactersInRange:(struct _NSRange)arg2 withString:(id)arg3 changeInLength:(long long)arg4;
- (void)generateInlineFoldsForCharacterRange:(struct _NSRange)arg1;
- (void)removeSectionWithCharacterRange:(struct _NSRange)arg1;
- (void)addSectionWithCharacterRange:(struct _NSRange)arg1;
@property(copy) NSArray *sectionCharacterRanges;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) IDEPlaygroundTextView *firstTextView; // @dynamic firstTextView;
@property(readonly) IDEPlaygroundTextView *textViewForBeginningOfSelection; // @dynamic textViewForBeginningOfSelection;

@end

