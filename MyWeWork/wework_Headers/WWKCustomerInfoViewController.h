//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKTableViewController.h"

#import "WWKCustomerComposeRecordViewControllerDelegate-Protocol.h"
#import "WWKCustomerDetailDelegate-Protocol.h"
#import "WWKCustomerInputToolBarDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"
#import "WWKTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QMUIButton, WWKCustomerDetailHeadView, WWKCustomerInfoFooterCell, WWKCustomerInfoHeaderCell, WWKCustomerInputToolBar;

@interface WWKCustomerInfoViewController : WWKTableViewController <WWKTableViewDelegate, WWKCustomerDetailDelegate, WWKSelectContactsViewControllerDelegate, WWKCustomerInputToolBarDelegate, WWKCustomerComposeRecordViewControllerDelegate>
{
    scoped_refptr_e1f85e48 _user;
    vector_89e6321f _reporterList;
    scoped_refptr_da27765f _customer;
    scoped_refptr_fd92d7bf _conversation;
    _Bool _isEditingMode;
    _Bool _isShowDetail;
    _Bool _canAddRecord;
    WWKCustomerDetailHeadView *_headView;
    WWKCustomerInputToolBar *_inputToolbar;
    WWKCustomerInfoHeaderCell *_headerCell;
    WWKCustomerInfoFooterCell *_footerCell;
    QMUIButton *_postButton;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool canAddRecord; // @synthesize canAddRecord=_canAddRecord;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=_isShowDetail;
@property(nonatomic) _Bool isEditingMode; // @synthesize isEditingMode=_isEditingMode;
@property(retain, nonatomic) QMUIButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) WWKCustomerInfoFooterCell *footerCell; // @synthesize footerCell=_footerCell;
@property(retain, nonatomic) WWKCustomerInfoHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) WWKCustomerInputToolBar *inputToolbar; // @synthesize inputToolbar=_inputToolbar;
@property(retain, nonatomic) WWKCustomerDetailHeadView *headView; // @synthesize headView=_headView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)customerComposeRecordViewControllerDidCancelPublishPost:(id)arg1;
- (void)customerComposeRecordViewController:(id)arg1;
- (void)requestToSendTextInInputToolbar:(id)arg1;
- (void)didClickCancelButtonInSelectContactsViewController:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (id)titleForNumberExceedMax:(id)arg1;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (void)customerDetailCellDidEndEditing:(id)arg1;
- (void)customerDetailCellDidBeginEditing:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (void)customerDetailCellDidGoNextEditingField:(id)arg1;
- (void)customerDetailCell:(id)arg1 didUpdateValue:(id)arg2;
- (void)updateTableViewRowHeight;
- (void)customerDetailCell:(id)arg1 reportLayoutHeight:(double)arg2;
- (void)wwkTableViewDidEndTouch;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addRecordingButtonDidClick;
- (void)customerInfoCelladdButtonDidClick;
- (void)customerInfoCellDidSelect:(id)arg1;
- (_Bool)p_checkTimeIsToday:(long long)arg1;
- (void)p_openUrl:(id)arg1;
- (void)p_sendEmailToReceiver:(id)arg1;
- (void)p_sendEmail:(id)arg1;
- (void)showMakePhoneAlertWithPhoneNum:(id)arg1;
- (void)makeMobilePhoneCallWithPhoneNum:(id)arg1;
- (void)p_callPhoneNumber:(id)arg1 isMobile:(_Bool)arg2;
- (void)p_storeCustomer:(struct Customer *)arg1;
- (void)p_deleteRecord:(struct CustomerRemarks)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)p_createRecord:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)p_goContactSelectController;
- (void)p_viewBelongUser:(vector_89e6321f)arg1;
- (void)p_selectReporter:(vector_89e6321f)arg1;
- (basic_string_a490aa4c)p_getYearDayMonthFromTime:(long long)arg1;
- (basic_string_a490aa4c)p_parseTime:(long long)arg1;
- (_Bool)p_checkHasDetail;
- (_Bool)p_checkCStringValueIsBlank:(basic_string_a490aa4c)arg1;
- (_Bool)p_checkNSStringValueIsBlank:(id)arg1;
- (vector_28ec7b64)p_parseRecord:(vector_734da1c1)arg1;
- (void)p_updateNavigationItem;
- (void)p_buildDataSource;
- (void)p_bulidHeadData;
- (void)p_getCustomerAndRecord;
- (void)p_initUI;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addRecordingDidClick:(id)arg1;
- (void)handlePostButton;
- (void)mailDidClick:(id)arg1;
- (void)phoneDidClick:(id)arg1;
- (void)telDidClick:(id)arg1;
- (void)deleteDidClick:(id)arg1;
- (void)shareDidClick:(id)arg1;
- (void)moreDidClick:(id)arg1;
- (void)chatDidClick:(id)arg1;
- (void)finishDidClick:(id)arg1;
- (void)cancelDidClick:(id)arg1;
- (void)inputToolbarDidClick:(id)arg1;
- (void)keyboardHide:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCustomer:(scoped_refptr_da27765f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
