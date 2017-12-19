//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

#import "WWKEditTextDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"
#import "WWKYunPanSettingViewControlerDelegate-Protocol.h"

@class NSMutableArray, NSString, WEWCloudObjectEntry, WWKSelectContactsViewController;
@protocol WWKYunPanInfoViewControllerDelegate;

@interface WWKYunPanInfoViewController : WWKCommonTableViewController <WWKEditTextDelegate, WWKSelectContactsViewControllerDelegate, WWKYunPanSettingViewControlerDelegate>
{
    _Bool _needUpdateUI;
    NSMutableArray *_infoCellTypes;
    WEWCloudObjectEntry *_cloudEntry;
    vector_53938b46 _allMemberDatas;
    _Bool _mngQuitTopFolderDisabled;
    _Bool _permissonDisplayDisabled;
    id <WWKYunPanInfoViewControllerDelegate> _delegate;
    WWKSelectContactsViewController *_selectContactController;
}

@property(retain, nonatomic) WWKSelectContactsViewController *selectContactController; // @synthesize selectContactController=_selectContactController;
@property(nonatomic) _Bool permissonDisplayDisabled; // @synthesize permissonDisplayDisabled=_permissonDisplayDisabled;
@property(nonatomic) _Bool mngQuitTopFolderDisabled; // @synthesize mngQuitTopFolderDisabled=_mngQuitTopFolderDisabled;
@property(nonatomic) __weak id <WWKYunPanInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didWWKYunPanSettingViewControlerConfirmNewMembers:(id)arg1 newMembers:(id)arg2;
- (void)didWWKYunPanSettingViewControlerConfirmTotalMembers:(id)arg1 totalMembers:(id)arg2;
- (_Bool)canSelectDepartmentInSelectContactsViewController:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2 andDepartments:(vector_a024b487)arg3;
- (id)titleForNumberExceedMax:(id)arg1;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (void)editTextController:(id)arg1 didClickSaveItemWithText:(id)arg2;
- (void)p_jumpToInviteTeamController;
- (void)p_jumpToNameEditController;
- (void)p_jumpToSettingViewController;
- (void)p_doDeleteTopFolder;
- (void)p_doQuitTopFolder;
- (id)p_generateAddMemberObject:(struct memberData *)arg1;
- (void)p_doRenameTopFolder:(id)arg1 acl:(id)arg2 isModifyName:(_Bool)arg3;
- (void)p_gotoNextAfterSelectMember:(vector_89e6321f)arg1 withDepartmentList:(vector_a024b487)arg2 selectContactViewController:(id)arg3;
- (void)p_selectNewMembers;
- (void)p_updateUsersAndDepartments:(vector_89e6321f *)arg1 dicUserAcl:(map_d8f62f6d)arg2 departments:(vector_a024b487 *)arg3 dicDepartmentAcl:(map_d8f62f6d)arg4;
- (void)p_updateMemberDatas;
- (void)p_updateCellTypes;
- (unsigned long long)p_getCurrentAclRole;
- (id)p_mutableCopyWithCellTypes:(id)arg1;
- (void)p_removeCellType:(unsigned long long)arg1;
- (unsigned long long)p_cellTypeWithIndexPath:(id)arg1;
- (id)cellTitleForCellType:(unsigned long long)arg1;
- (void)p_reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCloudEntryInfo:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
