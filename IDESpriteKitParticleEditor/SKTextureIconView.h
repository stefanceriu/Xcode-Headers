//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSImage, NSString;

@interface SKTextureIconView : NSTableRowView
{
    NSImage *_image;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

