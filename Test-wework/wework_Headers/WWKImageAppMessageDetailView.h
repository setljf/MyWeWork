//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageTitleView.h"

@class UIImageView;

@interface WWKImageAppMessageDetailView : WWKBaseAppMessageTitleView
{
    UIImageView *_imageView;
    UIImageView *_waterMaskImageView;
}

@property(nonatomic) __weak UIImageView *waterMaskImageView; // @synthesize waterMaskImageView=_waterMaskImageView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (void)setAppMessage:(scoped_refptr_d3a1e30c)arg1;
- (id)initWithCoder:(id)arg1;

@end
