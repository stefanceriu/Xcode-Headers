//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTBlockScanner.h>

@interface DVTHTMLScanner : DVTBlockScanner
{
}

- (id)parseRecursive:(id)arg1 withContext:(id)arg2 inputStream:(id)arg3 range:(struct _NSRange)arg4 dirtyRange:(struct _NSRange *)arg5;
- (int)actionForEndToken:(id)arg1 inContext:(id)arg2 inputStream:(id)arg3;
- (id)_stringByRemovingLeadingAndTrailingCharacters:(id)arg1 fromString:(id)arg2;

@end

