//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@interface IDEHexEditorDocumentLocation : DVTDocumentLocation
{
    CDStruct_91ee6ea3 _range;
}

- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 range:(CDStruct_91ee6ea3)arg2;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 range:(CDStruct_91ee6ea3)arg3;
- (void)setRange:(CDStruct_91ee6ea3)arg1;
- (CDStruct_91ee6ea3)range;

@end

