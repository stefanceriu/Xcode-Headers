//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface IBScrollFocusSettings : NSObject
{
    BOOL _makeKey;
    BOOL _takeFocus;
    BOOL _orderFront;
    BOOL _scrollToVisible;
    BOOL _shouldCenter;
    BOOL _animate;
    NSNumber *_zoomToLevel;
}

+ (id)none;
+ (id)makeKeyTakingFocus:(BOOL)arg1 orderFront:(BOOL)arg2;
+ (id)makeKeyTakingFocus:(BOOL)arg1 orderFront:(BOOL)arg2 scrollToVisible:(BOOL)arg3 shouldCenter:(BOOL)arg4 animate:(BOOL)arg5;
+ (id)makeKey:(BOOL)arg1 takeFocus:(BOOL)arg2 orderFront:(BOOL)arg3 scrollToVisible:(BOOL)arg4 shouldCenter:(BOOL)arg5 animate:(BOOL)arg6;
@property(nonatomic) BOOL animate; // @synthesize animate=_animate;
@property(nonatomic) BOOL shouldCenter; // @synthesize shouldCenter=_shouldCenter;
@property(retain, nonatomic) NSNumber *zoomToLevel; // @synthesize zoomToLevel=_zoomToLevel;
@property(nonatomic) BOOL scrollToVisible; // @synthesize scrollToVisible=_scrollToVisible;
@property(nonatomic) BOOL orderFront; // @synthesize orderFront=_orderFront;
@property(nonatomic) BOOL takeFocus; // @synthesize takeFocus=_takeFocus;
@property(nonatomic) BOOL makeKey; // @synthesize makeKey=_makeKey;
- (void).cxx_destruct;
- (id)initWithMakeKey:(BOOL)arg1 takeFocus:(BOOL)arg2 orderFront:(BOOL)arg3 scrollToVisible:(BOOL)arg4 shouldCenter:(BOOL)arg5 animate:(BOOL)arg6;

@end

