//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBType <NSObject>
- (const char *)GetDisplayTypeName;
- (id <DBGSBTypeMember>)GetDirectBaseClassAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumberOfDirectBaseClasses;
- (const char *)GetName;
- (id <DBGSBType>)GetPointeeType;
- (unsigned int)GetTypeClass;
- (_Bool)IsPointerType;
- (_Bool)IsValid;
@end

