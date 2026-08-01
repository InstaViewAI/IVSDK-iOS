#import <Foundation/Foundation.h>

#import <IVWebRTC/RTCMacros.h>
#import <IVWebRTC/RTCVideoEncoderFactory.h>

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCVideoEncoderFactorySimulcast) : NSObject <RTC_OBJC_TYPE(RTCVideoEncoderFactory)>

- (instancetype)initWithPrimary:(id<RTC_OBJC_TYPE(RTCVideoEncoderFactory)>)primary
                       fallback:(id<RTC_OBJC_TYPE(RTCVideoEncoderFactory)>)fallback;

+ (NSArray<RTC_OBJC_TYPE(RTCVideoCodecInfo) *> *)supportedCodecsForDefaultEncoderFactory;

@end

NS_ASSUME_NONNULL_END
