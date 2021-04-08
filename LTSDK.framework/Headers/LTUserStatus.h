//
//  LTUserStatus.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/12/11.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTUserStatus : NSObject

@property(readonly, nonatomic, strong) NSString *brandID;
@property(readonly, nonatomic, strong) NSString *corpID;
@property(readonly, nonatomic, strong) NSString *userID;
@property(readonly, nonatomic, strong) NSString *phoneNumber;
@property(readonly, nonatomic, strong) NSString *email;
@property(readonly, nonatomic, strong) NSString *semiUID;
@property(readonly, nonatomic, assign) BOOL canVOIP;
@property(readonly, nonatomic, assign) BOOL canIM;

@end

NS_ASSUME_NONNULL_END
