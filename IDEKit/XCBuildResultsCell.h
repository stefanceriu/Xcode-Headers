//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/XCEForwardingCell.h>

@class NSButtonCell;

@interface XCBuildResultsCell : XCEForwardingCell
{
    NSButtonCell *_expandButtonCell;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)clear;
- (void)expandAction:(id)arg1;
@property(readonly, nonatomic) NSButtonCell *expandButtonCell; // @dynamic expandButtonCell;

@end

