//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSMenuItem;

@interface IDEDMMenuButton : NSButton
{
}

+ (id)keyPathsForValuesAffectingCurrentMenuItem;
- (void)_runPopup:(id)arg1;
@property(retain) NSMenuItem *currentMenuItem;
- (struct CGSize)menuOffset;
- (void)setMenu:(id)arg1;

@end
