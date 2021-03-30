//
//  JKStorageAction.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface JKStorageAction : NSObject

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

- (JKStorageAction * _Nonnull)init NS_UNAVAILABLE;
+ (JKStorageAction * _Nonnull)new NS_UNAVAILABLE;

+ (JKStorageAction *)createDownloadLinkActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType endpointName:(NSString * _Nonnull)endpointName expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain;
+ (JKStorageAction *)createDownloadFileActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType storePath:(NSString * _Nonnull)storePath expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain endpointName:(NSString * _Nonnull)endpointName;
+ (JKStorageAction *)createUploadLinkActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain fileSize:(long long)fileSize;
+ (JKStorageAction *)createUploadFileActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType  fileData:(NSData * _Nonnull)fileData expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain fileSize:(long long)fileSize;
+ (JKStorageAction *)createDeleteFileActionWithRemotePath:(NSString * _Nonnull)remotePath fileName:(NSString * _Nonnull)fileName contentType:(NSString * _Nonnull)contentType endpointName:(NSString * _Nonnull)endpointName expireMinute:(NSInteger)expireMinute ownerID:(NSString * _Nonnull)ownerID ownerDomain:(NSString * _Nonnull)ownerDomain;
@end

NS_ASSUME_NONNULL_END
