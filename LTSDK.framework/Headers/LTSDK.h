//
//  LTSDK.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for LTSDK.
FOUNDATION_EXPORT double LTSDKVersionNumber;

//! Project version string for LTSDK.
FOUNDATION_EXPORT const unsigned char LTSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LTSDK/PublicHeader.h>


#import <LTSDK/LTUser.h>
#import <LTSDK/LTUserStatus.h>
#import <LTSDK/LTCallKitProxy.h>
#import <LTSDK/LTBaseMessageResponse.h>
#import <LTSDK/LTPushNotificationMessage.h>
#import <LTSDK/LTResponse.h>
#import <LTSDK/LTErrorInfo.h>
#import <LTSDK/LTStorageManager.h>
#import <LTSDK/LTSDKOptions.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTSDK : NSObject

+ (void)initWithOptions:(LTSDKOptions * _Nonnull)options completion:(void (^)(LTResponse * _Nonnull response))completion;

+ (void)getUsersWithCompletion:(void (^)(LTResponse * _Nonnull response, NSArray<LTUser *> * _Nullable users))completion;

+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken completion:(void (^)(LTResponse * _Nonnull response))completion;
+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken cleanOld:(BOOL)cleanOld completion:(void (^)(LTResponse * _Nonnull response))completion;
+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken cleanOld:(BOOL)cleanOld isDebug:(BOOL)isDebug completion:(void (^)(LTResponse * _Nonnull response))completion;

+ (void)terminateWithUserID:(NSString * _Nonnull)userID;

+ (void)clean;

+ (LTUser * _Nullable)getUserWithUserID:(NSString * _Nonnull)userID;

+ (LTStorageManager * _Nullable)getStorageManagerWithUserID:(NSString * _Nonnull)userID;

+ (void)parseIncomingPushWithNotify:(NSDictionary * _Nonnull)notifyMeesage;

//MARK: APNS parse
+ (LTPushNotificationMessage * _Nonnull)parsePushNotificationWithNotify:(NSDictionary * _Nonnull)notifyMeesage;

+ (void)setDeviceUniqueKey:(NSString * _Nullable)key;

+ (void)getUserStatusWithPhoneNumbers:(NSArray<NSString *> * _Nonnull)phones completion:(void (^)(LTResponse * _Nonnull response, NSArray<LTUserStatus *> * _Nullable userStatuses))completion;
+ (void)getUserStatusWithSemiUIDs:(NSArray<NSString *> * _Nonnull)semiUIDs completion:(void (^)(LTResponse * _Nonnull response, NSArray<LTUserStatus *> * _Nullable userStatuses))completion;

@end

NS_ASSUME_NONNULL_END
