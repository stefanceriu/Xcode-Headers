//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBDocumentDependencyVersion : NSObject
{
    BOOL _hide;
    BOOL _disable;
    NSString *_label;
    long long _number;
    NSString *_marketingVersion;
}

+ (id)documentDependencyVersionWithExtension:(id)arg1;
@property(nonatomic) BOOL disable; // @synthesize disable=_disable;
@property(nonatomic) BOOL hide; // @synthesize hide=_hide;
@property(retain, nonatomic) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExtension:(id)arg1;

@end

