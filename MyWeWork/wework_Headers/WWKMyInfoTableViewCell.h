//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QMUITextView, UIView;

@interface WWKMyInfoTableViewCell : UITableViewCell
{
    QMUITextView *_textField;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) QMUITextView *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)p_initSubViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
