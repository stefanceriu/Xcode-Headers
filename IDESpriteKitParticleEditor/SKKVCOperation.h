//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSString;

@interface SKKVCOperation : SKDocumentOperation
{
    NSString *_keypath;
    id _target;
    id _oldValue;
    id _newValue;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 target:(id)arg2 newValue:(id)arg3 oldValue:(id)arg4 keyPath:(id)arg5;

@end

