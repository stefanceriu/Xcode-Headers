//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndexSymbol, NSString;

@interface IDESourceKitUnhandledURLSymbolInfo : NSObject
{
    NSString *_oldName;
    NSString *_name;
    IDEIndexSymbol *_symbol;
}

@property(readonly) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *oldName; // @synthesize oldName=_oldName;
- (void).cxx_destruct;
- (id)initWithSymbol:(id)arg1 oldName:(id)arg2 newName:(id)arg3;

@end

