//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IBDeviceBezel, NSImageView;

@interface IBDeviceBezelView : NSView
{
    IBDeviceBezel *_deviceBezel;
    NSImageView *_imageView;
}

+ (id)viewForBezel:(id)arg1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupArtworkImageView;
- (id)initWithBezel:(id)arg1;

@end

