//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEInspectorContentView, IDEInspectorProperty, NSArray, NSAttributedString, NSBundle, NSSet, NSString, NSView, NSXMLElement;

@protocol IDEBindableDeclarativeInspectorController <NSObject>
+ (NSArray *)inspectedArrayControllerKeys;
@property(readonly) IDEInspectorContentView *inspectorContentView;
@property(readonly) id inspectedObject;
@property(readonly) NSArray *inspectedObjects;
@property(readonly) NSBundle *bundle;

@optional
- (NSString *)filePathForExternalInspectorContentWithIdentifier:(NSString *)arg1;
- (NSString *)accessibilityTitleForSliverElement:(NSXMLElement *)arg1;
- (NSAttributedString *)attributedTitleForSliverElement:(NSXMLElement *)arg1;
- (NSView *)accessoryViewForInspectorProperty:(IDEInspectorProperty *)arg1;
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(NSString *)arg2 onObject:(id)arg3 fromKeyPath:(NSString *)arg4 ofObject:(id)arg5;
- (NSAttributedString *)inspectorProperty:(IDEInspectorProperty *)arg1 toolTipContentFromKeyPath:(NSString *)arg2 titleAttribute:(NSString *)arg3 placeholderAttribute:(NSString *)arg4;
- (NSSet *)searchableAttributesForProperty:(IDEInspectorProperty *)arg1;
@end

