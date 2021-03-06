//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class QMUIButton, QMUILabel, UIImageView, WWDashLineView;

@interface WWKSMSBubbleView : WWKConversationMessageBubbleView
{
    _Bool _isMessageFromMe;
    _Bool _shouldShowReplyLabel;
    QMUILabel *_mTitleLabel;
    QMUILabel *_mContentLabel;
    QMUILabel *_mReplyLabel;
    QMUIButton *_mReplyButton;
    WWDashLineView *_mDashSeperatorView;
    UIImageView *_sendIcon;
}

@property(retain, nonatomic) UIImageView *sendIcon; // @synthesize sendIcon=_sendIcon;
@property(retain, nonatomic) WWDashLineView *mDashSeperatorView; // @synthesize mDashSeperatorView=_mDashSeperatorView;
@property(retain, nonatomic) QMUIButton *mReplyButton; // @synthesize mReplyButton=_mReplyButton;
@property(retain, nonatomic) QMUILabel *mReplyLabel; // @synthesize mReplyLabel=_mReplyLabel;
@property(retain, nonatomic) QMUILabel *mContentLabel; // @synthesize mContentLabel=_mContentLabel;
@property(retain, nonatomic) QMUILabel *mTitleLabel; // @synthesize mTitleLabel=_mTitleLabel;
- (void).cxx_destruct;
- (_Bool)p_isTencentCorp;
- (void)replyButtonDidClick:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)contextMenuCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contextMenuItems;
- (Class)messageItemClass;
- (void)updateBubble:(_Bool)arg1;
- (_Bool)needsArrow;
- (void)updateData;
- (void)layoutSubviews;
- (void)initSubviews;

@end

