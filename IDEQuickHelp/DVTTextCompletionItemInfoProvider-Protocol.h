//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTSourceCodeSymbolKind, NSArray, NSAttributedString, NSDictionary, NSString;

@protocol DVTTextCompletionItemInfoProvider
- (void)infoViewControllerForAssociatedUSRs:(NSArray *)arg1 descriptionText:(NSAttributedString *)arg2 width:(double)arg3 context:(NSDictionary *)arg4 completionBlock:(void (^)(DVTViewController<DVTInvalidation> *))arg5;
- (void)infoViewControllerForCompletionItemName:(NSString *)arg1 container:(NSString *)arg2 symbolKind:(DVTSourceCodeSymbolKind *)arg3 displayText:(NSString *)arg4 descriptionText:(NSAttributedString *)arg5 width:(double)arg6 context:(NSDictionary *)arg7 completionBlock:(void (^)(DVTViewController<DVTInvalidation> *))arg8;
@end

