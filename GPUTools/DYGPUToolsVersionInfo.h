//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface DYGPUToolsVersionInfo : NSObject <NSCoding>
{
    NSDictionary *_infoPlist;
    NSDictionary *_versionPlist;
    unsigned int _interposeVersionGL;
    unsigned int _interposeVersionMetal;
}

@property(nonatomic) unsigned int interposeVersionMetal; // @synthesize interposeVersionMetal=_interposeVersionMetal;
@property(nonatomic) unsigned int interposeVersionGL; // @synthesize interposeVersionGL=_interposeVersionGL;
@property(copy, nonatomic) NSDictionary *versionPlist; // @synthesize versionPlist=_versionPlist;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)objectForVersionPlistKey:(id)arg1;
- (id)objectForInfoPlistKey:(id)arg1;
@property(readonly, retain, nonatomic) NSString *sourceVersion;
@property(readonly, retain, nonatomic) NSString *shortVersion;
@property(readonly, retain, nonatomic) NSString *version;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

