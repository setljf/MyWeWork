//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIImageView, WWMyFileItem;
@protocol WWMyFileImageDelegate;

@interface ThunmnailImageView : UIView
{
    float _imageWidth;
    float _imageHeight;
    NSIndexPath *_indexPath;
    unsigned int _columnIndex;
    UIImageView *_imageView;
    id <WWMyFileImageDelegate> _delegate;
    WWMyFileItem *_favItem;
}

@property(retain, nonatomic) WWMyFileItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) id <WWMyFileImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)getThumbImageFromItemDataImg:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (struct CGRect)resizeThumbView:(id)arg1;
- (void)clickHandler:(id)arg1;
- (void)hideBorder;
- (void)showBorder;
- (void)updateImageSize;
- (void)updateImageByModal:(id)arg1 width:(float)arg2 height:(float)arg3 indexPath:(id)arg4 columnIndex:(unsigned int)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

