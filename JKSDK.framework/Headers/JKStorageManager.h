//
//  JKStorageManager.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/15.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import "JKUser.h"
#import "JKStorageAction.h"
#import "JKStorageResult.h"
#import "JKResponse.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JKStorageDelegate <NSObject>
@optional
- (void)JKStorageUploadProgressDidChanged:(JKStorageResult * _Nonnull)result;
- (void)JKStorageDownloadProgressDidChanged:(JKStorageResult * _Nonnull)result;
- (void)JKStorageStatusDidChanged:(JKStorageResult * _Nonnull)result;
@end

@interface JKStorageManager : NSObject

@property (weak, nonatomic) id<JKStorageDelegate> delegate;

- (void)executeWithAcitons:(NSArray<JKStorageAction *> * _Nonnull)actions completion:(void (^_Nullable)(JKResponse * _Nonnull response, NSArray<JKStorageResult *> * _Nullable resultArray))completion resultsChanged:(void (^_Nullable)(NSArray<JKStorageResult *> * _Nullable resultArray))resultsChanged;
- (void)cancelExecuteWithActionIDs:(NSArray<NSString *> *)actionIDs;

- (void)getStorageResultWithActionID:(NSString * _Nonnull)actionID completion:(void (^_Nullable)(JKStorageResult * _Nonnull resule))completion;

- (JKStorageManager * _Nonnull)init NS_UNAVAILABLE;
+ (JKStorageManager * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
