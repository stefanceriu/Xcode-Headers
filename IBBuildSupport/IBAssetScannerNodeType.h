//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IBAssetScannerNodeType : NSObject
{
    BOOL _acceptsTags;
    BOOL _propagatesTags;
    BOOL _isolatesContent;
    NSNumber *_namespacesContent;
    NSString *_implicitTagFormat;
    NSString *_contentReferenceTypeName;
}

+ (id)allNodeTypesByExtension;
@property(readonly) NSString *contentReferenceTypeName; // @synthesize contentReferenceTypeName=_contentReferenceTypeName;
@property(readonly) NSString *implicitTagFormat; // @synthesize implicitTagFormat=_implicitTagFormat;
@property(readonly) NSNumber *namespacesContent; // @synthesize namespacesContent=_namespacesContent;
@property(readonly) BOOL isolatesContent; // @synthesize isolatesContent=_isolatesContent;
@property(readonly) BOOL propagatesTags; // @synthesize propagatesTags=_propagatesTags;
@property(readonly) BOOL acceptsTags; // @synthesize acceptsTags=_acceptsTags;
- (void).cxx_destruct;
- (id)initWithExtension:(id)arg1;

@end

