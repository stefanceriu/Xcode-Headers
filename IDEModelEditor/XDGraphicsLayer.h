//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/NSCoding-Protocol.h>

@class NSString, XDDiagramStorage;

@interface XDGraphicsLayer : NSObject <NSCoding>
{
    XDDiagramStorage *_diagramStorage;
    NSString *_title;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)diagramStorage;
- (void)_setDiagramStorage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

