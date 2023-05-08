//
//  LTUser+JK.h
//  LTSDK
//
//  Created by Zayn on 2022/10/12.
//  Copyright © 2022 LoFTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTUser()

- (void)getUserTokenWithCompletion:(void (^)(LTResponse * _Nullable response, NSString * _Nonnull accessToken))completion;

@end

NS_ASSUME_NONNULL_END
