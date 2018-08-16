//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDocViewer/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSPasteboard, NSResponder, NSString, NSURLRequest, WebFrame, WebFrameView, WebView;
@protocol NSDraggingInfo, NSValidatedUserInterfaceItem, WebOpenPanelResultListener;

@protocol WebUIDelegate <NSObject>

@optional
- (struct CGRect)webViewContentRect:(WebView *)arg1;
- (void)webView:(WebView *)arg1 setContentRect:(struct CGRect)arg2;
- (NSString *)webView:(WebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3;
- (BOOL)webView:(WebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2;
- (void)webView:(WebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2;
- (void)webView:(WebView *)arg1 drawFooterInRect:(struct CGRect)arg2;
- (void)webView:(WebView *)arg1 drawHeaderInRect:(struct CGRect)arg2;
- (float)webViewFooterHeight:(WebView *)arg1;
- (float)webViewHeaderHeight:(WebView *)arg1;
- (void)webView:(WebView *)arg1 printFrameView:(WebFrameView *)arg2;
- (void)webView:(WebView *)arg1 willPerformDragSourceAction:(unsigned long long)arg2 fromPoint:(struct CGPoint)arg3 withPasteboard:(NSPasteboard *)arg4;
- (unsigned long long)webView:(WebView *)arg1 dragSourceActionMaskForPoint:(struct CGPoint)arg2;
- (void)webView:(WebView *)arg1 willPerformDragDestinationAction:(unsigned long long)arg2 forDraggingInfo:(id <NSDraggingInfo>)arg3;
- (unsigned long long)webView:(WebView *)arg1 dragDestinationActionMaskForDraggingInfo:(id <NSDraggingInfo>)arg2;
- (BOOL)webView:(WebView *)arg1 shouldPerformAction:(SEL)arg2 fromSender:(id)arg3;
- (BOOL)webView:(WebView *)arg1 validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg2 defaultValidation:(BOOL)arg3;
- (NSArray *)webView:(WebView *)arg1 contextMenuItemsForElement:(NSDictionary *)arg2 defaultMenuItems:(NSArray *)arg3;
- (void)webView:(WebView *)arg1 mouseDidMoveOverElement:(NSDictionary *)arg2 modifierFlags:(unsigned long long)arg3;
- (void)webView:(WebView *)arg1 runOpenPanelForFileButtonWithResultListener:(id <WebOpenPanelResultListener>)arg2 allowMultipleFiles:(BOOL)arg3;
- (void)webView:(WebView *)arg1 runOpenPanelForFileButtonWithResultListener:(id <WebOpenPanelResultListener>)arg2;
- (BOOL)webView:(WebView *)arg1 runBeforeUnloadConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WebFrame *)arg3;
- (NSString *)webView:(WebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WebFrame *)arg4;
- (BOOL)webView:(WebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WebFrame *)arg3;
- (struct CGRect)webViewFrame:(WebView *)arg1;
- (void)webView:(WebView *)arg1 setFrame:(struct CGRect)arg2;
- (void)webView:(WebView *)arg1 setResizable:(BOOL)arg2;
- (BOOL)webViewIsResizable:(WebView *)arg1;
- (void)webView:(WebView *)arg1 setStatusBarVisible:(BOOL)arg2;
- (BOOL)webViewIsStatusBarVisible:(WebView *)arg1;
- (void)webView:(WebView *)arg1 setToolbarsVisible:(BOOL)arg2;
- (BOOL)webViewAreToolbarsVisible:(WebView *)arg1;
- (NSString *)webViewStatusText:(WebView *)arg1;
- (void)webView:(WebView *)arg1 setStatusText:(NSString *)arg2;
- (void)webView:(WebView *)arg1 makeFirstResponder:(NSResponder *)arg2;
- (NSResponder *)webViewFirstResponder:(WebView *)arg1;
- (void)webViewUnfocus:(WebView *)arg1;
- (void)webViewFocus:(WebView *)arg1;
- (void)webViewClose:(WebView *)arg1;
- (void)webViewRunModal:(WebView *)arg1;
- (WebView *)webView:(WebView *)arg1 createWebViewModalDialogWithRequest:(NSURLRequest *)arg2;
- (void)webViewShow:(WebView *)arg1;
- (WebView *)webView:(WebView *)arg1 createWebViewWithRequest:(NSURLRequest *)arg2;
@end

