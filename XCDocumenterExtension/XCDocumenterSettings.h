//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCDocumenterSettings : NSObject
{
    BOOL _useTabsForIndentation;
    long long _tabWidth;
    long long _indentationWidth;
}

+ (id)sharedSettings;
@property(nonatomic) long long indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property(nonatomic) long long tabWidth; // @synthesize tabWidth=_tabWidth;
@property(nonatomic) BOOL useTabsForIndentation; // @synthesize useTabsForIndentation=_useTabsForIndentation;

@end

