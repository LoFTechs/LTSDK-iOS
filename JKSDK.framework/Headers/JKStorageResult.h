//
//  JKStorageResult.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/23.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JKStorageStatus) {
    JKStorageStatusPrepareLink,
    JKStorageStatusGetLinkDone,
    JKStorageStatusDownloading,
    JKStorageStatusDownloadDone,
    JKStorageStatusUploading,
    JKStorageStatusUploadDone,
    JKStorageStatusDeleteDone,
};

@interface JKStorageResult : NSObject

@property(strong, nonatomic, readonly) NSString *actionID;

@property(assign, nonatomic, readonly) JKStorageStatus status;

@property(strong, nonatomic, readonly) NSString *link;

@property(assign, nonatomic, readonly) long long totalLength;

@property(assign, nonatomic, readonly) long long loadingBytes;

- (JKStorageResult * _Nonnull)init NS_UNAVAILABLE;
+ (JKStorageResult * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
