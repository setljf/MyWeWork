//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, NSString, UIImage;

@interface WWKAvatarButton : UIButton
{
    scoped_refptr_e1f85e48 _user;
    double _cornerRadius;
    UIImage *_placeholderImage;
    NSString *_avatarUrl;
    CALayer *_highlightedMaskLayer;
}

+ (id)placeholderImageForSizeAutomatically:(struct CGSize)arg1;
+ (double)cornerRadiusForSizeAutomatically:(struct CGSize)arg1;
+ (id)avatarButtonWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) CALayer *highlightedMaskLayer; // @synthesize highlightedMaskLayer=_highlightedMaskLayer;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id).cxx_construct;
- (void).cxx_destruct;
- (scoped_refptr_e1f85e48)user;
- (void)setUser:(scoped_refptr_e1f85e48)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

