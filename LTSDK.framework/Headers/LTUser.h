//
//  LTUser.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JoinedCompany;
@class Logo;
@class SearchID;

NS_ASSUME_NONNULL_BEGIN

@interface LTUser : NSObject

@property(nullable, nonatomic, strong) NSString *userID;
@property(nullable, nonatomic, strong) NSString *uuid;
@property(nullable, nonatomic, strong) NSString *semiUID;
@property(nullable, nonatomic, strong) NSString *phoneNumber;
@property(nullable, nonatomic, strong) NSString *accountSrc;
@property(nullable, nonatomic, strong) NSString *deviceModel;
@property(nullable, nonatomic, strong) NSString *deviceID;
@property(nullable, nonatomic, strong) NSString *status;
@property(nullable, nonatomic, strong) NSNumber *createDate;
@property(nullable, nonatomic, strong) NSDictionary *interBrandActions;
@property(nullable, nonatomic, strong) NSNumber *uploadLimit;
@property(nullable, nonatomic, strong) NSArray<NSString *> *denyContactsStr;
@property(nullable, nonatomic, strong) NSArray<NSString *> *exitCodeList;
@property(nonatomic, assign) BOOL whitelist;
@property(nullable, nonatomic, strong) NSArray<NSString *> *overseasCallList;
@property(nullable, nonatomic, strong) NSArray<JoinedCompany *> *joinedCompanies;

- (BOOL)canUseStorage;
- (BOOL)canUseVoice;
- (BOOL)canUseVideo;
- (BOOL)canUseIM;
- (BOOL)isPixAccount;

@end



@interface JoinedCompany : NSObject

@property (nullable, nonatomic, strong) NSString *corpID;
@property (nullable, nonatomic, strong) NSString *corpUID;
@property (nullable, nonatomic, strong) NSString *name;
@property (nullable, nonatomic, strong) NSString *IM_ID;
@property (nullable, nonatomic, strong) NSString *enterpriseID;
@property (nullable, nonatomic, strong) Logo *logo;
@property (nonatomic, assign) BOOL isAllowOuterChat;
@property (nonatomic, assign) BOOL isAllowVideo;
@property (nullable, nonatomic, strong) NSNumber *accExp;
@property (nonatomic, assign) NSInteger channelSpecial;
@property (nullable, nonatomic, strong) NSArray<SearchID *> *searchID;

@end



@interface Logo : NSObject

@property (nullable, nonatomic, strong) NSString *ownerID;
@property (nullable, nonatomic, strong) NSString *ownerDomain;
@property (nullable, nonatomic, strong) NSString *profilePath;
@property (nullable, nonatomic, strong) NSNumber *updateTime;

@end



@interface SearchID : NSObject

@property (nullable, nonatomic, strong) NSString *key;
@property (nullable, nonatomic, strong) NSString *searchKey;
@property (nullable, nonatomic, strong) NSNumber *exp;

@end

NS_ASSUME_NONNULL_END
