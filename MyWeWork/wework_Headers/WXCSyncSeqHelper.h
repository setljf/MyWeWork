//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXCSyncSeqHelper : NSObject
{
}

+ (void)saveSKByData:(id)arg1 syncType:(int)arg2;
+ (void)saveSKByData:(id)arg1 syncType:(int)arg2 Uuid:(id)arg3;
+ (id)getSKBySyncType:(int)arg1;
+ (id)getSKBySyncType:(int)arg1 Uuid:(id)arg2;
+ (void)saveClientKey:(long long)arg1 syncType:(int)arg2;
+ (void)saveClientKey:(long long)arg1 syncType:(int)arg2 Uuid:(id)arg3;
+ (long long)getClientKeyBySyncType:(int)arg1;
+ (long long)getClientKeyBySyncType:(int)arg1 Uuid:(id)arg2;
+ (long long)getClientKeyByDataType:(int)arg1;
+ (long long)getSyncSeqs:(unsigned long long)arg1;
+ (long long)getSyncSeq;

@end

