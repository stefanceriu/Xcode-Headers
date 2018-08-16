//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSDate, NSDictionary, NSString;

@interface XCSArchiveExportOptions : XCSObject
{
    NSDate *_createdAt;
    NSString *_name;
    NSDictionary *_exportOptions;
}

+ (id)archiveExportOptionsWithName:(id)arg1 exportOptions:(id)arg2 validationErrors:(id *)arg3;
@property(retain, nonatomic) NSDictionary *exportOptions; // @synthesize exportOptions=_exportOptions;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void).cxx_destruct;
- (BOOL)_validateName:(id)arg1 createdAt:(id)arg2 exportOptions:(id)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithName:(id)arg1 createdAt:(id)arg2 exportOptions:(id)arg3 validationErrors:(id *)arg4;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

@end

