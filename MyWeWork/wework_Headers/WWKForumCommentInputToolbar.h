//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMUITextViewDelegate-Protocol.h"
#import "WWKEmotionPanelDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, QMUITextView, UIButton, UILabel, WWKEmotionPanel;
@protocol WWKForumCommentInputToolbarDelegate;

@interface WWKForumCommentInputToolbar : UIView <QMUITextViewDelegate, WWKEmotionPanelDelegate>
{
    _Bool _requestingAnonymousUserInfo;
    UIView *_separatorView;
    QMUITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UIButton *_emojiButton;
    UIButton *_anonymousButton;
    UILabel *_anonymousLabel;
    UIView *_emotionPanelSeparator;
    WWKEmotionPanel *_emotionPanel;
    id <WWKForumCommentInputToolbarDelegate> _delegate;
    unsigned long long _state;
    NSString *_replyName;
    NSArray *_normalStateConstraints;
    NSArray *_textStateConstraints;
    NSArray *_emojiStateConstraints;
    NSLayoutConstraint *_placeHolderTopConstraint;
    NSLayoutConstraint *_placeHolderLeftConstraint;
    NSLayoutConstraint *_textViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *textViewHeightConstraint; // @synthesize textViewHeightConstraint=_textViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *placeHolderLeftConstraint; // @synthesize placeHolderLeftConstraint=_placeHolderLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *placeHolderTopConstraint; // @synthesize placeHolderTopConstraint=_placeHolderTopConstraint;
@property(retain, nonatomic) NSArray *emojiStateConstraints; // @synthesize emojiStateConstraints=_emojiStateConstraints;
@property(retain, nonatomic) NSArray *textStateConstraints; // @synthesize textStateConstraints=_textStateConstraints;
@property(retain, nonatomic) NSArray *normalStateConstraints; // @synthesize normalStateConstraints=_normalStateConstraints;
@property(copy, nonatomic) NSString *replyName; // @synthesize replyName=_replyName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WWKForumCommentInputToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WWKEmotionPanel *emotionPanel; // @synthesize emotionPanel=_emotionPanel;
@property(retain, nonatomic) UIView *emotionPanelSeparator; // @synthesize emotionPanelSeparator=_emotionPanelSeparator;
@property(retain, nonatomic) UILabel *anonymousLabel; // @synthesize anonymousLabel=_anonymousLabel;
@property(retain, nonatomic) UIButton *anonymousButton; // @synthesize anonymousButton=_anonymousButton;
@property(retain, nonatomic) UIButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(retain, nonatomic) UILabel *textPlaceholderLabel; // @synthesize textPlaceholderLabel=_textPlaceholderLabel;
@property(retain, nonatomic) QMUITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (struct _NSRange)p_findDeleteRangeWithText:(id)arg1 selectedPostion:(unsigned long long)arg2;
- (void)emotionViewPanelDidClickSendButton:(id)arg1;
- (void)emotionViewPanel:(id)arg1 sendTheEmotionString:(id)arg2 isDelete:(_Bool)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)anonymousDidClick:(id)arg1;
- (void)emojiDidClick:(id)arg1;
- (void)updateAnonymousPreview;
- (void)updateTextPlaceholder;
- (void)updateAnonymousPlaceholder;
- (void)updateTextViewHeightConstraint;
- (void)initSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

