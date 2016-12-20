//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAssetCapsule.h>

@interface IBICReferencedContentPlaceholderCapsule : IBICAssetCapsule
{
}

+ (id)createPlaceholderTextField;
- (void)refreshFromReferencingItem:(id)arg1;
- (id)assetComponentIDAtPoint:(struct CGPoint)arg1;
- (id)targettedAssetComponentIDsAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForImageOfComponentWithAssetComponentID:(id)arg1;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (void)setContextFocusedAssetComponentIDs:(id)arg1;
- (struct CGRect)bandSelectionFrameForAssetComponentID:(id)arg1;
- (void)layoutBottomUp;
- (id)initWithFrame:(struct CGRect)arg1;

@end

