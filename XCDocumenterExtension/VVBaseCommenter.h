//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface VVBaseCommenter : NSObject
{
    BOOL _hasReturn;
    BOOL _isEnum;
    NSString *_indent;
    NSString *_code;
    NSMutableArray *_arguments;
}

@property(nonatomic) BOOL isEnum; // @synthesize isEnum=_isEnum;
@property(nonatomic) BOOL hasReturn; // @synthesize hasReturn=_hasReturn;
@property(retain, nonatomic) NSMutableArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *indent; // @synthesize indent=_indent;
- (void).cxx_destruct;
- (void)parseArgumentsInputArgs:(id)arg1;
- (id)prefixString;
- (id)emptyLine;
- (id)document;
- (id)__document;
- (id)endComment;
- (id)returnComment;
- (id)argumentsComment;
- (id)startComment;
- (id)returnSymbol;
- (id)paramSymbol;
- (id)initWithIndentString:(id)arg1 codeString:(id)arg2;

@end

