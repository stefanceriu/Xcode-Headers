//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCCodeSignContext.h>

@interface XCiPhoneSimulatorCodeSignContext : XCCodeSignContext
{
}

+ (id)codeSignNode:(id)arg1 withMacroExpansionScope:(id)arg2 reSignOnly:(BOOL)arg3;
+ (id)prepareForCodeSigningWithMacroExpansionScope:(id)arg1;
+ (BOOL)requiresEntitlementsWithMacroExpansionScope:(id)arg1;
+ (BOOL)shouldPassEntitlementsFileContentToCodeSignWithMacroExpansionScope:(id)arg1;
+ (BOOL)supportsIOSSigning;
+ (BOOL)supportsMacSigning;
+ (BOOL)supportsDeveloperIDSigning;

@end

