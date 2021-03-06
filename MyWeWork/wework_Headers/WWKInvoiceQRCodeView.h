//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, UIButton, UIImageView, UILabel, WWKDotlineView;

@interface WWKInvoiceQRCodeView : UIView
{
    _Bool _showTopLine;
    _Bool _showBottomLine;
    _Bool _loadQRCodeFailed;
    NSURL *_qrcodeUrl;
    UIImageView *_qrcodeImageView;
    UILabel *_tipLabel;
    UIButton *_refreshButton;
    WWKDotlineView *_topLine;
    WWKDotlineView *_bottomLine;
}

@property(nonatomic) _Bool loadQRCodeFailed; // @synthesize loadQRCodeFailed=_loadQRCodeFailed;
@property(retain, nonatomic) WWKDotlineView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) WWKDotlineView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *qrcodeImageView; // @synthesize qrcodeImageView=_qrcodeImageView;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) _Bool showTopLine; // @synthesize showTopLine=_showTopLine;
@property(retain, nonatomic) NSURL *qrcodeUrl; // @synthesize qrcodeUrl=_qrcodeUrl;
- (void).cxx_destruct;
- (void)onClickQRCodeImage:(id)arg1;
- (id)traverseResponderChainForUIViewController;
- (void)updateLoadState;
- (void)onRefresh:(id)arg1;
- (void)setupUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

