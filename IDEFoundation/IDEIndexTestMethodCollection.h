//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexSymbolWithDefiningOccurrenceCollection.h>

@class NSDictionary, NSObject;
@protocol NSFastEnumeration;

@interface IDEIndexTestMethodCollection : IDEIndexSymbolWithDefiningOccurrenceCollection
{
    NSObject<NSFastEnumeration> *_classes;
    NSDictionary *_classesByID;
}

- (void).cxx_destruct;
- (id)instantiateRow:(struct sqlite3_stmt *)arg1;
- (id)tempTableSchema;
- (void)setClasses:(id)arg1;

@end

