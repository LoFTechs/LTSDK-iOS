//
//  LTStorageAction.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LTUser.h"
#import "LTFileInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface LTStorageAction : NSObject

@property(strong, nonatomic, nonnull, readonly) NSString *actionID;

@property(assign, nonatomic, readonly) NSInteger expireMinute;

@property(strong, nonatomic, nonnull, readonly) NSString *fileName;

@property(assign, nonatomic, readonly) long long fileSize;

@property(strong, nonatomic, nonnull, readonly) NSString *remotePath;

@property(strong, nonatomic, nonnull, readonly) NSString *contentType;

@property(strong, nonatomic, nonnull, readonly) NSString *ownerID;

@property(strong, nonatomic, nonnull, readonly) NSString *ownerDomain;

@property(strong, nonatomic, nullable, readonly) NSString *endpointName;

@property(strong, nonatomic, nullable, readonly) NSString *storePath;

@property(strong, nonatomic, nullable ,readonly) NSData *fileData;

- (LTStorageAction *)init NS_UNAVAILABLE;
+ (LTStorageAction *)new NS_UNAVAILABLE;

+ (LTStorageAction *)createDownloadLinkActionWithRemotePath:(NSString *)remotePath fileName:(NSString *)fileName contentType:(NSString *)contentType endpointName:(NSString * _Nullable)endpointName expireMinute:(NSInteger)expireMinute ownerID:(NSString *)ownerID ownerDomain:(NSString *)ownerDomain;
+ (LTStorageAction *)createDownloadFileActionWithRemotePath:(NSString *)remotePath fileName:(NSString *)fileName contentType:(NSString *)contentType storePath:(NSString * _Nullable)storePath expireMinute:(NSInteger)expireMinute ownerID:(NSString *)ownerID ownerDomain:(NSString *)ownerDomain endpointName:(NSString * _Nullable)endpointName;
+ (LTStorageAction *)createUploadLinkActionWithRemotePath:(NSString *)remotePath fileName:(NSString *)fileName contentType:(NSString * _Nonnull)contentType expireMinute:(NSInteger)expireMinute ownerID:(NSString *)ownerID ownerDomain:(NSString *)ownerDomain fileSize:(long long)fileSize;
+ (LTStorageAction *)createUploadFileActionWithRemotePath:(NSString *)remotePath fileName:(NSString *)fileName contentType:(NSString * _Nonnull)contentType  fileData:(NSData * _Nullable)fileData expireMinute:(NSInteger)expireMinute ownerID:(NSString *)ownerID ownerDomain:(NSString *)ownerDomain fileSize:(long long)fileSize;
+ (LTStorageAction *)createDeleteFileActionWithRemotePath:(NSString *)remotePath fileName:(NSString *)fileName contentType:(NSString *)contentType endpointName:(NSString * _Nullable)endpointName expireMinute:(NSInteger)expireMinute ownerID:(NSString *)ownerID ownerDomain:(NSString *)ownerDomain;

+ (LTStorageAction *)createDownloadLinkActionWithLTFileInfo:(LTFileInfo *)fileInfo;
+ (LTStorageAction *)createDownloadFileActionWithLTFileInfo:(LTFileInfo *)fileInfo storePath:(NSString * _Nullable)storePath;
+ (LTStorageAction *)createUploadLinkActionWithLTFileInfo:(LTFileInfo *)fileInfo fileSize:(long long)fileSize;
+ (LTStorageAction *)createUploadFileActionWithLTFileInfo:(LTFileInfo *)fileInfo fileData:(NSData * _Nullable)fileData fileSize:(long long)fileSize;
+ (LTStorageAction *)createDeleteFileActionWithLTFileInfo:(LTFileInfo *)fileInfo;


@end

NS_ASSUME_NONNULL_END
