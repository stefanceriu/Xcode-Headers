//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTextStorage;

@interface _LazyInvalidationHelper : NSObject
{
    DVTTextStorage *_textStorage;
}

@property(nonatomic) __weak DVTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)_invalidateCallback:(id)arg1;

@end

