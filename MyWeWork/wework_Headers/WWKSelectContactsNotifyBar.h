//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSelectContactsBottomBar.h"

@class UIView, WWKSelectCheckButton;

@interface WWKSelectContactsNotifyBar : WWKSelectContactsBottomBar
{
    UIView *_centerSeparator;
    WWKSelectCheckButton *_checkButton;
}

@property(retain, nonatomic) WWKSelectCheckButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UIView *centerSeparator; // @synthesize centerSeparator=_centerSeparator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didClickCheckButton:(id)arg1;
@property(readonly, nonatomic) _Bool checkNotifyButton;
- (id)init;

@end
