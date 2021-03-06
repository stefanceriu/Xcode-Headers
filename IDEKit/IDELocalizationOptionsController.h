//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

#import <IDEKit/_TtP6IDEKit40IDELocalizationApplicationRegionDelegate_-Protocol.h>
#import <IDEKit/_TtP6IDEKit42IDELocalizationApplicationLanguageDelegate_-Protocol.h>

@class NSView, _TtC6IDEKit42IDELocalizationApplicationRegionController, _TtC6IDEKit44IDELocalizationApplicationLanguageController;

@interface IDELocalizationOptionsController : IDELaunchActionOptionViewController <_TtP6IDEKit42IDELocalizationApplicationLanguageDelegate_, _TtP6IDEKit40IDELocalizationApplicationRegionDelegate_>
{
    _TtC6IDEKit44IDELocalizationApplicationLanguageController *_applicationLanguageController;
    _TtC6IDEKit42IDELocalizationApplicationRegionController *_applicationRegionController;
    NSView *_applicationLanguageContainer;
    NSView *_applicationRegionContainer;
}

+ (BOOL)availableForScheme:(id)arg1;
@property __weak NSView *applicationRegionContainer; // @synthesize applicationRegionContainer=_applicationRegionContainer;
@property __weak NSView *applicationLanguageContainer; // @synthesize applicationLanguageContainer=_applicationLanguageContainer;
@property(readonly) _TtC6IDEKit42IDELocalizationApplicationRegionController *applicationRegionController; // @synthesize applicationRegionController=_applicationRegionController;
@property(readonly) _TtC6IDEKit44IDELocalizationApplicationLanguageController *applicationLanguageController; // @synthesize applicationLanguageController=_applicationLanguageController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)regionPopUpHasChanged:(id)arg1;
- (void)languagePopUpHasChanged:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;

@end

