//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class NSMutableArray, UIButton, UILabel, UIView, WWKMesssageSurveyCard;

@interface WWKConversationSurveyBubbleView : WWKConversationMessageBubbleView
{
    UILabel *_titleLabel;
    UIView *_seperator1;
    NSMutableArray *_itemViews;
    UIView *_seperator2;
    UIButton *_submitButton;
}

- (void).cxx_destruct;
- (id)contextMenuItems;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateBubble:(_Bool)arg1;
- (_Bool)needsArrow;
- (void)onSubmit;
- (void)updateSubmitButtonEnable;
- (void)updateData;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMesssageSurveyCard *messageItem; // @dynamic messageItem;

@end

