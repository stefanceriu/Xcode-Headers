//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "DVTTableViewDelegate.h"
#import "IDEProvisioningIssueResolverViewController.h"

@class DVTBorderedView, DVTObservingToken, DVTPortalCertificate, DVTTableView, IDEProvisioningChooseAndRevokeCertificateUserAction, NSArrayController, NSString, NSView;

@interface IDEProvisioningChooseAndRevokeCertificateUserActionViewController : IDEViewController <DVTTableViewDelegate, IDEProvisioningIssueResolverViewController>
{
    IDEProvisioningChooseAndRevokeCertificateUserAction *_userAction;
    DVTBorderedView *_tableBorder;
    DVTTableView *_certificatesTable;
    NSArrayController *_certificatesController;
    DVTObservingToken *_selectionObserver;
    DVTPortalCertificate *_certificate;
}

@property(retain, nonatomic) DVTPortalCertificate *certificate; // @synthesize certificate=_certificate;
@property(retain, nonatomic) DVTObservingToken *selectionObserver; // @synthesize selectionObserver=_selectionObserver;
@property(retain) NSArrayController *certificatesController; // @synthesize certificatesController=_certificatesController;
@property __weak DVTTableView *certificatesTable; // @synthesize certificatesTable=_certificatesTable;
@property __weak DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
@property(readonly, nonatomic) IDEProvisioningChooseAndRevokeCertificateUserAction *userAction; // @synthesize userAction=_userAction;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)doubleClickedTable:(id)arg1;
- (void)clickedCancelButton:(id)arg1;
- (void)clickedRevokeButton:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithUserAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSView *view;

@end

