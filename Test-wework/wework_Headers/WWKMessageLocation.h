//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessageLocation : WWKMessageMedia
{
    NSString *_name;
    NSString *_detailName;
    double _zoom;
    struct CLLocationCoordinate2D _coordinate;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
+ (id)qmapURLWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoom:(int)arg2 size:(struct CGSize)arg3;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *detailName; // @synthesize detailName=_detailName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)htmlRepresentationToWeixin;
- (id)htmlRepresentation;
- (id)qmapURLWithSize:(struct CGSize)arg1;
- (_Bool)addSimplePreviewCustomViewTo:(id)arg1;
- (_Bool)addPreviewCustomViewTo:(id)arg1;

@end
