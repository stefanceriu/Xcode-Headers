//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol NSItemProviderReading <NSObject>
+ (id)objectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id *)arg3;
+ (NSArray *)readableTypeIdentifiersForItemProvider;
@end

