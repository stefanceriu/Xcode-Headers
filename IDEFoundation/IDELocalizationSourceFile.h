//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTFilePath;

@interface IDELocalizationSourceFile : NSObject <NSCopying>
{
    unsigned long long _hash;
    DVTFilePath *_sourceFilePath;
    unsigned long long _fileEncoding;
}

@property(readonly) unsigned long long fileEncoding; // @synthesize fileEncoding=_fileEncoding;
@property(readonly, copy) DVTFilePath *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
- (void).cxx_destruct;
- (BOOL)isEqualToLocalizationSourceFile:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSourceFilePath:(id)arg1 fileEncoding:(unsigned long long)arg2;

@end

