//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGRuntimeClassDescription, DBGSnapshotNode, NSMutableDictionary, NSString;
@protocol DBGValue;

@interface DBGSnapshotProperty : NSObject
{
    id <DBGValue> _value;
    long long _valueStatus;
    NSString *_name;
    NSString *_runtimeType;
    NSString *_logicalType;
    NSString *_format;
    DBGRuntimeClassDescription *_runtimeClassDescription;
    long long _visibility;
    long long _options;
    DBGSnapshotNode *_snapshotNode;
    NSMutableDictionary *_subpropertiesMap;
}

+ (id)propertyWithName:(id)arg1 runtimeType:(id)arg2 value:(id)arg3;
+ (id)propertyWithName:(id)arg1;
@property(retain) NSMutableDictionary *subpropertiesMap; // @synthesize subpropertiesMap=_subpropertiesMap;
@property __weak DBGSnapshotNode *snapshotNode; // @synthesize snapshotNode=_snapshotNode;
@property long long options; // @synthesize options=_options;
@property long long visibility; // @synthesize visibility=_visibility;
@property(retain) DBGRuntimeClassDescription *runtimeClassDescription; // @synthesize runtimeClassDescription=_runtimeClassDescription;
@property(retain) NSString *format; // @synthesize format=_format;
@property(retain) NSString *logicalType; // @synthesize logicalType=_logicalType;
@property(retain) NSString *runtimeType; // @synthesize runtimeType=_runtimeType;
@property(retain) NSString *name; // @synthesize name=_name;
@property long long valueStatus; // @synthesize valueStatus=_valueStatus;
@property(retain) id <DBGValue> value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly) NSString *stringValue;
@property(readonly) float floatValue;
@property struct CGRect rectValue;
@property struct CGSize sizeValue;
@property struct CGPoint pointValue;
@property double CGFloatValue;
@property long long integerValue;
@property BOOL boolValue;
- (id)dictionaryRepresentation;
- (BOOL)logicalTypeEquals:(struct __CFString *)arg1;
- (BOOL)isEditable;
- (void)addSubproperty:(id)arg1;
- (id)subpropertyWithName:(id)arg1;
- (id)allSubproperties;
- (id)initWithName:(id)arg1 runtimeType:(id)arg2 value:(id)arg3 valueStatus:(long long)arg4;
- (id)JSONPropertyDescription;
- (void)updateWithJSONPropertyDescription:(id)arg1;

@end

