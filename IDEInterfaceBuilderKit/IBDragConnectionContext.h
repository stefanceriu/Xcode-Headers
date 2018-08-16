//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBConnection, NSSet, NSString;

@interface IBDragConnectionContext : NSObject
{
    BOOL _limitToInterfaceBuilder;
    NSString *_connectionName;
    long long _relationshipType;
    NSString *_sourceClassName;
    id _source;
    IBConnection *_prototype;
    NSSet *_endPointProvidingDocuments;
}

@property(readonly) NSSet *endPointProvidingDocuments; // @synthesize endPointProvidingDocuments=_endPointProvidingDocuments;
@property(readonly) BOOL limitToInterfaceBuilder; // @synthesize limitToInterfaceBuilder=_limitToInterfaceBuilder;
@property(readonly) IBConnection *prototype; // @synthesize prototype=_prototype;
@property(readonly) id source; // @synthesize source=_source;
@property(readonly) NSString *sourceClassName; // @synthesize sourceClassName=_sourceClassName;
@property(readonly) long long relationshipType; // @synthesize relationshipType=_relationshipType;
@property(readonly) NSString *connectionName; // @synthesize connectionName=_connectionName;
- (void).cxx_destruct;
- (id)initWithConnectionName:(id)arg1 relationshipType:(long long)arg2 sourceClassName:(id)arg3 endPointProvidingDocuments:(id)arg4 limitedToInterfaceBuilder:(BOOL)arg5;
- (id)initWithPrototype:(id)arg1 endPointProvidingDocuments:(id)arg2;
- (id)initWithSource:(id)arg1 endPointProvidingDocuments:(id)arg2;

@end

