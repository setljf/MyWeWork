//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKSearchBarDelegate-Protocol.h"

@class NSString, UITableView, UIView, WWKSearchBar, WWKSearchNoResultView;
@protocol WWKManageContactsSearchDelegate;

@interface WWKManageContactsSearchController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WWKSearchBarDelegate>
{
    vector_89e6321f _dataSource;
    vector_89e6321f _oriUserList;
    id <WWKManageContactsSearchDelegate> _delegate;
    UIView *_coverView;
    WWKSearchBar *_searchBar;
    UITableView *_tableView;
    WWKSearchNoResultView *_noResultView;
}

@property(retain, nonatomic) WWKSearchNoResultView *noResultView; // @synthesize noResultView=_noResultView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) id <WWKManageContactsSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)searchBarDidCancel;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarDidClickCustomCancelButton:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)setSearchDataSource:(const vector_89e6321f *)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)clearOldData;
- (void)dismissInViewController:(id)arg1 withAnimate:(_Bool)arg2;
- (void)showInViewController:(id)arg1 withAnimate:(_Bool)arg2;
- (void)buildSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

