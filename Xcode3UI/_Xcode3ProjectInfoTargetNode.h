//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/_Xcode3ProjectInfoTreeNode.h>

@class PBXTarget, _Xcode3ProjectInfoProjectNode;

@interface _Xcode3ProjectInfoTargetNode : _Xcode3ProjectInfoTreeNode
{
    _Xcode3ProjectInfoProjectNode *_project;
    PBXTarget *_target;
}

@property(readonly) __weak _Xcode3ProjectInfoProjectNode *projectNode; // @synthesize projectNode=_project;
@property(readonly) PBXTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)basedOnFileColumnIcon;
- (id)configurationColumnIcon;
- (id)displayName;
- (id)initWithTarget:(id)arg1 forProject:(id)arg2;

@end

