//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDocumentLocation, NSString;

@interface SKInspectorComponentEntry : NSObject
{
    NSString *_className;
    NSString *_moduleName;
    DVTDocumentLocation *_location;
}

@property(retain, nonatomic) DVTDocumentLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fullName;

@end

