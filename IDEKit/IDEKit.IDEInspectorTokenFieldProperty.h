//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDESourceControlMiniNameTokenView;

@interface IDEKit.IDEInspectorTokenFieldProperty : IDEInspectorProperty
{
    // Error parsing type: , name: nameTokenView
    // Error parsing type: , name: valueKeyPath
    // Error parsing type: , name: menuKeyPath
    // Error parsing type: , name: placeholderKeyPath
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: tokenMenu
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primitiveInvalidate;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (id)menuForNameToken:(id)arg1;
- (BOOL)shouldShowToken;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak IDESourceControlMiniNameTokenView *nameTokenView; // @synthesize nameTokenView;

@end
