//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUBufferViewerTableTextField;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerRowTableCellView : NSTableCellView
{
    long long _row;
    GPUBufferViewerTableTextField *_rowView;
}

+ (id)sharedIdentifier;
@property(retain, nonatomic) GPUBufferViewerTableTextField *rowView; // @synthesize rowView=_rowView;
@property(nonatomic) long long row; // @synthesize row=_row;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)init;

@end

