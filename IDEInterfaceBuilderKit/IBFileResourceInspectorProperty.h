//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTFileDataType, IDEInspectorKeyPath, NSComboBox, NSString;

@interface IBFileResourceInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    BOOL _allowsNilValues;
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    DVTFileDataType *_supportedFileDataType;
    NSComboBox *_comboBox;
}

@property(retain) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (id)suggestedResourceNames;
- (double)baseline;

@end

