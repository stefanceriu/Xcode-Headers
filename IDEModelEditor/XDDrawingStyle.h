//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/NSCoding-Protocol.h>
#import <IDEModelEditor/NSCopying-Protocol.h>

@class XDGraphic;

@interface XDDrawingStyle : NSObject <NSCoding, NSCopying>
{
    XDGraphic *_graphic;
}

+ (id)defaultDrawingStyle;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawInView:(id)arg1;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
- (id)undoManager;
- (id)graphic;
- (void)_setGraphic:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithGraphic:(id)arg1;

@end

