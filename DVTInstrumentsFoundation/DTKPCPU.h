//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DTKPCPU : NSObject
{
    struct kpep_db *_kpepDB;
    NSMutableArray *_events;
    NSString *_lookupName;
    NSString *_name;
}

+ (id)legacyKPEPDatabaseURLForProductType:(id)arg1;
+ (id)cpuNamed:(id)arg1 fromSerializedData:(id)arg2 error:(id *)arg3;
+ (id)cpuNamed:(id)arg1 error:(id *)arg2;
+ (id)localCPU:(id *)arg1;
+ (id)localOverrideName;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)serializationData:(id *)arg1;
- (id)allAliasAndNameStrings;
- (id)eventFromNameOrAlias:(id)arg1;
- (id)eventFromName:(id)arg1;
- (struct kpep_db *)kpepDB;
- (void)dealloc;
- (id)initWithName:(id)arg1 database:(struct kpep_db *)arg2;
- (id)description;

@end

