#import <Foundation/Foundation.h>

#import <IVWebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@protocol RTC_OBJC_TYPE
(RTCAudioTrackSink)<NSObject>
    /**
     * 音声データ受信コールバック
     *
     * @param audioData PCM 形式の音声データ。
     * @param bitsPerSample 1 サンプルあたりのビット数。
     *                      libwebrtc では PCM 形式の音声データは 16 bit
     * 固定のため、常に 16 が渡されます。
     * @param sampleRate サンプルレート (単位: Hz)
     * @param numberOfChannels 音声データのチャンネル数。
     *                         モノラルなら 1、ステレオなら 2 が渡されます。
     * @param numberOfFrames audioData に含まれるフレーム数。
     */
    - (void)onData : (NSData *)audioData bitsPerSample
    : (NSInteger)bitsPerSample sampleRate
    : (NSInteger)sampleRate numberOfChannels
    : (NSInteger)numberOfChannels numberOfFrames : (NSInteger)numberOfFrames;

@optional
/**
 * onData で受け取る音声データのチャンネル数を指定するためのメソッドです。
 * `-1` を指定した場合は音声データ規定のチャンネル数になります。
 *
 * @return チャンネル数（-1の場合は指定なし）
 */
- (NSInteger)preferredNumberOfChannels;

@end

NS_ASSUME_NONNULL_END
