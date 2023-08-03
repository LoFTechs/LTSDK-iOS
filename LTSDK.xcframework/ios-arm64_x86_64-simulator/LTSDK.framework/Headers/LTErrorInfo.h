//
//  LTErrorInfo.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/7/16.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LTErrorCode) {
    LTErrorCodeNone,
};

@interface LTErrorInfo : NSObject

@property (nonatomic, assign, readonly) NSInteger returnCode;
@property (nonatomic, assign, readonly) LTErrorCode errorCode;
@property (nonatomic, strong, readonly) NSString *errorMessage;

- (LTErrorInfo * _Nonnull)init NS_UNAVAILABLE;
+ (LTErrorInfo * _Nonnull)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
