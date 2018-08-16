//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBToken.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSArray, NSString;

@interface IBDFIToken : IBToken <NSCoding>
{
    NSArray *_options;
    id _selection;
}

+ (id)DFITokenWithOptions:(id)arg1 selectedIndex:(unsigned long long)arg2 type:(long long)arg3;
+ (id)DFITokenWithOptions:(id)arg1 selection:(id)arg2 type:(long long)arg3;
@property(retain, nonatomic) id selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)menuWithAction:(SEL)arg1 target:(id)arg2 tokenField:(id)arg3;
@property(retain) NSString *displayString;
@property(retain) NSString *editingString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1 selection:(id)arg2 type:(long long)arg3;

@end

