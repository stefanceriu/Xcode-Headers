//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKEDocumentMember;

@interface SKEDocumentMenuItemInfoObject : NSObject
{
    id <SKEDocumentMember> _member;
    Class _memberAttributeClass;
}

@property(retain) Class memberAttributeClass; // @synthesize memberAttributeClass=_memberAttributeClass;
@property(retain) id <SKEDocumentMember> member; // @synthesize member=_member;
- (void).cxx_destruct;
- (id)description;

@end

