//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/DVTInvalidation-Protocol.h>
#import <IDESourceEditor/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBlueprint, IDETestableProvider;

@protocol IDEBlueprintProvider <DVTInvalidation, NSObject>
+ (NSArray *)availableSwiftVersions;
@property(readonly) id <IDETestableProvider> testableProvider;
@property(readonly, copy) NSString *classPrefix;
@property(readonly, copy) NSString *organizationName;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSArray *blueprints;
- (id <IDEBlueprint>)blueprintForName:(NSString *)arg1;
- (id <IDEBlueprint>)blueprintForIdentifier:(NSString *)arg1;

@optional
@property(readonly) NSArray *sourcePackageReferences;
@property int buildSystemType;
@end

