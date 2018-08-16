//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/NSCoding-Protocol.h>

@class NSMutableArray, NSString, XDPMModel;

@interface XDPMConfiguration : NSObject <NSCoding>
{
    NSString *_name;
    XDPMModel *_model;
    NSMutableArray *_entities;
}

+ (id)configurationFromPasteboradPlist:(id)arg1 model:(id)arg2;
- (void).cxx_destruct;
- (id)pasteboardPlist;
- (id)undoManager;
- (void)removeAllEntities;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
- (id)_mutableEntities;
- (id)entities;
- (void)setModel:(id)arg1;
- (id)model;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

