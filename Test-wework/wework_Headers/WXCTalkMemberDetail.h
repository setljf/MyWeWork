//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXCTalkMemberDetail : NSObject
{
    _Bool _mIsSeizeMic;
    _Bool _mIsOpenVideo;
    int _mUuid;
    NSString *_mClientId;
}

@property(nonatomic) int mUuid; // @synthesize mUuid=_mUuid;
@property(nonatomic) _Bool mIsOpenVideo; // @synthesize mIsOpenVideo=_mIsOpenVideo;
@property(nonatomic) _Bool mIsSeizeMic; // @synthesize mIsSeizeMic=_mIsSeizeMic;
@property(copy, nonatomic) NSString *mClientId; // @synthesize mClientId=_mClientId;
- (void).cxx_destruct;

@end
