//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSelectContactCell.h"

@class UIButton, UILabel;

@interface WWKAttendanceWiFiInfoTableCell : WWKSelectContactCell
{
    UILabel *_ssidLabel;
    UILabel *_bssidLabel;
    UIButton *_currentHintButton;
}

@property(retain, nonatomic) UIButton *currentHintButton; // @synthesize currentHintButton=_currentHintButton;
@property(retain, nonatomic) UILabel *bssidLabel; // @synthesize bssidLabel=_bssidLabel;
@property(retain, nonatomic) UILabel *ssidLabel; // @synthesize ssidLabel=_ssidLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

