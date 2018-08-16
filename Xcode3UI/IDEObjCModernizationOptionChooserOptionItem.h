//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPopUpButtonCell, IDEObjCModernizationOptionChooserAssistant, NSArray, NSDictionary, NSMutableArray, NSString, XCPropertyDefinition;

@interface IDEObjCModernizationOptionChooserOptionItem : NSObject
{
    XCPropertyDefinition *_propertyDefinition;
    IDEObjCModernizationOptionChooserAssistant *_optionChooserAssistant;
    IDEObjCModernizationOptionChooserOptionItem *_parentOptionItem;
    NSMutableArray *_childOptionItems;
    NSString *_selectedValue;
    DVTPopUpButtonCell *_valuePopUpButtonCell;
    BOOL _enabled;
    long long _state;
}

+ (id)keyPathsForValuesAffectingModernizerOptions;
+ (id)keyPathsForValuesAffectingArrangedChildOptionItems;
@property long long state; // @synthesize state=_state;
@property(readonly, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property IDEObjCModernizationOptionChooserOptionItem *parentOptionItem; // @synthesize parentOptionItem=_parentOptionItem;
@property IDEObjCModernizationOptionChooserAssistant *optionChooserAssistant; // @synthesize optionChooserAssistant=_optionChooserAssistant;
@property(readonly) XCPropertyDefinition *propertyDefinition; // @synthesize propertyDefinition=_propertyDefinition;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *modernizerOptions;
- (void)_valuePopUpButtonCellMenuItemAction:(id)arg1;
@property(readonly, copy) DVTPopUpButtonCell *valuePopUpButtonCell;
@property(copy) NSString *selectedValue;
- (void)removeObjectFromChildOptionItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildOptionItemsAtIndex:(unsigned long long)arg2;
- (id)_childOptionItems;
@property(readonly, copy) NSMutableArray *mutableChildOptionItems;
- (id)arrangedChildOptionItems;
@property(readonly, copy) NSArray *childOptionItems;
@property(readonly) double rowHeight;
@property(readonly, copy) NSString *subtitle;
@property(readonly, copy) NSString *title;
@property(readonly, copy) NSString *name;
- (id)initWithPropertyDefinition:(id)arg1;

@end

