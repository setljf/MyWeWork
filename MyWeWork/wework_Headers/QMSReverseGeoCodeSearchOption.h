//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMSSearchOption.h"

@class NSString;

@interface QMSReverseGeoCodeSearchOption : QMSSearchOption
{
    _Bool _get_poi;
    NSString *_location;
    long long _coord_type;
}

@property(nonatomic) _Bool get_poi; // @synthesize get_poi=_get_poi;
@property(nonatomic) long long coord_type; // @synthesize coord_type=_coord_type;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)setLocationWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)init;

@end

