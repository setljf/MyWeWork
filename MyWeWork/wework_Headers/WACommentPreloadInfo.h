//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WACommentPreloadInfo : NSObject
{
    unsigned int _score;
    unsigned int _commentTotalCount;
    NSString *_appid;
    NSArray *_comments;
}

@property(nonatomic) unsigned int commentTotalCount; // @synthesize commentTotalCount=_commentTotalCount;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;
- (id)description;

@end
