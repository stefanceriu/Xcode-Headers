//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTableView.h>

@interface DTDKTableView : DVTTableView
{
    unsigned int _delegateImplements_deleteRows:1;
    unsigned int _delegateImplements_contextMenu:1;
    unsigned int _reserved2:30;
}

- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

