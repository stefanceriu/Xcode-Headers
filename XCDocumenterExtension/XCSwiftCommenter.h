//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "VVBaseCommenter.h"

@interface XCSwiftCommenter : VVBaseCommenter
{
    BOOL _hasThrows;
    BOOL _forSwiftEnum;
}

@property(nonatomic) BOOL forSwiftEnum; // @synthesize forSwiftEnum=_forSwiftEnum;
@property(nonatomic) BOOL hasThrows; // @synthesize hasThrows=_hasThrows;
- (id)document;
- (id)__document;
- (id)prefixString;
- (id)endComment;
- (id)throwsComment;
- (id)returnComment;
- (id)argumentsComment;
- (id)startComment;
- (id)throwsSymbol;
- (id)returnSymbol;
- (id)paramSymbol;
- (id)initWithIndentString:(id)arg1 codeString:(id)arg2;

@end

