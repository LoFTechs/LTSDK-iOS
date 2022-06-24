//
//  LTFileInfo.h
//  LTIMSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTFileInfo : NSObject

@property (strong, nonatomic, nullable) NSString *fileName;

@property (strong, nonatomic, nullable) NSString *remoteFilePath;

@property (strong, nonatomic, nullable) NSString *fileContentType;

@property (assign, nonatomic) long long fileSize;

@property (strong, nonatomic, nullable) NSString *storageID;

@property (strong, nonatomic, nullable) NSString *storageDomain;

@property (strong, nonatomic, nullable) NSString *endpointName;

@property (assign, nonatomic) long long updateTime;

@property (assign, nonatomic) BOOL isExist;

+ (LTFileInfo *)createWithProfileImageID:(NSString *)profileImageID userID:(NSString *)userID updateTime:(long long)updateTime;

@end

NS_ASSUME_NONNULL_END
