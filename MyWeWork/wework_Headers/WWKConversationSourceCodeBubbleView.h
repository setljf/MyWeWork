//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageMaskedBubbleView.h"

@class UILabel, UIView, WWKMessageText, WWKSourceCodeTextView;

@interface WWKConversationSourceCodeBubbleView : WWKConversationMessageMaskedBubbleView
{
    WWKSourceCodeTextView *_codeTextView;
    UILabel *_fullscreenLabel;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *fullscreenLabel; // @synthesize fullscreenLabel=_fullscreenLabel;
@property(retain, nonatomic) WWKSourceCodeTextView *codeTextView; // @synthesize codeTextView=_codeTextView;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)contextMenuCopy:(id)arg1;
- (id)contextMenuItems;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (_Bool)shouldAutoHighlights;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageText *messageItem; // @dynamic messageItem;

@end

