//
//  JKResponse.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/25.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, JKReturnCode) {
    JKReturnCodeTimeout = -3,
    JKReturnCodeInitFailed = -2,
    JKReturnCodeFailed = -1,
    JKReturnCodeSuccess = 0,
    JKReturnCodeWrongUserOrPassword = 1,
    JKReturnCodeInBlackList = 133,
    JKReturnCodeNotFound = 404,
    JKReturnCodeUnknowError = 1000,
    JKReturnCodeNotSupportFormat = 1001,
    JKReturnCodeNotSupportCommand = 1002,
    JKReturnCodeDataBaseAccessError = 1003,
    JKReturnCodeRequestTooManyTimes = 1004,
    JKReturnCodeChannelIDFormatError = 1101,
    JKReturnCodeChannelIDAlreadyExist = 1102,
    JKReturnCodeNotSupportChannelType = 1103,
    JKReturnCodeNotMatchChannelType = 1104,
    JKReturnCodeNotExistChannelID = 1105,
    JKReturnCodeNotInChannel = 1106,
    JKReturnCodeWithoutPrivilege = 1107,
    JKReturnCodeMemberNumberBelowLimit = 1108,
    JKReturnCodeNoUserToKick = 1109,
    JKReturnCodeNoUserToban = 1110,
    JKReturnCodeNoChannelPreferenceToSet = 1111,
    JKReturnCodeNoUserProfileToSet = 1112,
    JKReturnCodeMessageNotBelongUser = 1113,
    JKReturnCodeMembersNotInChannel = 1114,
    JKReturnCodeMemberNumberOverLimit = 1115,
    JKReturnCodeUserNotInvitedInChannel = 1116,
    JKReturnCodeUserNotInChannel = 1117,
    JKReturnCodeMessageNotExist = 1118,
    JKReturnCodeMessageAlreadySendOrExist = 1119,
    JKReturnCodeNoUserPrivilegeToSet = 1120,
    JKReturnCodeTimeExpire = 1121,
    JKReturnCodeNotCurrentUser = 6000
};

NS_ASSUME_NONNULL_BEGIN

@interface JKResponse : NSObject

@property (nonatomic, strong) NSString *returnMessage;
@property (nonatomic, assign) JKReturnCode returnCode;

@end

NS_ASSUME_NONNULL_END
