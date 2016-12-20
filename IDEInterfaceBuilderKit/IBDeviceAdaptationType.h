//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IBDeviceAdaptationType : NSObject <NSCopying>
{
    NSString *_identifier;
    Class _adaptationClass;
    NSString *_displayName;
}

+ (id)adaptationTypeForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) Class adaptationClass; // @synthesize adaptationClass=_adaptationClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDeviceAdaptationType:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 adaptationClass:(Class)arg2 displayName:(id)arg3;

@end

