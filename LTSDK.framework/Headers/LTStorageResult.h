//
//  LTStorageResult.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/23.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LTStorageStatus) {
    LTStorageStatusPrepareLink,
    LTStorageStatusGetLinkDone,
    LTStorageStatusDownloading,
    LTStorageStatusDownloadDone,
    LTStorageStatusUploading,
    LTStorageStatusUploadDone,
    LTStorageStatusDeleteDone,
};

@interface LTStorageResult : NSObject

@property(strong, nonatomic, readonly) NSString *actionID;

@property(assign, nonatomic, readonly) LTStorageStatus status;

@property(strong, nonatomic, readonly) NSString *link;

@property(assign, nonatomic, readonly) long long totalLength;

@property(assign, nonatomic, readonly) long long loadingBytes;

- (LTStorageResult * _Nonnull)init NS_UNAVAILABLE;
+ (LTStorageResult * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
