//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWKCustomerEditCell;

@protocol WWKCustomerEditDelegate <NSObject>

@optional
- (void)customerEditCellDidEndEditing:(WWKCustomerEditCell *)arg1;
- (void)customerEditCellDidBeginEditing:(WWKCustomerEditCell *)arg1;
- (void)customerEditCellDidGoNextEditingField:(WWKCustomerEditCell *)arg1;
- (void)customerEditCell:(WWKCustomerEditCell *)arg1 didUpdateValue:(NSString *)arg2;
- (void)customerEditCell:(WWKCustomerEditCell *)arg1 reportLayoutHeight:(double)arg2;
@end

