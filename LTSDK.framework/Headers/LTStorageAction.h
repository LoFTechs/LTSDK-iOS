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

@property(strong, nonatomic, readonly) NSString *ownerID;

@property(strong, nonatomic, readonly) NSString *ownerDomain;

@property(strong, nonatomic, readonly) NSString *endpointName;

@property(strong, nonatomic, readonly) NSString *storePath;

@property(strong, nonatomic, readonly) NSData *fileData;

- (LTStorageAction * _Nonnull)init NS_UNAVAILABLE;
+ (LTStorageAction * _Nonnull)new NS_UNAVAILABLE;

+ (LTStorageAction *)createDownloadLinkActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType endpointName:(NSString * _Nonnull)endpointName expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain;
+ (LTStorageAction *)createDownloadFileActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType storePath:(NSString * _Nonnull)storePath expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain endpointName:(NSString * _Nonnull)endpointName;
+ (LTStorageAction *)createUploadLinkActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain fileSize:(long long)fileSize;
+ (LTStorageAction *)createUploadFileActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType  fileData:(NSData * _Nonnull)fileData expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain fileSize:(long long)fileSize;
+ (LTStorageAction *)createDeleteFileActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType endpointName:(NSString * _Nonnull)endpointName expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain;

+ (LTStorageAction *)createDownloadLinkActionWithLTFileInfo:(LTFileInfo * _Nonnull)fileInfo;
+ (LTStorageAction *)createDownloadFileActionWithLTFileInfo:(LTFileInfo * _Nonnull)fileInfo storePath:(NSString * _Nonnull)storePath;
+ (LTStorageAction *)createUploadLinkActionWithLTFileInfo:(LTFileInfo * _Nonnull)fileInfo fileSize:(long long)fileSize;
+ (LTStorageAction *)createUploadFileActionWithLTFileInfo:(LTFileInfo * _Nonnull)fileInfo fileData:(NSData * _Nonnull)fileData fileSize:(long long)fileSize;
+ (LTStorageAction *)createDeleteFileActionWithLTFileInfo:(LTFileInfo * _Nonnull)fileInfo;


@end

NS_ASSUME_NONNULL_END
