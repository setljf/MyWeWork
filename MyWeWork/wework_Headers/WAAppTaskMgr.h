//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAAppTaskDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSString, WATopSessionTaskInfoStorage;

@interface WAAppTaskMgr : MMService <WAAppTaskDelegate, MMService>
{
    NSMutableArray *_arrJumpList;
    NSMutableDictionary *_dicAppID2Task;
    MMTimer *_timerCheckBackgroundTask;
    unsigned int lastMemoryWaringTimeStamp;
    NSString *_curBackToChatAppID;
    NSString *_curBackToChatDefaultName;
    WATopSessionTaskInfoStorage *_topSessionTaskInfoStorage;
}

- (void).cxx_destruct;
- (void)restartAppWithAppID:(id)arg1 extInfo:(id)arg2;
- (void)removeCurBackToChatState;
- (_Bool)isAppTaskBackingToChat:(id)arg1;
- (id)getCurrentBackToChatAppTaskBannerLogoUrl;
- (id)getCurrentBackToChatAppTaskBannerText;
- (id)getCurrentBackToChatAppTask;
- (unsigned long long)getCurrentBackToChatDebugType;
- (id)getCurrentBackToChatStackPaths;
- (id)getCurrentBackToChatRelativePath;
- (id)getCurrentBackToChatAppId;
- (void)updateCurrentBannerText:(id)arg1;
- (void)updateCurrentBackToChatState;
- (void)markBackToChatWithAppID:(id)arg1 usrName:(id)arg2 relativePath:(id)arg3 debugModeType:(unsigned long long)arg4;
- (unsigned int)maxGameTaskRunningCount;
- (unsigned int)maxTaskRunningCount;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)invadateCheckBackgroundTaskTimer;
- (void)startCheckBackgroundTaskTimer;
- (void)taskEnterBackgroundWithAppID:(id)arg1 andRelativePath:(id)arg2;
- (void)taskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)taskDidClose:(id)arg1;
- (void)taskDidOpen:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (_Bool)isGameBackgroundTaskAllowToClose:(id)arg1;
- (void)checkGameAppBackgroundTask;
- (void)closeAllWebViewInNavigatorTask;
- (void)closeTimeoutBackgoundTask;
- (void)closeBackgroundTask:(_Bool)arg1;
- (void)closeAllTaskUseTips:(_Bool)arg1;
- (void)closeTask:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)clearTaskDataAndNotifyTerminate:(id)arg1 isCallCloseTask:(_Bool)arg2;
- (void)clearTaskDataAndNotifyTerminate:(id)arg1;
- (id)allTaskArray;
- (_Bool)isNeedCloseAppTaskToOpenPagePath:(id)arg1 appID:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isNeedNewTask:(id)arg1 pagePath:(id)arg2 appType:(unsigned int)arg3;
- (id)getTaskWithAppID:(id)arg1;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 taskExtInfo:(id)arg3 debugModeType:(unsigned int)arg4;
- (id)previousAppIDInCurrentWindow:(id)arg1;
- (id)getForegroundAppID;
- (unsigned long long)getAppTaskCount;
- (_Bool)getWeAppTaskInfo:(id)arg1;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (void)closeTaskWithAppID:(id)arg1;
- (_Bool)isReachMaxWebViewDepthWithAppID:(id)arg1;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)onServiceEnterBackground;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)removeTopSesionTaskInfo;
- (void)saveTopSessionTaskInfo:(id)arg1;
- (void)loadTopSessionTaskInfo;
- (void)dealloc;
- (id)getJumpInfoWithAppID:(id)arg1;
- (void)validateJumpList;
- (void)clearJumpListForNotOpenOnJumpWeAppScene:(id)arg1;
- (void)checkJumpInfoOnCloseTask:(id)arg1;
- (void)removeToFrontJumpInfoFromLast:(id)arg1 getRemovedAppIDList:(id *)arg2;
- (void)removeLastJumpInfo:(id)arg1;
- (void)clearJumpList;
- (id)getLastWeChatPluginJumpInfoInFront;
- (void)getLastWeApp:(id)arg1 jumpInfo:(id *)arg2 previousJumpInfo:(id *)arg3;
- (id)getRightSiblingJumpInfoListAfter:(id)arg1;
- (id)getAllJumpInfoList;
- (id)getLastJumpInfo;
- (void)addJumpRelationFromAppID:(id)arg1 debugMode:(unsigned int)arg2 role:(unsigned long long)arg3 operateScene:(unsigned long long)arg4 nativePages:(id)arg5 toAppID:(id)arg6 debugMode:(unsigned int)arg7 role:(unsigned long long)arg8;
- (void)jumpWeAppCateGoryOnServiceClearData;
- (void)jumpWeAppCategoryOnServiceReloadData;
- (void)jumpWeAppCategoryOnServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

