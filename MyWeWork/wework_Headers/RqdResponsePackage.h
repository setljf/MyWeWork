//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RqdResponsePackage : NSObject
{
    BOOL result;
    int cmd;
    NSObject *_sBuffer;
    NSString *_gateWayIp;
    long long serverTime;
    unsigned long long networkType;
}

+ (id)responsePackageWithWUPModel:(struct ResponsePkg *)arg1;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType;
@property(retain, nonatomic) NSString *gateWayIp; // @synthesize gateWayIp=_gateWayIp;
@property(retain, nonatomic) NSObject *sBuffer; // @synthesize sBuffer=_sBuffer;
@property(nonatomic) long long serverTime; // @synthesize serverTime;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(nonatomic) BOOL result; // @synthesize result;
- (void)dealloc;
- (id)init;

@end

