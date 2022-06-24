//
//  LTCallKitProxy.h
//  LTSDK
//
//  Created by Sheng-Tsang Uou on 2020/5/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CallKit/CallKit.h>
#import <LTSDK/LTCallKitDelegate.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LTCallKitProxyState) {
    LTCallKitProxyStateOutgoing,
    LTCallKitProxyStateIncoming,
    LTCallKitProxyStateUnHold,
    LTCallKitProxyStateHold,
    LTCallKitProxyStateEnd
};

@protocol LTCallKitProxyDelegate <NSObject>
@optional
- (void)LTCallKitProxyCallChanged:(id<LTCallKitDelegate>_Nullable)delegate callState:(LTCallKitProxyState)callState;
@end

@interface LTCallKitProxy : NSObject
@property (strong, nonatomic, nullable) id<LTCallKitProxyDelegate> delegate;
+ (LTCallKitProxy *)sharedInstance;

#pragma mark - config

- (void)configureProviderWithLocalizedName:(NSString *)localizedName ringtoneSound:(NSString *)ringtoneSound iconTemplateImage:(UIImage *)iconTemplateImage;
- (void)configAudioSession:(AVAudioSession *)audioSession;

#pragma mark - callkit operation

- (BOOL)isCallKitActivated;
- (BOOL)containsDelegate:(id<LTCallKitDelegate> _Nullable)call;
- (void)startOutgoingCall:(id<LTCallKitDelegate> _Nullable)call update:(CXCallUpdate *_Nullable)update;
- (void)startIncomingCallWithUpdate:(CXCallUpdate * _Nullable)callUpdate completion:(id<LTCallKitDelegate> _Nullable (^_Nullable)(NSError *_Nullable error, NSUUID *_Nullable callUUID))completion;

- (void)muteCall:(id<LTCallKitDelegate> _Nullable)call muted:(BOOL)muted;
- (void)heldCall:(id<LTCallKitDelegate> _Nullable)call onHold:(BOOL)onHold;
- (void)endCall:(id<LTCallKitDelegate> _Nullable)call;

#pragma mark - callkit report

- (void)reportStartOutgoingCall:(id<LTCallKitDelegate>_Nullable)call;
- (void)reportOutgoingCall:(id<LTCallKitDelegate> _Nullable)call startedConnectingAtDate:(NSDate *_Nullable)dateStartedConnecting;
- (void)reportOutgoingCall:(id<LTCallKitDelegate> _Nullable)call connectedAtDate:(NSDate *_Nullable)dateConnected;
- (void)reportEndCall:(id<LTCallKitDelegate> _Nullable)call reason:(CXCallEndedReason)endedReason;
- (void)reportEndCallWithUUID:(NSUUID *_Nullable)uuid reason:(CXCallEndedReason)endedReason;

- (void)reportCall:(id<LTCallKitDelegate> _Nullable)call displayName:(NSString *_Nullable)displayName;//deprecated
- (void)reportCall:(id<LTCallKitDelegate> _Nullable)call endedAtDate:(NSDate *_Nullable)dateEnded reason:(CXCallEndedReason)endedReason;
- (void)reportCall:(id<LTCallKitDelegate> _Nullable)delegate update:(CXCallUpdate * _Nullable)callUpdate;
- (void)reportCallWithUUID:(NSUUID *_Nullable)callUUID update:(CXCallUpdate * _Nullable)callUpdate;

@end

NS_ASSUME_NONNULL_END
