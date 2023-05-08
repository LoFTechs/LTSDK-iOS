//
//  LTStorageManager.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/15.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <LTSDK/LTResponse.h>
#import <LTSDK/LTStorageAction.h>
#import <LTSDK/LTStorageResult.h>
#import <LTSDK/LTUser.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LTStorageDelegate <NSObject>
@optional
- (void)LTStorageUploadProgressDidChanged:(LTStorageResult * _Nonnull)result;
- (void)LTStorageDownloadProgressDidChanged:(LTStorageResult * _Nonnull)result;
- (void)LTStorageStatusDidChanged:(LTStorageResult * _Nonnull)result;
@end

@interface LTStorageManager : NSObject

@property (weak, nonatomic) id<LTStorageDelegate> delegate;

- (void)executeWithAcitons:(NSArray<LTStorageAction *> * _Nonnull)actions completion:(void (^_Nullable)(LTResponse * _Nonnull response, NSArray<LTStorageResult *> * _Nullable resultArray))completion resultsChanged:(void (^_Nullable)(NSArray<LTStorageResult *> * _Nullable resultArray))resultsChanged;
- (void)cancelExecuteWithActionIDs:(NSArray<NSString *> *)actionIDs;

- (void)getStorageResultWithActionID:(NSString * _Nonnull)actionID completion:(void (^_Nullable)(LTStorageResult * _Nonnull resule))completion;

- (LTStorageManager * _Nonnull)init NS_UNAVAILABLE;
+ (LTStorageManager * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
