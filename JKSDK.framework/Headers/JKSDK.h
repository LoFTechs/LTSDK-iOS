//
//  JKSDK.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/20.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for JKSDK.
FOUNDATION_EXPORT double JKSDKVersionNumber;

//! Project version string for JKSDK.
FOUNDATION_EXPORT const unsigned char JKSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JKSDK/PublicHeader.h>


#import <JKSDK/JKUser.h>
#import <JKSDK/JKUserStatus.h>
#import <JKSDK/JKCallKitProxy.h>
#import <JKSDK/JKBaseMessageResponse.h>
#import <JKSDK/JKPushNotificationMessage.h>
#import <JKSDK/JKResponse.h>
#import <JKSDK/JKErrorInfo.h>
#import <JKSDK/JKStorageManager.h>
#import <JKSDK/JKSDKOptions.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKSDK : NSObject

+ (void)initWithOptions:(JKSDKOptions * _Nonnull)options completion:(void (^)(JKResponse * _Nonnull response))completion;

+ (void)getUsersWithCompletion:(void (^)(JKResponse * _Nonnull response, NSArray<JKUser *> * _Nullable users))completion;

+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken completion:(void (^)(JKResponse * _Nonnull response))completion;
+ (void)updateNotificationKeyWithAPNSToken:(NSString *)apnsToken voipToken:(NSString *)voipToken cleanOld:(BOOL)cleanOld completion:(void (^)(JKResponse * _Nonnull response))completion;

+ (void)terminateWithUserID:(NSString * _Nonnull)userID;

+ (void)clean;

+ (JKUser * _Nullable)getUserWithUserID:(NSString * _Nonnull)userID;

+ (JKStorageManager * _Nullable)getStorageManagerWithUserID:(NSString * _Nonnull)userID;

+ (void)parseIncomingPushWithNotify:(NSDictionary * _Nonnull)notifyMeesage;

//MARK: APNS parse
+ (JKPushNotificationMessage * _Nonnull)parsePushNotificationWithNotify:(NSDictionary * _Nonnull)notifyMeesage;

+ (void)setDeviceUniqueKey:(NSString * _Nullable)key;

+ (void)getUserStatusWithPhoneNumbers:(NSArray<NSString *> * _Nonnull)phones completion:(void (^)(JKResponse * _Nonnull response, NSArray<JKUserStatus *> * _Nullable userStatuses))completion;
+ (void)getUserStatusWithSemiUIDs:(NSArray<NSString *> * _Nonnull)semiUIDs completion:(void (^)(JKResponse * _Nonnull response, NSArray<JKUserStatus *> * _Nullable userStatuses))completion;

@end

NS_ASSUME_NONNULL_END
