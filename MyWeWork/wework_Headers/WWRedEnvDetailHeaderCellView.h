//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, NSAttributedString, NSString, UIButton, UIImageView, UILabel, UIView, WWDashLineView, WXCAppStoreView;
@protocol WWRedEnvDetailHeaderCellViewAnimateDelegate, WWRedEnvDetailHeaderCellViewGuideDelegate;

@interface WWRedEnvDetailHeaderCellView : UITableViewCell
{
    scoped_refptr_fd92d7bf mConv;
    _Bool _mCanShowAppStoreRank;
    _Bool _mIsLuckyMoney;
    int _convType;
    unsigned int _qyhbSubType;
    unsigned int _mHongBaoType;
    UIButton *_mGuideUsersButton;
    unsigned long long _convId;
    NSAttributedString *_itilAttrbutedInfoWording;
    unsigned long long _corpAppId;
    id <WWRedEnvDetailHeaderCellViewAnimateDelegate> _delegate;
    id <WWRedEnvDetailHeaderCellViewGuideDelegate> _guideDelegate;
    WXCAppStoreView *_mAppStoreView;
    UIView *_mAppStoreBackView;
    CDUnknownBlockType _rankHandler;
    NSString *_mSummaryWording;
    UIImageView *_mContainerView;
    UIImageView *_mCoverImageView;
    UIImageView *_mSenderImageView;
    UILabel *_mSenderNameLabel;
    UILabel *_mSenderDescLabel;
    UIImageView *_mPingIconView;
    UILabel *_mWishingLabel;
    UILabel *_mInfoLabel;
    UILabel *_mTipsLabel;
    UIButton *_mSummaryView;
    UILabel *_mDivideLineLabel;
    WWDashLineView *_mDivideDashLineView;
    CALayer *_summaryBorder;
}

@property(nonatomic) _Bool mIsLuckyMoney; // @synthesize mIsLuckyMoney=_mIsLuckyMoney;
@property(retain, nonatomic) CALayer *summaryBorder; // @synthesize summaryBorder=_summaryBorder;
@property(retain, nonatomic) WWDashLineView *mDivideDashLineView; // @synthesize mDivideDashLineView=_mDivideDashLineView;
@property(retain, nonatomic) UILabel *mDivideLineLabel; // @synthesize mDivideLineLabel=_mDivideLineLabel;
@property(retain, nonatomic) UIButton *mSummaryView; // @synthesize mSummaryView=_mSummaryView;
@property(retain, nonatomic) UILabel *mTipsLabel; // @synthesize mTipsLabel=_mTipsLabel;
@property(retain, nonatomic) UILabel *mInfoLabel; // @synthesize mInfoLabel=_mInfoLabel;
@property(retain, nonatomic) UILabel *mWishingLabel; // @synthesize mWishingLabel=_mWishingLabel;
@property(retain, nonatomic) UIImageView *mPingIconView; // @synthesize mPingIconView=_mPingIconView;
@property(retain, nonatomic) UILabel *mSenderDescLabel; // @synthesize mSenderDescLabel=_mSenderDescLabel;
@property(retain, nonatomic) UILabel *mSenderNameLabel; // @synthesize mSenderNameLabel=_mSenderNameLabel;
@property(retain, nonatomic) UIImageView *mSenderImageView; // @synthesize mSenderImageView=_mSenderImageView;
@property(retain, nonatomic) UIImageView *mCoverImageView; // @synthesize mCoverImageView=_mCoverImageView;
@property(retain, nonatomic) UIImageView *mContainerView; // @synthesize mContainerView=_mContainerView;
@property(copy, nonatomic) NSString *mSummaryWording; // @synthesize mSummaryWording=_mSummaryWording;
@property(nonatomic) unsigned int mHongBaoType; // @synthesize mHongBaoType=_mHongBaoType;
@property(copy, nonatomic) CDUnknownBlockType rankHandler; // @synthesize rankHandler=_rankHandler;
@property(nonatomic) _Bool mCanShowAppStoreRank; // @synthesize mCanShowAppStoreRank=_mCanShowAppStoreRank;
@property(retain, nonatomic) UIView *mAppStoreBackView; // @synthesize mAppStoreBackView=_mAppStoreBackView;
@property(retain, nonatomic) WXCAppStoreView *mAppStoreView; // @synthesize mAppStoreView=_mAppStoreView;
@property(nonatomic) __weak id <WWRedEnvDetailHeaderCellViewGuideDelegate> guideDelegate; // @synthesize guideDelegate=_guideDelegate;
@property(nonatomic) __weak id <WWRedEnvDetailHeaderCellViewAnimateDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int qyhbSubType; // @synthesize qyhbSubType=_qyhbSubType;
@property(nonatomic) unsigned long long corpAppId; // @synthesize corpAppId=_corpAppId;
@property(retain, nonatomic) NSAttributedString *itilAttrbutedInfoWording; // @synthesize itilAttrbutedInfoWording=_itilAttrbutedInfoWording;
@property(nonatomic) unsigned long long convId; // @synthesize convId=_convId;
@property(nonatomic) int convType; // @synthesize convType=_convType;
@property(retain, nonatomic) UIButton *mGuideUsersButton; // @synthesize mGuideUsersButton=_mGuideUsersButton;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_fetchImgAndNameFromCorpBriefHongbao;
- (void)p_fetchImgAndNameFromOpenApiId;
- (void)removeAppStoreView;
- (void)reduceAnimate;
- (void)enlargeAniamte;
- (void)playEntryAnimation;
- (void)adjustAppViewLayoutByFrame:(struct CGRect)arg1;
- (struct CGRect)layoutHeaderViewWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContent:(unsigned long long)arg1 tipsWording:(id)arg2 summaryWording:(id)arg3 hongbaoType:(unsigned int)arg4 hongbaoSubType:(unsigned int)arg5 hongbaoId:(id)arg6 infoWording:(id)arg7 wishingWording:(id)arg8;
- (double)getHeaderViewHeight;
- (void)onGuideUserAction:(id)arg1;
- (void)_initAppStoreSubViews;
- (void)_initSubViews;
- (void)checkMode;
- (void)setConversationInfo:(scoped_refptr_fd92d7bf)arg1;
- (void)updateIsItilHongbao:(_Bool)arg1;
- (void)dealloc;
- (id)initLuckMoneyWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

