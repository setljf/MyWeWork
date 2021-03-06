//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

#import "NotificationProxyObserverDelegate-Protocol.h"

@class NSString, QMUIButton, QMUILabel, WWKProgressIndicator, WWYunPanListFileCellConfig;
@protocol WWYunPanListFileCellDelegate;

@interface WWYunPanListFileCell : WWKSimpleTableViewCell <NotificationProxyObserverDelegate>
{
    struct scoped_ptr<NotificationProxyObserver> _ftn_download_state_observer;
    _Bool _isSearchMode;
    _Bool _mIsThumbDownLoadEnable;
    id <WWYunPanListFileCellDelegate> _delegate;
    unsigned long long _uploadingState;
    double _currentUploadedSize;
    WWYunPanListFileCellConfig *_config;
    QMUILabel *_mCreatorLabel;
    QMUILabel *_mUploadStateLabel;
    QMUILabel *_mUploadSizeLabel;
    WWKProgressIndicator *_mUploadProgressView;
    QMUIButton *_mDetailButton;
    NSString *_mImgFileThumbFileID;
    NSString *_mImgFileSrcFileID;
}

@property(nonatomic) _Bool mIsThumbDownLoadEnable; // @synthesize mIsThumbDownLoadEnable=_mIsThumbDownLoadEnable;
@property(retain, nonatomic) NSString *mImgFileSrcFileID; // @synthesize mImgFileSrcFileID=_mImgFileSrcFileID;
@property(retain, nonatomic) NSString *mImgFileThumbFileID; // @synthesize mImgFileThumbFileID=_mImgFileThumbFileID;
@property(retain, nonatomic) QMUIButton *mDetailButton; // @synthesize mDetailButton=_mDetailButton;
@property(retain, nonatomic) WWKProgressIndicator *mUploadProgressView; // @synthesize mUploadProgressView=_mUploadProgressView;
@property(retain, nonatomic) QMUILabel *mUploadSizeLabel; // @synthesize mUploadSizeLabel=_mUploadSizeLabel;
@property(retain, nonatomic) QMUILabel *mUploadStateLabel; // @synthesize mUploadStateLabel=_mUploadStateLabel;
@property(retain, nonatomic) QMUILabel *mCreatorLabel; // @synthesize mCreatorLabel=_mCreatorLabel;
@property(retain, nonatomic) WWYunPanListFileCellConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(nonatomic) double currentUploadedSize; // @synthesize currentUploadedSize=_currentUploadedSize;
@property(nonatomic) unsigned long long uploadingState; // @synthesize uploadingState=_uploadingState;
@property(nonatomic) __weak id <WWYunPanListFileCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)checkAndDownloadThumbImageFile;
- (void)addObservers;
- (void)layoutSubviews;
- (void)setFileUploadingState:(unsigned long long)arg1 isFromMessageSave:(_Bool)arg2;
- (void)onDetailBtnClick:(id)arg1;
- (void)setLeftHighlight:(_Bool)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

