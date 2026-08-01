// iOS 用の AudioDeviceModule を生成し、pauseRecording()/resumeRecording() を公開するためのラッパー
#import <Foundation/Foundation.h>

#import <IVWebRTC/RTCMacros.h>

RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE(RTCAudioDeviceModule) : NSObject

// 内部で AudioDeviceModuleIOS を生成する
- (instancetype)init;
// 内部で AudioDeviceModuleIOS を生成する。`enabled` が true の場合は
// VoiceProcessing のバイパス有効を初期値として生成する。
- (instancetype)initWithBypassVoiceProcessing:(BOOL)enabled;
// 録音を一時停止する。内部で AudioDeviceModuleIOS::PauseRecording() を呼ぶ
- (NSInteger)pauseRecording;
// 録音を再開する。内部で AudioDeviceModuleIOS::ResumeRecording() を呼ぶ
- (NSInteger)resumeRecording;

@end
