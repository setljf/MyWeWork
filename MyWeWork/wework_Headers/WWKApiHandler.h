//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NotificationProxyObserverDelegate-Protocol.h"

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL, WWKApiAppItemInfo;

@interface WWKApiHandler : NSObject <NotificationProxyObserverDelegate>
{
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> observer_;
    NSMutableArray *loginblocks_;
    NSURL *_URL;
    NSString *_sourceApplication;
    WWKApiAppItemInfo *_sourceApplicationInfo;
    NSString *_sourceApplicationTitle;
    NSString *_sourceApplicationScheme;
    NSString *_sourceApplicationIconURL;
}

+ (id)knownApplicationWithBundleID:(id)arg1;
+ (_Bool)requiresLogin;
+ (id)handlers;
@property(copy, nonatomic) NSString *sourceApplicationIconURL; // @synthesize sourceApplicationIconURL=_sourceApplicationIconURL;
@property(copy, nonatomic) NSString *sourceApplicationScheme; // @synthesize sourceApplicationScheme=_sourceApplicationScheme;
@property(copy, nonatomic) NSString *sourceApplicationTitle; // @synthesize sourceApplicationTitle=_sourceApplicationTitle;
@property(retain, nonatomic) WWKApiAppItemInfo *sourceApplicationInfo; // @synthesize sourceApplicationInfo=_sourceApplicationInfo;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)performAfterLogin:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)performAfterLogin:(CDUnknownBlockType)arg1;
- (void)finishWithoutResult;
- (void)finishWithResult:(id)arg1 data:(id)arg2;
- (void)finishWithResult:(id)arg1;
- (void)finish;
- (_Bool)cancel;
- (_Bool)execute;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSDictionary *queryItems;
- (id)initWithURL:(id)arg1 sourceApplicationInfo:(id)arg2;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2;

@end

