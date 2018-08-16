//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSImage, NSString;

@interface IBUISegment : NSObject <IBDocumentArchiving, NSCoding>
{
    BOOL _enabled;
    NSString *_title;
    double _width;
    NSImage *_image;
    struct CGSize _contentOffset;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property struct CGSize contentOffset; // @synthesize contentOffset=_contentOffset;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property double width; // @synthesize width=_width;
@property(copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 width:(double)arg2 enabled:(BOOL)arg3 contentOffset:(struct CGSize)arg4 image:(id)arg5;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

