//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, WEWCloudObjectEntry, WWKYunPanCommentInfoFooterView, WWKYunPanCommentInfoHeaderView, WWKYunPanFileInfoView;

@interface WWKYunPanCommentInfoView : UIView
{
    WWKYunPanFileInfoView *_mInfoFileView;
    WWKYunPanCommentInfoHeaderView *_mInfoHeaderView;
    WWKYunPanCommentInfoFooterView *_mFooterView;
    WEWCloudObjectEntry *_feedEntry;
    NSString *_mSpaceName;
}

@property(copy, nonatomic) NSString *mSpaceName; // @synthesize mSpaceName=_mSpaceName;
@property(retain, nonatomic) WEWCloudObjectEntry *feedEntry; // @synthesize feedEntry=_feedEntry;
@property(retain, nonatomic) WWKYunPanCommentInfoFooterView *mFooterView; // @synthesize mFooterView=_mFooterView;
@property(retain, nonatomic) WWKYunPanCommentInfoHeaderView *mInfoHeaderView; // @synthesize mInfoHeaderView=_mInfoHeaderView;
@property(retain, nonatomic) WWKYunPanFileInfoView *mInfoFileView; // @synthesize mInfoFileView=_mInfoFileView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configInfoFooter;
- (void)configInfoHeader;
- (void)configInfoFile;
- (void)updateFileName:(id)arg1;
- (void)updateFileDescrName:(id)arg1;
- (void)updateInfoView:(id)arg1 spaceName:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUpElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

