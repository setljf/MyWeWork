//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWRedEnvSelectContactsController;

@protocol WWRedEnvSelectContactsControllerDelegate <NSObject>
- (void)redEnvSelectContactsController:(WWRedEnvSelectContactsController *)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;

@optional
- (NSString *)titleForNumberExceedMaxForRedEnvSelectContactsController:(WWRedEnvSelectContactsController *)arg1;
- (int)numOfMaxSelectedContactsForRedEnvSelectContactsController:(WWRedEnvSelectContactsController *)arg1;
- (void)didClickCancelButtonInRedEnvSelectContactsController:(WWRedEnvSelectContactsController *)arg1;
@end

