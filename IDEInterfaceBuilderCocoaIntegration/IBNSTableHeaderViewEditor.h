//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewEditor.h>

@protocol DVTCancellable;

@interface IBNSTableHeaderViewEditor : IBNSViewEditor
{
    id <DVTCancellable> _columnObserverToken;
}

- (void).cxx_destruct;
- (id)stringEditingContextForEvent:(id)arg1;
- (id)tableColumnAtPoint:(struct CGPoint)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (id)editedTableView;
- (id)editedTableHeaderView;

@end

