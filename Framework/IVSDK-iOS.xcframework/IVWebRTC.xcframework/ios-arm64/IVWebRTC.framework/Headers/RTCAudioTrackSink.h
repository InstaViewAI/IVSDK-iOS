#import <Foundation/Foundation.h>

#import <IVWebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@protocol RTC_OBJC_TYPE
(RTCAudioTrackSink)<NSObject>
    /**
     * Audio data reception callback
     *
     * @param audioData PCM Audio data in a specific format.
     * @param bitsPerSample 1 The number of bits per sample.
     *                      libwebrtc So, the audio data is in PCM format, 16-bit.
     * Since it's a fixed value, 16 will always be passed.
     * @param sampleRate Sample rate (unit: Hz)
     * @param numberOfChannels The number of channels in the audio data.
     *                         The number passed will be 1 for mono and 2 for stereo.
     * @param numberOfFrames audioData The number of frames included.
     */
    - (void)onData : (NSData *)audioData bitsPerSample
    : (NSInteger)bitsPerSample sampleRate
    : (NSInteger)sampleRate numberOfChannels
    : (NSInteger)numberOfChannels numberOfFrames : (NSInteger)numberOfFrames;

@optional
/**
 * onData This is a method for specifying the number of channels in the audio data to be received.
 * `-1` If this option is specified, the number of channels will be the default number of channels for the audio data.
 *
 * @return Number of channels (-1 means no specification)
 */
- (NSInteger)preferredNumberOfChannels;

@end

NS_ASSUME_NONNULL_END
