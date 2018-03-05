//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class JDWebViewMenuData, NSDictionary, NSMutableDictionary, NSString;

@interface MMConfigMgr : MMService <MMService>
{
    NSMutableDictionary *m_dicCacheConfigSeperator;
    NSMutableDictionary *m_dicCacheConfig;
    NSMutableDictionary *m_dicConfig;
    NSMutableDictionary *m_dicDynamicConfig;
    NSMutableDictionary *m_dicDynamicConfigSplit;
    int m_iVersion;
    NSMutableDictionary *m_dicJDConfigCache;
    JDWebViewMenuData *m_JDMenuCache;
    NSDictionary *m_dicPrefetchDomains;
    _Bool m_bDomainPrefetchEnabled;
}

+ (_Bool)isAutoDownloadCloseForValue:(id)arg1;
@property(retain) NSMutableDictionary *m_dicCacheConfig; // @synthesize m_dicCacheConfig;
@property(retain) NSMutableDictionary *m_dicCacheConfigSeperator; // @synthesize m_dicCacheConfigSeperator;
- (void).cxx_destruct;
- (_Bool)isAutoDownloadCloseForKey:(id)arg1;
- (id)getJDWebviewMenuData;
- (id)prefetchedDomainDictWithXMLString:(id)arg1;
- (void)loadDNSPrefetchConfig;
- (id)prefetchedDomainsForDomain:(id)arg1;
- (void)updateSignalingScenes;
- (unsigned int)uintFromDynamicConfigForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned int)uintFromDynamicConfigForKey:(id)arg1;
- (id)valueFromDynamicConfigForKey:(id)arg1;
- (unsigned int)uintForKey:(id)arg1 config:(id)arg2;
- (id)valueForKey:(id)arg1 config:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)loadData;
- (void)saveDynamicConfigSplit;
- (void)loadDynamicConfigSplit;
- (id)getDynamicConfigSplitFilePath;
- (id)getDynamicConfigFilePath;
- (void)initCacheStaticConfig;
- (void)initStaticConfig:(id)arg1;
- (void)mergeDynamicConfig:(id)arg1;
- (void)initDynamicConfig:(id)arg1;
- (id)parseDynamicConfig:(id)arg1 type:(const char *)arg2;
- (id)parseXMLToMenuItem:(struct XmlReaderNode_t *)arg1;
- (void)parseWebViewCustomizeConfig:(struct XmlReaderNode_t *)arg1 forMenuData:(id)arg2;
- (void)initConfig:(id)arg1 for:(id)arg2;
- (_Bool)isItemSupportCountry:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (_Bool)isItemSupportLanguage:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (id)addConfigName:(id)arg1 forConfig:(id)arg2;
- (void)downLoadConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
