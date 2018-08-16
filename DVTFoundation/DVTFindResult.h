//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class DVTDocumentLocation, NSDictionary, NSString;

@interface DVTFindResult : NSObject <NSCopying, NSCoding>
{
    int _replaceState;
    DVTDocumentLocation *_location;
    NSString *_contextString;
    NSString *_replacedString;
    DVTDocumentLocation *_replacedLocation;
    NSDictionary *_userInfo;
    struct _NSRange _contextRange;
}

+ (struct _NSRange)lineRangeForFoundRange:(struct _NSRange)arg1 inString:(id)arg2;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) DVTDocumentLocation *replacedLocation; // @synthesize replacedLocation=_replacedLocation;
@property(copy, nonatomic) NSString *replacedString; // @synthesize replacedString=_replacedString;
@property int replaceState; // @synthesize replaceState=_replaceState;
@property(readonly) struct _NSRange contextRange; // @synthesize contextRange=_contextRange;
@property(readonly) NSString *contextString; // @synthesize contextString=_contextString;
@property(readonly) DVTDocumentLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)copyWithContextString:(id)arg1 contextRange:(struct _NSRange)arg2 userInfo:(id)arg3;
- (id)copyWithUpdatedLocation:(id)arg1;
- (id)stringForReplacementString:(id)arg1;
@property(readonly) NSString *foundString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFoundLocation:(id)arg1 withRange:(struct _NSRange)arg2 inContext:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

