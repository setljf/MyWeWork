//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface WXCShowModeConfiguration : NSObject
{
    long long _splitType;
    long long _filterType;
    long long _topType;
    NSArray *_specialTypeArray;
}

+ (id)fetchSectionTitleForSpecialContact;
+ (id)fetchSectionTitleForTopType:(long long)arg1;
@property(retain, nonatomic) NSArray *specialTypeArray; // @synthesize specialTypeArray=_specialTypeArray;
@property(nonatomic) long long topType; // @synthesize topType=_topType;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) long long splitType; // @synthesize splitType=_splitType;
- (void).cxx_destruct;
- (id)init;

@end

