//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSComboBoxCellDataSource-Protocol.h>
#import <IDEInterfaceBuilderKit/NSComboBoxDataSource-Protocol.h>

@class NSArray, NSString;

@interface IBAutoCompletingComboBoxDataSource : NSObject <NSComboBoxDataSource, NSComboBoxCellDataSource>
{
    NSArray *_orderedValues;
}

- (void).cxx_destruct;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)comboBoxCell:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBoxCell:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBoxCell:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBoxCell:(id)arg1;
- (void)takeContentFromStrings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

