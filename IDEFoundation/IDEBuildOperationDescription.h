//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEBuildOperationDescription : NSObject
{
    NSString *_objectToBuildName;
    NSString *_actionName;
    NSString *_actionInProgress;
}

@property(readonly, copy) NSString *actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(readonly, copy) NSString *actionName; // @synthesize actionName=_actionName;
@property(readonly, copy) NSString *objectToBuildName; // @synthesize objectToBuildName=_objectToBuildName;
- (void).cxx_destruct;
- (id)initWithObjectToBuildName:(id)arg1 actionName:(id)arg2 actionInProgress:(id)arg3;

@end

