//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, WXCPbGroupIdInfo, WXCQcMsgExtraAccount;

@interface WXCQcMsgItem : NSObject
{
    _Bool _isIncoming;
    int _addressUuid;
    int _msgType;
    int _msgStatus;
    int _msgFromType;
    int _msgFlag;
    long long _msgId;
    long long _msgUniqueId;
    NSData *_msgData;
    double _msgTime;
    WXCQcMsgExtraAccount *_msgFromAccount;
    double _msgGenTime;
    WXCPbGroupIdInfo *_groupIdInfo;
}

+ (id)getUniqueIdentityByUniqueId:(long long)arg1 addressUuid:(int)arg2 isIncoming:(_Bool)arg3;
@property(nonatomic) int msgFlag; // @synthesize msgFlag=_msgFlag;
@property(retain, nonatomic) WXCPbGroupIdInfo *groupIdInfo; // @synthesize groupIdInfo=_groupIdInfo;
@property(nonatomic) double msgGenTime; // @synthesize msgGenTime=_msgGenTime;
@property(nonatomic) int msgFromType; // @synthesize msgFromType=_msgFromType;
@property(retain, nonatomic) WXCQcMsgExtraAccount *msgFromAccount; // @synthesize msgFromAccount=_msgFromAccount;
@property(nonatomic) double msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) NSData *msgData; // @synthesize msgData=_msgData;
@property(nonatomic) int msgStatus; // @synthesize msgStatus=_msgStatus;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) _Bool isIncoming; // @synthesize isIncoming=_isIncoming;
@property(nonatomic) int addressUuid; // @synthesize addressUuid=_addressUuid;
@property(nonatomic) long long msgUniqueId; // @synthesize msgUniqueId=_msgUniqueId;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
- (id)description;
- (id)getUniqueIdentity;
- (void)dealloc;
- (void)reset;
- (id)init;

@end

