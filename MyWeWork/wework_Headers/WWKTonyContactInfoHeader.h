//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WWKAvatarImageView, WWkNameCoverView;
@protocol WWKContactInfoHeaderDelegate;

@interface WWKTonyContactInfoHeader : UIView
{
    UIView *_containerView;
    UIView *_corpFullNameSeperator;
    UILabel *_corpFullNameLabel;
    UILabel *_corpNameLabel;
    UILabel *_nameLabel;
    UILabel *_jobLabel;
    UIView *_emailSeperator;
    UIButton *_emailLabel;
    UIView *_mobileSeperator;
    UIButton *_mobileLabel;
    WWKAvatarImageView *_avatarView;
    UIImageView *_genderView;
    UIImageView *_starContactView;
    UIImageView *_realNameStatusView;
    UIImageView *_turnOverImageView;
    UIView *_corpNameCoverClickView;
    WWkNameCoverView *_nameCoverClickView;
    UIView *_shadowView;
    UIView *_applyContainerView;
    UIView *_applySeperator;
    UILabel *_applyLabel;
    UIImageView *_arrowImage;
    UIImageView *_emailVerifyImage;
    scoped_refptr_e1f85e48 _user;
    struct CorpBriefInfo _corpInfo;
    long long _fromChannel;
    id <WWKContactInfoHeaderDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKContactInfoHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)avatarDidTap:(id)arg1;
- (id)contextMenuItems;
- (void)menuControllerWillHide:(id)arg1;
- (void)onnameClicked;
- (void)onMobileClick;
- (void)onEmailClick;
- (void)onCorpNameClicked;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (id)showUserName;
- (void)setUser:(const scoped_refptr_e1f85e48 *)arg1 fromChannel:(long long)arg2;
- (_Bool)shouldHideCorpFullName;
- (_Bool)shouldHideCorpInfo;
- (id)corpFullName;
- (void)initSubviews;
- (id)init;

@end

