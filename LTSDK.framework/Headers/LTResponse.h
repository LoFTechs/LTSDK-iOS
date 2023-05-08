//
//  LTResponse.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/25.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, LTReturnCode) {
    LTReturnCodeTimeout = -3,
    LTReturnCodeInitFailed = -2,
    LTReturnCodeFailed = -1,
    LTReturnCodeSuccess = 0,
    LTReturnCodeWrongUserOrPassword = 1,
    LTReturnCodeInBlackList = 133,
    LTReturnCodeNotFound = 404,
    LTReturnCodeUnknowError = 1000,
    LTReturnCodeNotSupportFormat = 1001,
    LTReturnCodeNotSupportCommand = 1002,
    LTReturnCodeDataBaseAccessError = 1003,
    LTReturnCodeRequestTooManyTimes = 1004,
    LTReturnCodeChannelIDFormatError = 1101,
    LTReturnCodeChannelIDAlreadyExist = 1102,
    LTReturnCodeNotSupportChannelType = 1103,
    LTReturnCodeNotMatchChannelType = 1104,
    LTReturnCodeNotExistChannelID = 1105,
    LTReturnCodeNotInChannel = 1106,
    LTReturnCodeWithoutPrivilege = 1107,
    LTReturnCodeMemberNumberBelowLimit = 1108,
    LTReturnCodeNoUserToKick = 1109,
    LTReturnCodeNoUserToban = 1110,
    LTReturnCodeNoChannelPreferenceToSet = 1111,
    LTReturnCodeNoUserProfileToSet = 1112,
    LTReturnCodeMessageNotBelongUser = 1113,
    LTReturnCodeMembersNotInChannel = 1114,
    LTReturnCodeMemberNumberOverLimit = 1115,
    LTReturnCodeUserNotInvitedInChannel = 1116,
    LTReturnCodeUserNotInChannel = 1117,
    LTReturnCodeMessageNotExist = 1118,
    LTReturnCodeMessageAlreadySendOrExist = 1119,
    LTReturnCodeNoUserPrivilegeToSet = 1120,
    LTReturnCodeTimeExpire = 1121,
    LTReturnCodeNotCurrentUser = 6000
};

NS_ASSUME_NONNULL_BEGIN

@interface LTResponse : NSObject

@property (nonatomic, strong, nullable) NSString *returnMessage;
@property (nonatomic, assign) LTReturnCode returnCode;

@end

NS_ASSUME_NONNULL_END
