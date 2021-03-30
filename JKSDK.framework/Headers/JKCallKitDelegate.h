//
//  JKCallKitListener.h
//  JuikerDev
//
//  Created by shanezhang on 2020/4/13.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CallKit/CallKit.h>
NS_ASSUME_NONNULL_BEGIN
@protocol JKCallKitDelegate <NSObject>
@optional
- (void)providerDidReset;
- (void)performStartCall:(CXStartCallAction *)action;
- (void)performAnswerCall:(CXAnswerCallAction *)action;
- (void)performEndCall:(CXEndCallAction *)action;
- (void)performSetMutedCall:(CXSetMutedCallAction *)action;
- (void)performSetHeldCall:(CXSetHeldCallAction *)action;
- (void)performPlayDTMFCall:(CXPlayDTMFCallAction *)action;
- (void)performSetGroupCall:(CXSetGroupCallAction *)action;
- (void)providerTimedOutPerforming:(CXAction *)action;

- (void)providerDidActivateAudioSession:(AVAudioSession *)audioSession;
- (void)providerDidDeactivateAudioSession:(AVAudioSession *)audioSession;

- (void)reportOutgoingCallError:(NSError *)error;
- (void)reportIncomingCallError:(NSError *)error;

- (BOOL)isCallDestroy;

@end

NS_ASSUME_NONNULL_END
