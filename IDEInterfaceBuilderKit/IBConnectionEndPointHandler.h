//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractConnectionEndPointHandler.h>

@class IBCancellationToken;

@interface IBConnectionEndPointHandler : IBAbstractConnectionEndPointHandler
{
    IBCancellationToken *_highlightCancellationToken;
}

- (void).cxx_destruct;
- (id)connectionForConnectingFromAnnotation:(id)arg1;
- (id)presentDisambiguatingPopupForAnnotationConnections:(id)arg1;
- (void)connectionMenu:(id)arg1 willHighlightItem:(id)arg2;
- (id)connectionForPrototype:(id)arg1 interfaceStyle:(id)arg2;
- (id)connectionForConnectingFromObject:(id)arg1;
- (void)_addConnections:(id)arg1 fromSource:(id)arg2 toMutableMenuItems:(id)arg3 underDisplayGroup:(id)arg4 deprecated:(BOOL)arg5 addingConnectionsToMutableCollection:(id)arg6 addingItemsWithStateImagesToMutableCollection:(id)arg7;
- (void)primitiveInvalidate;

@end

