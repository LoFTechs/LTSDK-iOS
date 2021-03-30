//
//  JKErrorInfo.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/16.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JKErrorCode) {
    JKErrorCodeNone,
};

@interface JKErrorInfo : NSObject

@property (nonatomic, assign, readonly) NSInteger returnCode;
@property (nonatomic, assign, readonly) JKErrorCode errorCode;
@property (nonatomic, strong, readonly) NSString *errorMessage;

- (JKErrorInfo * _Nonnull)init NS_UNAVAILABLE;
+ (JKErrorInfo * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
