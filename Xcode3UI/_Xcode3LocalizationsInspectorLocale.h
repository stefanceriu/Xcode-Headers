//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTLocale, Xcode3VariantFileReference;

@interface _Xcode3LocalizationsInspectorLocale : NSObject
{
    BOOL _localized;
    DVTLocale *_locale;
    Xcode3VariantFileReference *_fileReference;
    DVTFileDataType *_fileDataType;
}

@property(retain) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
@property BOOL localized; // @synthesize localized=_localized;
@property(retain) Xcode3VariantFileReference *fileReference; // @synthesize fileReference=_fileReference;
@property(readonly) DVTLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)image;
- (id)initWithLocale:(id)arg1 fileReference:(id)arg2 fileDataType:(id)arg3;

@end

