//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DTTimelineTileDrawingContext : NSObject
{
    struct TileMetrics _tileMetrics;
    struct CGPath *_defaultColorPath;
    struct unordered_map<unsigned long, std::__1::tuple<NSColor *, CGPath *>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::tuple<NSColor *, CGPath *>>>> _paths;
    NSMutableDictionary *_stringsDictionary;
    struct unordered_map<float, NSImage *, std::__1::hash<float>, std::__1::equal_to<float>, std::__1::allocator<std::__1::pair<const float, NSImage *>>> _imageDictionary;
    long long _dynamicRangeLow;
    double _range;
    double _screenScale;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint)_pointForBottomOfPlane:(int)arg1 atTime:(unsigned long long)arg2;
- (struct CGPoint)_pointForTopOfPlane:(int)arg1 atTime:(unsigned long long)arg2;
- (double)_heightOfPlane:(int)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)addPlaneConnectionFromPlane:(int)arg1 fromNanosecondOffset:(long long)arg2 toPlane:(int)arg3 toNanosecondOffset:(long long)arg4;
- (void)addAttributedString:(id)arg1 position:(float)arg2;
- (void)addArrayOfIntervalValues:(long long *)arg1 colors:(id *)arg2 count:(unsigned int)arg3 span:(struct Span)arg4;
- (void)addIntervalValue:(long long)arg1 color:(id)arg2 icon:(id)arg3 span:(struct Span)arg4;
- (void)addPointValue:(long long)arg1 color:(id)arg2 icon:(id)arg3 position:(float)arg4;
- (void)dealloc;
- (id)initWithTileMetrics:(const struct TileMetrics *)arg1;

@end
