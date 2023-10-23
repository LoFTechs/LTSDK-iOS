//
//  LTPermissionManager.h
//  LTSDK
//
//  Created by shane on 2022/12/5.
//  Copyright © 2022 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <LTSDK/LTResponse.h>
#import <LTSDK/LTUser.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTPermissionManager : NSObject

- (NSArray<NSDictionary *> *)getPermissionsWithUserID:(NSString *)userID input:(NSDictionary *)input category:(NSString *)category action:(NSString *)action;

- (void)syncPermissionsWithUserID:(NSString *)userID completion:(void (^)(LTResponse *response))completion;

- (void)syncPermissionsWithUserID:(NSString *)userID time:(NSTimeInterval)time completion:(void (^)(LTResponse *response))completion;


@end


NS_ASSUME_NONNULL_END
