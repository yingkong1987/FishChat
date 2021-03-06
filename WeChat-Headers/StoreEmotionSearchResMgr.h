//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMResourceMgrExt.h"
#import "MMService.h"

@class NSString;

@interface StoreEmotionSearchResMgr : MMService <MMResourceMgrExt, MMService>
{
}

+ (void)deleteResForSubType:(unsigned int)arg1;
+ (id)dirPathOfEmoticonResForSubType:(unsigned int)arg1;
+ (id)dirPathAfterUnzipIfNeedUpdateForSubType:(unsigned int)arg1;
+ (id)MMKVKeyForEmoticonResWithSubType:(unsigned int)arg1;
+ (void)tryUpdateEmoticonResForSubType:(unsigned int)arg1;
+ (void)tryUpdateSearchRes;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)unZipResWithPath:(id)arg1 forSubType:(unsigned int)arg2;
- (void)updateEmotionSearchResWithPath:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

