//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBasicPlaygroundQuickLookForObjectReflection.h>

@class DVTColorSwatchWithComponentsView, NSView;

@interface IDEPlaygroundQuickLookForColor : IDEBasicPlaygroundQuickLookForObjectReflection
{
    NSView *_naturalView;
    DVTColorSwatchWithComponentsView *_naturalColorSwatchWithComponentsView;
}

@property __weak DVTColorSwatchWithComponentsView *naturalColorSwatchWithComponentsView; // @synthesize naturalColorSwatchWithComponentsView=_naturalColorSwatchWithComponentsView;
@property __weak NSView *naturalView; // @synthesize naturalView=_naturalView;
- (void).cxx_destruct;
- (id)iconOnlyViewForCollectionView;
- (id)quickLookViewForNaturalSize;
- (void)loadView;
- (id)initWithObjectReflection:(id)arg1;

@end

