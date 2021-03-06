//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EmoticonOperateCGIDelegate.h"
#import "EmoticonUploadCGIDelegate.h"
#import "ExchangeEmoticonPackCgiDelegate.h"
#import "GetEmotionFavMD5ListCGIDelegate.h"

@class AFURLSessionManager, EmoticonOperateCGI, EmoticonUploadCGI, ExchangeEmoticonPackCgi, GetEmotionFavMD5ListCGI, MMTimer, MessageData, NSCache, NSMutableArray, NSString;

@interface MMEmoticonMgrLogic : NSObject <GetEmotionFavMD5ListCGIDelegate, EmoticonUploadCGIDelegate, EmoticonOperateCGIDelegate, ExchangeEmoticonPackCgiDelegate>
{
    id <MMEmoticonMgrLogicDelegate> _delegate;
    id <ToastViewDelegate> _toastViewDelegate;
    MMTimer *_downloadTimer;
    NSMutableArray *_dataStorageList;
    NSMutableArray *_dataList;
    GetEmotionFavMD5ListCGI *_getEmotionFavMD5ListCGI;
    NSMutableArray *_downloadQueue;
    AFURLSessionManager *_downloadMgr;
    NSMutableArray *_uploadQueue;
    EmoticonUploadCGI *_emoticonUploadCGI;
    NSMutableArray *_operateQueue;
    EmoticonOperateCGI *_emoticonOperateCGI;
    NSCache *_cache;
    NSCache *_dataCache;
    MessageData *_emoticonMessage;
    ExchangeEmoticonPackCgi *_exchangeEmoticonPackCgi;
}

@property(retain, nonatomic) ExchangeEmoticonPackCgi *exchangeEmoticonPackCgi; // @synthesize exchangeEmoticonPackCgi=_exchangeEmoticonPackCgi;
@property(retain, nonatomic) MessageData *emoticonMessage; // @synthesize emoticonMessage=_emoticonMessage;
@property(retain, nonatomic) NSCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) EmoticonOperateCGI *emoticonOperateCGI; // @synthesize emoticonOperateCGI=_emoticonOperateCGI;
@property(retain, nonatomic) NSMutableArray *operateQueue; // @synthesize operateQueue=_operateQueue;
@property(retain, nonatomic) EmoticonUploadCGI *emoticonUploadCGI; // @synthesize emoticonUploadCGI=_emoticonUploadCGI;
@property(retain, nonatomic) NSMutableArray *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) AFURLSessionManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSMutableArray *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) GetEmotionFavMD5ListCGI *getEmotionFavMD5ListCGI; // @synthesize getEmotionFavMD5ListCGI=_getEmotionFavMD5ListCGI;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain) NSMutableArray *dataStorageList; // @synthesize dataStorageList=_dataStorageList;
@property(retain, nonatomic) MMTimer *downloadTimer; // @synthesize downloadTimer=_downloadTimer;
@property(nonatomic) __weak id <ToastViewDelegate> toastViewDelegate; // @synthesize toastViewDelegate=_toastViewDelegate;
@property(nonatomic) __weak id <MMEmoticonMgrLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onExchangeEmoticonPackCgiFailedWithProductId:(id)arg1 ret:(int)arg2;
- (void)onExchangeEmoticonPackCgiOkWithProductId:(id)arg1;
- (BOOL)exchangeEmotionPackWithProductId:(id)arg1;
- (void)addExchangedEmoticon;
- (void)addFavEmoticon:(id)arg1;
- (void)EmoticonOperateCGIDidFailed:(id)arg1;
- (void)EmoticonOperateCGIDidFinished:(id)arg1 needUploadMD5List:(id)arg2;
- (void)startOperateNextTask;
- (void)emoticonDidFailedUpload:(id)arg1;
- (void)emoticonDidFinishedUpload:(id)arg1 emojiType:(unsigned int)arg2;
- (void)startUploadNextEmoticonTask;
- (void)emoticonDidFailedDownload;
- (void)emoticonDidFinishedDownloadWithEmojiType:(unsigned int)arg1;
- (void)startDownloadNextEmotionTask;
- (void)startDownloadEmoticonFromMD5List;
- (void)onGetEmoticonFavMD5ListFinished:(id)arg1;
- (void)refreshFavEmoticons;
- (void)loadFavEmoticonDataFromFile;
- (void)saveFavEmoticonDataListToFile;
- (id)getFavEmoticons;
- (BOOL)isEmoticonMD5InDataStorageList:(id)arg1;
- (int)getEmoticonCustomTypeWithMD5:(id)arg1;
- (id)getDataStorageList;
- (void)preloadStoreEmoticonInCache:(id)arg1;
- (void)preloadEmoticonInCache;
- (id)getEmotionThumbWithMD5:(id)arg1;
- (id)getEmotionImgWithMD5:(id)arg1;
- (id)getEmotionThumbDataWithMD5:(id)arg1;
- (id)getEmotionDataWithMD5:(id)arg1;
- (void)removeFavEmoticonFromServerWithMD5:(id)arg1;
- (unsigned char)removeFavEmoticonLocalCahceWithMD5:(id)arg1;
- (BOOL)deleteFavEmoticonWithMD5:(id)arg1;
- (void)onGetEmoticonFavMD5ListFailed;
- (void)addEmoticonToUploadQueueWithMD5:(id)arg1;
- (void)addEmoticonToServerWithMD5:(id)arg1;
- (void)addEmoticonToLocalCacheWithMD5:(id)arg1 type:(int)arg2;
- (BOOL)addFavEmoticonWithMD5:(id)arg1 type:(int)arg2;
- (BOOL)isTouchLimitSize:(id)arg1;
- (BOOL)isTouchLimitCount;
- (BOOL)isEmoticonMD5InFavorites:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

