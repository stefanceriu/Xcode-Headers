//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _IDEIssueDocumentURL : NSObject
{
    NSURL *_url;
    unsigned long long _type;
}

@property(readonly) unsigned long long issueType; // @synthesize issueType=_type;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 type:(unsigned long long)arg2;

@end

