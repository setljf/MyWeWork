//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKWXWebViewController.h"

@class MMWebViewPresetUI;

@interface MMWebViewController : WWKWXWebViewController
{
    _Bool _bIsViewHasAppeared;
    MMWebViewPresetUI *_presetUI;
}

@property(retain, nonatomic) MMWebViewPresetUI *presetUI; // @synthesize presetUI=_presetUI;
- (void).cxx_destruct;
- (void)handlePresetUI;
- (id)getInitUrl;
- (void)setDisableProgressView:(_Bool)arg1;
- (void)setDisableShareMenu:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3;

@end

