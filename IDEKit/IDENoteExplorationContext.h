//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEExplorationContext.h>

@protocol IDENoteAnnotationExplorableItem;

@interface IDENoteExplorationContext : IDEExplorationContext
{
    id <IDENoteAnnotationExplorableItem> _note;
}

@property(readonly) id <IDENoteAnnotationExplorableItem> note; // @synthesize note=_note;
- (void).cxx_destruct;
- (int)explorationType;
- (id)initWithNote:(id)arg1;

@end

