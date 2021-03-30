//
//  JKPushNotificationMessage.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/11/23.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <JKSDK/JKBaseMessageResponse.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKPushNotificationMessage : JKBaseMessageResponse

@property (strong, nonatomic, readonly) NSArray<NSString *> *loc_args;

@property (strong, nonatomic, readonly) NSString *loc_key;

@property (assign, nonatomic, readonly) NSUInteger badge;

@property (assign, nonatomic, readonly) BOOL mutable_content;

@property (strong, nonatomic, readonly) NSString *sound;

@property (strong, nonatomic, readonly) NSString *chID;

@property (assign, nonatomic, readonly) NSInteger chType;

@property (strong, nonatomic, readonly) NSString *msgContent;

@property (strong, nonatomic, readonly) NSString *msgID;

@property (assign, nonatomic, readonly) NSInteger msgType;

@property (strong, nonatomic, readonly) NSString *senderID;

@property (assign, nonatomic, readonly) long long sendTime;//millisecond

@property (assign, nonatomic, readonly) BOOL encrypted;//isEncrypt

@property (strong, nonatomic, readonly) NSDictionary *extInfo;

@property (strong, nonatomic, readonly) NSString *displayName;

@property (strong, nonatomic, readonly) NSString *caller;

@property (strong, nonatomic, readonly) NSString *receiver;

@property (assign, nonatomic, readonly) NSUInteger unreadCount;

@property (assign, nonatomic, readonly) BOOL legacyFormat;

@property (strong, nonatomic, readonly) NSNumber *ringDuration;// for Meet

@end

NS_ASSUME_NONNULL_END
