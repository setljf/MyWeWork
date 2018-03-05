//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface UIViewController (ImagePicker) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)presentImagePickerController:(long long)arg1 withMediaTypes:(id)arg2 withCustomizationBlock:(CDUnknownBlockType)arg3;
- (void)presentImagePickerController:(long long)arg1 withCustomizationBlock:(CDUnknownBlockType)arg2;
- (void)presentImagePickerController:(long long)arg1;
- (void)presentSystemPhotoLibraryController;
- (void)presentSystemCameraController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
