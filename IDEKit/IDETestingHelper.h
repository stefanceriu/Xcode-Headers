//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDETestingHelper : NSObject
{
}

+ (void)runTestsAndTestables:(id)arg1;
+ (BOOL)canRecordUITestForSelectionSource:(id)arg1 test:(id *)arg2 selectedDocumentLocation:(id *)arg3 outError:(id *)arg4;
+ (BOOL)isFilePathBuiltInUITestingBundle:(id)arg1 workspace:(id)arg2;
+ (BOOL)isTestableBuiltInUITestingBundle:(id)arg1;
+ (void)profileTestsAndTestables:(id)arg1 forWorkspaceTabController:(id)arg2;
+ (void)runTestsAndTestables:(id)arg1 forWorkspaceTabController:(id)arg2;
+ (void)_executeTestsAndTestables:(id)arg1 forWorkspaceTabController:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)testingSpecifiersForTestsAndTestables:(id)arg1 testSchemeAction:(id)arg2;
+ (void)_ensureTestingSpecifierIsCreatedFor:(id)arg1 inSpecifierArray:(id)arg2 withSchemeAction:(id)arg3 andSelectedTestsAndTestables:(id)arg4;
+ (id)_skippedTestsForTestable:(id)arg1 withSelectedTestsAndTestables:(id)arg2 andSchemeAction:(id)arg3;
+ (void)_addIdentifiers:(id)arg1 forTestMethodsIn:(id)arg2 ignoreSkippedTests:(BOOL)arg3 inSchemeAction:(id)arg4;
+ (id)filterButtonMenuItemsForContext:(id)arg1;
+ (id)contextMenuItemsForContext:(id)arg1;
+ (id)_newTestClassAndTestBundleMenuItemsForContext:(id)arg1;
+ (id)_menuItemWithForContext:(id)arg1 titleKey:(id)arg2 action:(SEL)arg3;
+ (void)_validateMenuItems:(id)arg1 forContext:(id)arg2;
+ (void)_validateMenuItem:(id)arg1 forSelection:(id)arg2 forWorkspaceTabController:(id)arg3;
+ (void)_updateRevealTestInReportEditorMenuItem:(id)arg1 forSelection:(id)arg2 inWorkspace:(id)arg3;
+ (void)_updateProfileTestMenuItem:(id)arg1 forSelection:(id)arg2;
+ (void)_updateRunTestMenuItem:(id)arg1 forSelection:(id)arg2;
+ (void)_updateEnableDisableTestsMenuItem:(id)arg1 enableMenu:(BOOL)arg2 forSelection:(id)arg3;
+ (id)topLevelTestsAndTestablesForSelectedItems:(id)arg1;
+ (void)_removeRedundantChildItemsInSelection:(id)arg1 fromMutableCopy:(id)arg2;
+ (id)_localizedString:(id)arg1;
+ (id)_selectionStringForItems:(id)arg1;
+ (id)profileStringForSelectedItems:(id)arg1;
+ (id)testStringForSelectedItems:(id)arg1;
+ (long long)_enabledStateForSelection:(id)arg1 inSchemeAction:(id)arg2;
+ (long long)_itemTypeForSelection:(id)arg1;
+ (void)contextMenu_revealInTestNavigator:(id)arg1;
+ (void)contextMenu_revealInSymbolNavigator:(id)arg1;
+ (void)contextMenu_revealInProjectNavigator:(id)arg1;
+ (void)contextMenu_revealTestInReportEditor:(id)arg1;
+ (id)testReportDocumentLocationForTest:(id)arg1 workspace:(id)arg2;
+ (void)contextMenu_profileTest:(id)arg1;
+ (void)contextMenu_runTest:(id)arg1;
+ (void)contextMenu_newUITestBundle:(id)arg1;
+ (void)contextMenu_newTestBundle:(id)arg1;
+ (void)contextMenu_newUITestClass:(id)arg1;
+ (void)contextMenu_newTestClass:(id)arg1;
+ (void)contextMenu_disableTests:(id)arg1;
+ (void)contextMenu_enableTests:(id)arg1;
+ (void)_enableDisableContextMenuSelectedItemsForSender:(id)arg1 enable:(BOOL)arg2;
+ (void)launchAssistantForTemplateKind:(id)arg1;
+ (void)newTemplateWithTemplateKind:(id)arg1 isUITest:(BOOL)arg2 forMenuItem:(id)arg3;
+ (id)_getSelectionForMenuItem:(id)arg1;
+ (BOOL)shouldAllowLaunchingTests:(id)arg1;
+ (void)showSheetToAddTestBundleToCurrentSchemeActionInWorkspace:(id)arg1 onWindow:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
+ (void)initialize;

@end

