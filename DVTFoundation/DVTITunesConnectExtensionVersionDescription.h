//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTITunesConnectVersionDescription.h>

@class NSString;

@interface DVTITunesConnectExtensionVersionDescription : DVTITunesConnectVersionDescription
{
    NSString *_extensionPointIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithITunesSoftwareExtensionVersionDescription:(id)arg1;
- (id)initWithName:(id)arg1 displayableDescription:(id)arg2 platformIdentifier:(id)arg3 bundleIdentifier:(id)arg4 marketingVersion:(id)arg5 shortVersion:(id)arg6 version:(id)arg7 generations:(id)arg8 extensionPointIdentifier:(id)arg9;

@end

