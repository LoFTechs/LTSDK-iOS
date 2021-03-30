//
//  JKCallKitProxy.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CallKit/CallKit.h>
#import <JKSDK/JKCallKitDelegate.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JKCallKitProxyState) {
    JKCallKitProxyStateOutgoing,
    JKCallKitProxyStateIncoming,
    JKCallKitProxyStateUnHold,
    JKCallKitProxyStateHold,
    JKCallKitProxyStateEnd
};

@protocol JKCallKitProxyDelegate <NSObject>
@optional
- (void)JKCallKitProxyCallChanged:(id<JKCallKitDelegate>_Nonnull)delegate callState:(JKCallKitProxyState)callState;
@end

@interface JKCallKitProxy : NSObject
@property (weak, nonatomic) id<JKCallKitProxyDelegate> delegate;
+ (JKCallKitProxy *)sharedInstance;

#pragma mark - config

- (void)configureProviderWithLocalizedName:(NSString *_Nonnull)localizedName ringtoneSound:(NSString *_Nonnull)ringtoneSound iconTemplateImage:(UIImage *_Nonnull)iconTemplateImage;
- (void)configAudioSession:(AVAudioSession *_Nonnull)audioSession;

#pragma mark - callkit operation

- (BOOL)isCallKitActivated;
- (BOOL)containsDelegate:(id<JKCallKitDelegate> _Nullable)call;
- (void)startOutgoingCall:(id<JKCallKitDelegate> _Nullable)call update:(CXCallUpdate *_Nullable)update;
- (void)startIncomingCall:(id<JKCallKitDelegate> _Nullable)call update:(CXCallUpdate *_Nullable)update;//deprecated

- (void)initIncomingCallWithUUID:(NSUUID *_Nullable)uuid update:(CXCallUpdate *_Nullable)callUpdate completion:(void (^)(NSError *_Nullable error))completion;
- (void)startIncomingCall:(id<JKCallKitDelegate> _Nullable)call update:(CXCallUpdate *_Nullable)update uuid:(NSUUID *_Nullable)uuid;

- (void)startIncomingCallWithUpdate:(CXCallUpdate *)callUpdate completion:(id<JKCallKitDelegate> _Nullable (^)(NSError *_Nullable error, NSUUID *_Nullable callUUID))completion;

- (void)muteCall:(id<JKCallKitDelegate> _Nullable)call muted:(BOOL)muted;
- (void)heldCall:(id<JKCallKitDelegate> _Nullable)call onHold:(BOOL)onHold;
- (void)endCall:(id<JKCallKitDelegate> _Nullable)call;

#pragma mark - callkit report

- (void)reportStartOutgoingCall:(id<JKCallKitDelegate>_Nullable)call;
- (void)reportOutgoingCall:(id<JKCallKitDelegate> _Nullable)call startedConnectingAtDate:(NSDate *_Nullable)dateStartedConnecting;
- (void)reportOutgoingCall:(id<JKCallKitDelegate> _Nullable)call connectedAtDate:(NSDate *_Nullable)dateConnected;
- (void)reportEndCall:(id<JKCallKitDelegate> _Nullable)call reason:(CXCallEndedReason)endedReason;
- (void)reportEndCallWithUUID:(NSUUID *_Nullable)uuid reason:(CXCallEndedReason)endedReason;

- (void)reportCall:(id<JKCallKitDelegate> _Nullable)call displayName:(NSString *_Nullable)displayName;//deprecated
- (void)reportCall:(id<JKCallKitDelegate> _Nullable)call endedAtDate:(NSDate *_Nullable)dateEnded reason:(CXCallEndedReason)endedReason;
- (void)reportCall:(id<JKCallKitDelegate>)delegate update:(CXCallUpdate *)callUpdate;
- (void)reportCallWithUUID:(NSUUID *_Nullable)callUUID update:(CXCallUpdate *)callUpdate;

@end

NS_ASSUME_NONNULL_END
