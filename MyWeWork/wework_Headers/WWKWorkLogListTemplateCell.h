//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKWorkLogListTableViewCellBase.h"

@class UILabel;

@interface WWKWorkLogListTemplateCell : WWKWorkLogListTableViewCellBase
{
    UILabel *_line1Label;
    UILabel *_line2Label;
}

@property(retain, nonatomic) UILabel *line2Label; // @synthesize line2Label=_line2Label;
@property(retain, nonatomic) UILabel *line1Label; // @synthesize line1Label=_line1Label;
- (void).cxx_destruct;
- (void)initView;
- (void)configureCell:(unsigned long long)arg1 withCreatorInfoData:(const basic_string_a490aa4c *)arg2 timeString:(id)arg3 contentStrings:(id)arg4 isIncludeImage:(_Bool)arg5;
- (void)layoutSubviews;

@end

