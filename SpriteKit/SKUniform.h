//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SKTexture;

@interface SKUniform : NSObject <NSCopying, NSCoding>
{
    long long _type;
    NSString *_name;
    unsigned long long _seed;
    SKTexture *_textureValue;
    NSMutableArray *_targetShaders;
    // Error parsing type: (?="_floatValue"f"_floatVector2Value""_floatVector3Value""_floatVector4Value""_floatMatrix2Value"{?="columns"[2]}"_floatMatrix3Value"{?="columns"[3]}"_floatMatrix4Value"{?="columns"[4]}), name: _value
}

+ (id)uniformWithName:(id)arg1 texture:(id)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2)arg2;
+ (id)uniformWithName:(id)arg1 floatVector4:(union _GLKVector4)arg2;
+ (id)uniformWithName:(id)arg1 floatVector3:(union _GLKVector3)arg2;
+ (id)uniformWithName:(id)arg1 floatVector2:(union _GLKVector2)arg2;
+     // Error parsing type: @88@0:8@16{?=[4]}24, name: uniformWithName:matrixFloat4x4:
+     // Error parsing type: @72@0:8@16{?=[3]}24, name: uniformWithName:matrixFloat3x3:
+     // Error parsing type: @40@0:8@16{?=[2]}24, name: uniformWithName:matrixFloat2x2:
+ (id)uniformWithName:(id)arg1 vectorFloat4: /* Error: Ran out of types for this method. */;
+ (id)uniformWithName:(id)arg1 vectorFloat3: /* Error: Ran out of types for this method. */;
+ (id)uniformWithName:(id)arg1 vectorFloat2: /* Error: Ran out of types for this method. */;
+ (id)uniformWithName:(id)arg1 float:(float)arg2;
+ (id)uniformWithName:(id)arg1;
@property unsigned long long _seed; // @synthesize _seed;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_removeTargetShader:(id)arg1;
- (void)_addTargetShader:(id)arg1;
- (void)_propagateChange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long uniformType;
@property(nonatomic) float floatValue;
@property(retain, nonatomic) SKTexture *textureValue;
// Error parsing type for property matrixFloat4x4Value:
// Property attributes: T{?=[4]},N

// Error parsing type for property matrixFloat3x3Value:
// Property attributes: T{?=[3]},N

// Error parsing type for property matrixFloat2x2Value:
// Property attributes: T{?=[2]},N

// Error parsing type for property vectorFloat4Value:
// Property attributes: T,N

// Error parsing type for property vectorFloat3Value:
// Property attributes: T,N

// Error parsing type for property vectorFloat2Value:
// Property attributes: T,N

@property union _GLKMatrix4 floatMatrix4Value;
@property union _GLKMatrix3 floatMatrix3Value;
@property union _GLKMatrix2 floatMatrix2Value;
@property union _GLKVector4 floatVector4Value;
@property union _GLKVector3 floatVector3Value;
@property union _GLKVector2 floatVector2Value;
- (id)initWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4)arg2;
- (id)initWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3)arg2;
- (id)initWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2)arg2;
- (id)initWithName:(id)arg1 floatVector4:(union _GLKVector4)arg2;
- (id)initWithName:(id)arg1 floatVector3:(union _GLKVector3)arg2;
- (id)initWithName:(id)arg1 floatVector2:(union _GLKVector2)arg2;
-     // Error parsing type: @88@0:8@16{?=[4]}24, name: initWithName:matrixFloat4x4:
-     // Error parsing type: @72@0:8@16{?=[3]}24, name: initWithName:matrixFloat3x3:
-     // Error parsing type: @40@0:8@16{?=[2]}24, name: initWithName:matrixFloat2x2:
- (id)initWithName:(id)arg1 vectorFloat4: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 vectorFloat3: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 vectorFloat2: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 texture:(id)arg2;
- (id)initWithName:(id)arg1 float:(float)arg2;
- (id)initWithName:(id)arg1;
- (id)description;

@end

