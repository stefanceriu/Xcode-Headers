//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEFindNavigatorGroupScopeOutlineItem;

@interface IDEFindNavigatorScopeChooserExplorationItem : NSObject
{
    NSObject *_source;
    IDEFindNavigatorScopeChooserExplorationItem *_parent;
    IDEFindNavigatorGroupScopeOutlineItem *_outlineItem;
}

@property(retain) IDEFindNavigatorGroupScopeOutlineItem *outlineItem; // @synthesize outlineItem=_outlineItem;
@property(readonly) IDEFindNavigatorScopeChooserExplorationItem *parent; // @synthesize parent=_parent;
@property(readonly) NSObject *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 parent:(id)arg2;
- (id)initWithSource:(id)arg1 parent:(id)arg2 outlineItem:(id)arg3;

@end

