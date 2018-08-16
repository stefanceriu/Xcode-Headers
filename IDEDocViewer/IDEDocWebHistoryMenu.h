//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@class WebView;

@interface IDEDocWebHistoryMenu : NSMenu
{
    BOOL _isForwardList;
    WebView *_webView;
}

+ (id)historyMenuWithWebView:(id)arg1 isForwardList:(BOOL)arg2;
@property(nonatomic) BOOL isForwardList; // @synthesize isForwardList=_isForwardList;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)update;
- (void)_backList;
- (void)_forwardList;
- (void)webViewSelectHistoryItem:(id)arg1;
- (void)webViewGoForward:(id)arg1;
- (void)webViewGoBack:(id)arg1;
- (id)initWithWebView:(id)arg1 isForwardList:(BOOL)arg2;

@end

