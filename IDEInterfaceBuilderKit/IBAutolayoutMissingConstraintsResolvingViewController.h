//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueResolvingViewController.h>

@class IBDocument, NSString;
@protocol IBCollection;

@interface IBAutolayoutMissingConstraintsResolvingViewController : IBAutolayoutIssueResolvingViewController
{
    id <IBCollection> _views;
    IBDocument *_document;
    NSString *_descriptionText;
}

@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) id <IBCollection> views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)confirmChanges;
- (void)primitiveInvalidate;
- (id)initWithViews:(id)arg1 document:(id)arg2;

@end

