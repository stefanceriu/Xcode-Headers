//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUBufferViewerDefaults, GPUBufferViewerTableTextField;
@protocol GPUBufferViewerDataSource;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerRowOutlineCellView : NSTableCellView
{
    long long _row;
    unsigned long long _offset;
    id <GPUBufferViewerDataSource> _dataSource;
    GPUBufferViewerDefaults *_defaults;
    GPUBufferViewerTableTextField *_rowView;
    GPUBufferViewerTableTextField *_offsetView;
}

+ (id)sharedIdentifier;
@property(retain, nonatomic) GPUBufferViewerTableTextField *offsetView; // @synthesize offsetView=_offsetView;
@property(retain, nonatomic) GPUBufferViewerTableTextField *rowView; // @synthesize rowView=_rowView;
@property(retain, nonatomic) GPUBufferViewerDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) __weak id <GPUBufferViewerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long row; // @synthesize row=_row;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)init;

@end

