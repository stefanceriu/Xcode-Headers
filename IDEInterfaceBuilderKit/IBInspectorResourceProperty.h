//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IBResourceValueTransformer, IDEInspectorKeyPath;

@interface IBInspectorResourceProperty : IDEInspectorProperty
{
    IBAutoCompletingComboBoxDataSource *_comboBoxDataSource;
    IBResourceValueTransformer *_resourceValueTransformer;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_listContentKeyPath;
    IBButtonComboBox *_comboBox;
}

@property(retain) IBButtonComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)configureComboBoxButton;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)mediaType;
- (Class)resourceClass;
- (BOOL)useNameAsValue;
- (id)resourceType;
- (double)baseline;
- (id)inspectorController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

