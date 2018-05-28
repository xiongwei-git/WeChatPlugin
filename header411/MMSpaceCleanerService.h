//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMSpaceCleanerService : MMService <MMService>
{
    BOOL _m_isCleaning;
    NSMutableDictionary *_m_moduleCacheList;
    unsigned long long _m_totalSessionSize;
    unsigned long long _m_totalSpaceSize;
    unsigned long long _m_favoritesCacheSize;
}

@property(nonatomic) BOOL m_isCleaning; // @synthesize m_isCleaning=_m_isCleaning;
@property(nonatomic) unsigned long long m_favoritesCacheSize; // @synthesize m_favoritesCacheSize=_m_favoritesCacheSize;
@property(nonatomic) unsigned long long m_totalSpaceSize; // @synthesize m_totalSpaceSize=_m_totalSpaceSize;
@property(nonatomic) unsigned long long m_totalSessionSize; // @synthesize m_totalSessionSize=_m_totalSessionSize;
@property(retain, nonatomic) NSMutableDictionary *m_moduleCacheList; // @synthesize m_moduleCacheList=_m_moduleCacheList;
- (void).cxx_destruct;
- (id)getSizeStringWithSize:(unsigned long long)arg1;
- (id)getTotalSessionSizeString;
- (id)getTotalSpaceSizeString;
- (void)cleanCaches;
- (unsigned long long)computeSingleSessionSizeWithoutThumbnail:(id)arg1;
- (void)computeTotalSessionSizeWithoutThumbnail;
- (unsigned long long)getTotalSpaceSize;
- (void)computeTotalSpaceSize;
- (void)updateCacheSize:(unsigned long long)arg1 moduleName:(id)arg2;
- (void)destroy;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
