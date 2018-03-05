//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MBProgressHUD, UIActivityIndicatorView, UILabel;

@interface WWKCommonTableViewController : UITableViewController
{
    struct CGPoint _previousOffset;
    MBProgressHUD *_progressHUD;
    _Bool _indicatorViewShouldStopAnimating;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_indicateLabel;
}

@property(retain, nonatomic) UILabel *indicateLabel; // @synthesize indicateLabel=_indicateLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)hideProgressHUD:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hideProgressHUD:(_Bool)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (void)showProgressHUDWithErrorText:(id)arg1;
- (void)showProgressHUDWithText:(id)arg1;
- (id)progressHUD;
- (void)stopLoading;
- (void)dealloc;
- (void)startLoding;
- (void)didReceiveMemoryWarning;
- (void)showWording:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initNavigationItems;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end
