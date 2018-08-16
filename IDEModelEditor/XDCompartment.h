//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>
#import <IDEModelEditor/NSCoding-Protocol.h>

@class DVTStackBacktrace, NSColor, NSImage, NSString, XDCompartmentGraphic, XDCompartmentItem;

@interface XDCompartment : NSObject <NSCoding, DVTInvalidation>
{
    XDCompartmentGraphic *_compartmentGraphic;
    id _identifier;
    NSImage *_iconImage;
    NSString *_label;
    NSColor *_backgroundColor;
    id _objectValue;
    XDCompartmentItem *_compartmentItem;
    struct CGSize _compartmentItemMinSize;
    struct _XDCompartmentFlags _cFlags;
}

+ (Class)defaultCompartmentItemClass;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (struct CGSize)compartmentItemMinSize;
- (void)setCompartmentItemMinSize:(struct CGSize)arg1;
- (id)compartmentItemAtIndex:(long long)arg1;
- (id)compartmentItem;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)compartmentGraphic;
- (void)setCompartmentGraphic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

