//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUBufferViewerDataSource.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerAdaptorDataSource : NSObject <GPUBufferViewerDataSource>
{
    BOOL _supportsOffset;
    unsigned long long _offset;
    id <GPUBufferViewerAdaptor> _adaptor;
    id <GPUBufferViewerDataSourceProvider> _provider;
    NSString *_titleForRowColumn;
    NSString *_titleForMarkersColumn;
    double _defaultWidthForMarkersColumn;
    id <GPUBufferViewerElement> _indexElement;
    id <GPUBufferViewerElement> _patchIndexElement;
    id <GPUBufferViewerElement> _controlPointElement;
    id <GPUBufferViewerElement> _controlPointIndexElement;
    id <GPUBufferViewerElement> _tessellationEdgeFactorsElement;
    id <GPUBufferViewerElement> _tessellationInsideFactorsElement;
    NSMutableArray *_elements;
    NSMutableArray *_markers;
    unsigned long long _numberOfRows;
    unsigned long long _rowStride;
    unsigned long long _bufferSize;
    unsigned long long _paddingAtStart;
    unsigned long long _paddingAtEnd;
    unsigned long long _rowsPerInstance;
    unsigned long long _rowsPerPatch;
    unsigned long long _rowColumnFirstValue;
}

@property(nonatomic) unsigned long long rowColumnFirstValue; // @synthesize rowColumnFirstValue=_rowColumnFirstValue;
@property(nonatomic) unsigned long long rowsPerPatch; // @synthesize rowsPerPatch=_rowsPerPatch;
@property(nonatomic) unsigned long long rowsPerInstance; // @synthesize rowsPerInstance=_rowsPerInstance;
@property(nonatomic) unsigned long long paddingAtEnd; // @synthesize paddingAtEnd=_paddingAtEnd;
@property(nonatomic) unsigned long long paddingAtStart; // @synthesize paddingAtStart=_paddingAtStart;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) unsigned long long rowStride; // @synthesize rowStride=_rowStride;
@property(nonatomic) BOOL supportsOffset; // @synthesize supportsOffset=_supportsOffset;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(copy, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(copy, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) id <GPUBufferViewerElement> tessellationInsideFactorsElement; // @synthesize tessellationInsideFactorsElement=_tessellationInsideFactorsElement;
@property(retain, nonatomic) id <GPUBufferViewerElement> tessellationEdgeFactorsElement; // @synthesize tessellationEdgeFactorsElement=_tessellationEdgeFactorsElement;
@property(retain, nonatomic) id <GPUBufferViewerElement> controlPointIndexElement; // @synthesize controlPointIndexElement=_controlPointIndexElement;
@property(retain, nonatomic) id <GPUBufferViewerElement> controlPointElement; // @synthesize controlPointElement=_controlPointElement;
@property(retain, nonatomic) id <GPUBufferViewerElement> patchIndexElement; // @synthesize patchIndexElement=_patchIndexElement;
@property(retain, nonatomic) id <GPUBufferViewerElement> indexElement; // @synthesize indexElement=_indexElement;
@property(nonatomic) double defaultWidthForMarkersColumn; // @synthesize defaultWidthForMarkersColumn=_defaultWidthForMarkersColumn;
@property(retain, nonatomic) NSString *titleForMarkersColumn; // @synthesize titleForMarkersColumn=_titleForMarkersColumn;
@property(retain, nonatomic) NSString *titleForRowColumn; // @synthesize titleForRowColumn=_titleForRowColumn;
@property(nonatomic) __weak id <GPUBufferViewerDataSourceProvider> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) id <GPUBufferViewerAdaptor> adaptor; // @synthesize adaptor=_adaptor;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (unsigned long long)resolveControlPointIndex:(unsigned long long)arg1 withGeometryParams:(const struct GPUBufferViewerAdaptorGeometryParams *)arg2;
- (unsigned long long)resolvePatchIndex:(unsigned long long)arg1 withGeometryParams:(const struct GPUBufferViewerAdaptorGeometryParams *)arg2;
- (unsigned long long)resolveIndex:(unsigned long long)arg1 withGeometryParams:(const struct GPUBufferViewerAdaptorGeometryParams *)arg2 isPrimitiveRestart:(char *)arg3;
- (BOOL)expandStruct:(const struct Struct *)arg1 arrayElementOffset:(unsigned long long)arg2;
- (BOOL)processStruct:(const struct Struct *)arg1 withBuffers:(const vector_f0d801d4 *)arg2;
- (unsigned long long)rowAtOffset:(unsigned long long)arg1;
- (unsigned long long)offsetAtRow:(unsigned long long)arg1;
- (id)valueForElement:(id)arg1 atRow:(unsigned long long)arg2 dataRow:(unsigned long long)arg3 dataComponent:(unsigned long long)arg4 offset:(out unsigned long long *)arg5 error:(out id *)arg6;
- (id)initWithAdaptor:(id)arg1 provider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

