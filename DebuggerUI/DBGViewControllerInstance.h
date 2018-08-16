//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGRenderableInstance.h>

@class DBGControllerDecorationNode, DBGViewObject, NSImage, NSString;

@interface DBGViewControllerInstance : DBGRenderableInstance
{
    NSString *_title;
    NSImage *_icon;
    DBGViewObject *_controllerObject;
    DBGControllerDecorationNode *_controllerDecorationNode;
}

@property __weak DBGControllerDecorationNode *controllerDecorationNode; // @synthesize controllerDecorationNode=_controllerDecorationNode;
@property __weak DBGViewObject *controllerObject; // @synthesize controllerObject=_controllerObject;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (id)initWithControllerObject:(id)arg1;

@end

