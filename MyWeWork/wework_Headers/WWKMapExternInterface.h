//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKMapExternInterface : NSObject
{
}

+ (void)navigationFrom:(id)arg1 To:(id)arg2 type:(unsigned long long)arg3;
+ (_Bool)canExternMapOpen:(unsigned long long)arg1;
+ (unsigned long long)externMapNameByName:(id)arg1;
+ (id)displayExternMapNameByType:(unsigned long long)arg1;
+ (void)p_navigationByGaodeMapFrom:(id)arg1 to:(id)arg2;
+ (void)p_navigationBySougoMapFrom:(id)arg1 to:(id)arg2;
+ (void)p_navigationByTencentMapFrom:(id)arg1 to:(id)arg2;
+ (void)p_navigationByGoogleFrom:(id)arg1 to:(id)arg2;
+ (void)p_navigationByBaiduMapFrom:(id)arg1 to:(id)arg2;
+ (_Bool)p_isSougoMapCanOpen;
+ (_Bool)p_isGoogleMapCanOpen;
+ (_Bool)p_isTencentMapCanOpen;
+ (_Bool)p_isGaodeMapCanOpen;
+ (_Bool)p_isBaiduMapCanOpen;

@end

