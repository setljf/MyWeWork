//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface XADResourceFork : NSObject
{
    NSDictionary *resources;
}

+ (id)resourceForkWithHandle:(id)arg1 error:(int *)arg2;
+ (id)resourceForkWithHandle:(id)arg1;
- (id)_parseReferencesFromHandle:(id)arg1 count:(int)arg2;
- (id)_parseMapFromHandle:(id)arg1 withDataObjects:(id)arg2;
- (id)_parseResourceDataFromHandle:(id)arg1;
- (id)resourceDataForType:(unsigned int)arg1 identifier:(int)arg2;
- (void)parseFromHandle:(id)arg1;
- (void)dealloc;
- (id)init;

@end
