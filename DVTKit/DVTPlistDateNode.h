//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPlistNode.h>

@class NSDate;

@interface DVTPlistDateNode : DVTPlistNode
{
    NSDate *_value;
}

- (void).cxx_destruct;
- (id)stringForSearch;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (id)encodedString;
- (void)setValueFromPlist:(id)arg1;
- (id)_dateFormatter;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

