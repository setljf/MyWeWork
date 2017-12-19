//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQABRecordMultiValue.h"

@class NSString, PhoneExtralInfo;

@interface QQABRecordPhone : QQABRecordMultiValue
{
    NSString *_formatedPhoneCache;
    _Bool _canCallVoip;
    _Bool _canMutilCallVoip;
    _Bool _isMobile;
    PhoneExtralInfo *_extralInfo;
}

+ (id)arrayWithABMultiValue:(void *)arg1;
+ (id)phoneWithLabel:(id)arg1 phoneNumber:(id)arg2;
@property(nonatomic) _Bool isMobile; // @synthesize isMobile=_isMobile;
@property(nonatomic) _Bool canMutilCallVoip; // @synthesize canMutilCallVoip=_canMutilCallVoip;
@property(nonatomic) _Bool canCallVoip; // @synthesize canCallVoip=_canCallVoip;
@property(retain, nonatomic) PhoneExtralInfo *extralInfo; // @synthesize extralInfo=_extralInfo;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *strip86Phone;
@property(readonly, copy, nonatomic) NSString *formatedPhone;
@property(copy, nonatomic) NSString *phone;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
