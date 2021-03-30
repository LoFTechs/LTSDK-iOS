//
//  JKSDKOptions.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/10/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKSDKOptions : NSObject

@property (strong, nonatomic) NSString *licenseKey;

@property (strong, nonatomic) NSString *url;

@property (strong, nonatomic) NSString *userID;

@property (strong, nonatomic) NSString *uuid;

@end

NS_ASSUME_NONNULL_END
