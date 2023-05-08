//
//  LTSDK.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/20.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for LTSDK.
FOUNDATION_EXPORT double LTSDKVersionNumber;

//! Project version string for LTSDK.
FOUNDATION_EXPORT const unsigned char LTSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LTSDK/PublicHeader.h>

#import <LTSDK/LTBaseMessageResponse.h>
#import <LTSDK/LTErrorInfo.h>
#import <LTSDK/LTPushNotificationMessage.h>
#import <LTSDK/LTResponse.h>
#import <LTSDK/LTSDKOptions.h>
#import <LTSDK/LTStorageManager.h>
#import <LTSDK/LTUser.h>
#import <LTSDK/LTUserStatus.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTSDK : NSObject

+ (void)initWithOptions:(LTSDKOptions * _Nonnull)options completion:(void (^)(LTResponse * _Nonnull response))completion;

+ (void)getUsersWithCompletion:(void (^)(LTResponse * _Nonnull response, NSArray<LTUser *> * _Nullable users))completion;

+ (void)setDeviceUniqueKey:(NSString * _Nullable)key;

+ (void)terminateWithUserID:(NSString * _Nonnull)userID;

+ (void)clean;

+ (void)deletePrimaryUserWithCompletion:(void (^)(LTResponse * _Nonnull response))completion;

@end

@interface LTSDK(Notification)

+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken completion:(void (^)(LTResponse * _Nonnull response))completion;

+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken cleanOld:(BOOL)cleanOld completion:(void (^)(LTResponse * _Nonnull response))completion;

+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken cleanOld:(BOOL)cleanOld isDebug:(BOOL)isDebug completion:(void (^)(LTResponse * _Nonnull response))completion;

+ (void)parseIncomingPushWithNotify:(NSDictionary * _Nonnull)notifyMeesage;

+ (LTPushNotificationMessage * _Nonnull)parsePushNotificationWithNotify:(NSDictionary * _Nonnull)notifyMeesage;

@end

@interface LTSDK(UserStatus)

+ (LTUser * _Nullable)getUserWithUserID:(NSString * _Nonnull)userID;

+ (void)getUserStatusWithPhoneNumbers:(NSArray<NSString *> * _Nonnull)phones completion:(void (^)(LTResponse * _Nonnull response, NSArray<LTUserStatus *> * _Nullable userStatuses))completion;

+ (void)getUserStatusWithSemiUIDs:(NSArray<NSString *> * _Nonnull)semiUIDs completion:(void (^)(LTResponse * _Nonnull response, NSArray<LTUserStatus *> * _Nullable userStatuses))completion;

@end

@interface LTSDK(Storage)

+ (LTStorageManager * _Nullable)getStorageManagerWithUserID:(NSString * _Nonnull)userID;

@end

NS_ASSUME_NONNULL_END
#import <LTSDK/LTUser+JK.h>
