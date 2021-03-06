//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageMaskedBubbleView.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, UIButton, WWKInteractiveLabel, WWKMessageText;

@interface WWKConversationReceiptBubbleViewDeprecated : WWKConversationMessageMaskedBubbleView <WWKInteractiveLabelDelegate, UIActionSheetDelegate>
{
    WWKInteractiveLabel *_messageLabel;
    UIButton *_receiptButton;
    UIButton *_respondButton;
}

@property(retain, nonatomic) UIButton *respondButton; // @synthesize respondButton=_respondButton;
@property(retain, nonatomic) UIButton *receiptButton; // @synthesize receiptButton=_receiptButton;
@property(retain, nonatomic) WWKInteractiveLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contextMenuCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)interactiveLabel:(id)arg1 didLongPressContext:(id)arg2 boundingRects:(id)arg3;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (id)contextMenuItems;
- (void)respondReceiptDidClick:(id)arg1;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WWKMessageText *messageItem; // @dynamic messageItem;
@property(readonly) Class superclass;

@end

