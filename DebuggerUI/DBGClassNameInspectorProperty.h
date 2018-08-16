//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEIndexSymbol, IDEInspectorKeyPath, NSButton, NSLayoutConstraint, NSTextField;

@interface DBGClassNameInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSLayoutConstraint *_trailingLabelToJumpButtonConstraint;
    NSTextField *_textField;
    NSButton *_linkButton;
    IDEIndexSymbol *_symbol;
}

@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property __weak NSButton *linkButton; // @synthesize linkButton=_linkButton;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak NSLayoutConstraint *trailingLabelToJumpButtonConstraint; // @synthesize trailingLabelToJumpButtonConstraint=_trailingLabelToJumpButtonConstraint;
- (void).cxx_destruct;
- (void)linkButtonAction:(id)arg1;
- (id)_tabControllerForWindow;
- (void)_setLinkButtonHidden:(BOOL)arg1;
- (void)_configureForNilString;
- (id)symbolForName:(id)arg1 moduleName:(id)arg2 inCollection:(id)arg3;
- (void)_getSymbol:(id)arg1;
- (double)baseline;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)propertyViewWillUninstallFromContentView;
- (void)propertyViewDidInstallIntoWindow;
- (void)refresh;

@end

