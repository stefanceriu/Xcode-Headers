//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@class DTXMessage, NSString;

@interface DTAssetRequest : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_assetPath;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestWithIdentifier:(id)arg1 path:(id)arg2;
@property(readonly, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) DTXMessage *message;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2;

@end

