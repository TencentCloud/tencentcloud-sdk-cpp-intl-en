/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Quality inspection item configurations.
                */
                class QualityControlItemConfig : public AbstractModel
                {
                public:
                    QualityControlItemConfig();
                    ~QualityControlItemConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quality inspection item name. valid values:.
<li>LowEvaluation: specifies the no-reference MOS score of the video.</li>.
<li>AudioEvaluation: specifies the no-reference MOS score of the audio.</li>.
<Li>Mosaic: mosaic detection.</li>.
<Li>CrashScreen: specifies screen glitch detection.</li>.
<Li>Blur: specifies blur detection.</li>.
<Li>Jitter: jitter detection.</li>.
<Li>Noise: noise detection.</li>.
<Li>QRCode: qr code detection.</li>.
<Li>BarCode: specifies barcode detection.</li>.
<Li>AppletCode: specifies mini program code detection.</li>.
<Li>BlackWhiteEdge: specifies black and white edge detection.</li>.
<Li>SolidColorScreen: specifies solid color screen detection.</li>.
<Li>LowLighting: specifies low light.</li>.
<Li>HighLighting: overexposure.</li>.
<Li>NoVoice: specifies silence detection.</li>.
<Li>LowVoice: specifies bass detection.</li>.
<Li>HighVoice: explosion noise detection.</li>.
<Li>AudioNoise: specifies audio noise detection.</li>.
<Li>VideoResolutionChanged: specifies the video resolution change.</li>.
<Li>AudioSampleRateChanged: specifies the audio sample rate change.</li>.
<Li>AudioChannelsChanged: indicates the audio channel quantity change.</li>.
<Li>ParameterSetsChanged: indicates the stream parameter set information has changed.</li>.
<Li>DarOrSarInvalid: indicates an abnormal video aspect ratio.</li>.
<li>TimestampFallback: specifies DTS timestamp rollback.</li>.
<li>DtsJitter: specifies excessive DTS jitter.</li>.
<li>PtsJitter: indicates excessive PTS jitter.</li>.
<Li>AACDurationDeviation: specifies an improper aac frame timestamp interval.</li>.
<Li>AudioDroppingFrames: indicates audio frame dropping.</li>.
<Li>VideoDroppingFrames: specifies video frame dropping.</li>.
<Li>AVTimestampInterleave: improper audio-video interleaving.</li>.
<Li>PtsLessThanDts: specifies that the pts of the media stream is less than the dts.</li>.
<Li>ReceiveFpsJitter: specifies excessive jitter in the network received frame rate.</li>.
<Li>ReceiveFpsTooSmall: indicates the network received video frame rate is too low.</li>.
<li>FpsJitter: specifies excessive jitter in the stream frame rate calculated via PTS.</li>.
<Li>StreamOpenFailed: indicates the stream open failure.</li>.
<Li>StreamEnd: specifies the stream end.</li>.
<Li>StreamParseFailed: specifies the stream parsing failure.</li>.
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>.
<Li>StreamNALUError: indicates an nalu start code error.</li>.
<li>TsStreamNoAud: specifies whether the mpegts H26x stream misses AUD NALU.</li>.
<Li>AudioStreamLack: no audio stream.</li>.
<Li>VideoStreamLack: no video stream.</li>.
<Li>LackAudioRecover: specifies missing audio stream recovery.</li>.
<Li>LackVideoRecover: missing video stream recovery.</li>.
<Li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>.
<Li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>.
<Li>VideoDecodeFailed: indicates a video decoding error.</li>.
<Li>AudioDecodeFailed: audio decoding error.</li>.
<Li>AudioOutOfPhase: specifies opposite phase in dual-channel audio.</li>.
<Li>VideoDuplicatedFrame: indicates duplicate frames in video streams.</li>.
<Li>AudioDuplicatedFrame: indicates duplicate frames in audio streams.</li>.
<Li>VideoRotation: specifies video rotation.</li>.
<li>TsMultiPrograms: specifies multiple programs in MPEG2-TS streams.</li>.
<li>Mp4InvalidCodecFourcc: specifies the codec fourcc in Mp4 does not meet Apple HLS requirements.</li>.
<Li>HLSBadM3u8Format: invalid m3u8 file.</li>.
<Li>HLSInvalidMasterM3u8: invalid main m3u8 file.</li>.
<Li>HLSInvalidMediaM3u8: invalid media m3u8 file.</li>.
<Li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main m3u8.</li>.
<Li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media m3u8.</li>.
<li>HLSMediaM3u8DiscontinuityExist: indicates the existence of EXT-X-DISCONTINUITY in media m3u8.</li>.
<Li>HLSMediaSegmentsStreamNumChange: indicates the number of streams in segments changes.</li>.
<li>HLSMediaSegmentsPTSJitterDeviation: indicates PTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>HLSMediaSegmentsDTSJitterDeviation: indicates DTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * @return Type Quality inspection item name. valid values:.
<li>LowEvaluation: specifies the no-reference MOS score of the video.</li>.
<li>AudioEvaluation: specifies the no-reference MOS score of the audio.</li>.
<Li>Mosaic: mosaic detection.</li>.
<Li>CrashScreen: specifies screen glitch detection.</li>.
<Li>Blur: specifies blur detection.</li>.
<Li>Jitter: jitter detection.</li>.
<Li>Noise: noise detection.</li>.
<Li>QRCode: qr code detection.</li>.
<Li>BarCode: specifies barcode detection.</li>.
<Li>AppletCode: specifies mini program code detection.</li>.
<Li>BlackWhiteEdge: specifies black and white edge detection.</li>.
<Li>SolidColorScreen: specifies solid color screen detection.</li>.
<Li>LowLighting: specifies low light.</li>.
<Li>HighLighting: overexposure.</li>.
<Li>NoVoice: specifies silence detection.</li>.
<Li>LowVoice: specifies bass detection.</li>.
<Li>HighVoice: explosion noise detection.</li>.
<Li>AudioNoise: specifies audio noise detection.</li>.
<Li>VideoResolutionChanged: specifies the video resolution change.</li>.
<Li>AudioSampleRateChanged: specifies the audio sample rate change.</li>.
<Li>AudioChannelsChanged: indicates the audio channel quantity change.</li>.
<Li>ParameterSetsChanged: indicates the stream parameter set information has changed.</li>.
<Li>DarOrSarInvalid: indicates an abnormal video aspect ratio.</li>.
<li>TimestampFallback: specifies DTS timestamp rollback.</li>.
<li>DtsJitter: specifies excessive DTS jitter.</li>.
<li>PtsJitter: indicates excessive PTS jitter.</li>.
<Li>AACDurationDeviation: specifies an improper aac frame timestamp interval.</li>.
<Li>AudioDroppingFrames: indicates audio frame dropping.</li>.
<Li>VideoDroppingFrames: specifies video frame dropping.</li>.
<Li>AVTimestampInterleave: improper audio-video interleaving.</li>.
<Li>PtsLessThanDts: specifies that the pts of the media stream is less than the dts.</li>.
<Li>ReceiveFpsJitter: specifies excessive jitter in the network received frame rate.</li>.
<Li>ReceiveFpsTooSmall: indicates the network received video frame rate is too low.</li>.
<li>FpsJitter: specifies excessive jitter in the stream frame rate calculated via PTS.</li>.
<Li>StreamOpenFailed: indicates the stream open failure.</li>.
<Li>StreamEnd: specifies the stream end.</li>.
<Li>StreamParseFailed: specifies the stream parsing failure.</li>.
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>.
<Li>StreamNALUError: indicates an nalu start code error.</li>.
<li>TsStreamNoAud: specifies whether the mpegts H26x stream misses AUD NALU.</li>.
<Li>AudioStreamLack: no audio stream.</li>.
<Li>VideoStreamLack: no video stream.</li>.
<Li>LackAudioRecover: specifies missing audio stream recovery.</li>.
<Li>LackVideoRecover: missing video stream recovery.</li>.
<Li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>.
<Li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>.
<Li>VideoDecodeFailed: indicates a video decoding error.</li>.
<Li>AudioDecodeFailed: audio decoding error.</li>.
<Li>AudioOutOfPhase: specifies opposite phase in dual-channel audio.</li>.
<Li>VideoDuplicatedFrame: indicates duplicate frames in video streams.</li>.
<Li>AudioDuplicatedFrame: indicates duplicate frames in audio streams.</li>.
<Li>VideoRotation: specifies video rotation.</li>.
<li>TsMultiPrograms: specifies multiple programs in MPEG2-TS streams.</li>.
<li>Mp4InvalidCodecFourcc: specifies the codec fourcc in Mp4 does not meet Apple HLS requirements.</li>.
<Li>HLSBadM3u8Format: invalid m3u8 file.</li>.
<Li>HLSInvalidMasterM3u8: invalid main m3u8 file.</li>.
<Li>HLSInvalidMediaM3u8: invalid media m3u8 file.</li>.
<Li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main m3u8.</li>.
<Li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media m3u8.</li>.
<li>HLSMediaM3u8DiscontinuityExist: indicates the existence of EXT-X-DISCONTINUITY in media m3u8.</li>.
<Li>HLSMediaSegmentsStreamNumChange: indicates the number of streams in segments changes.</li>.
<li>HLSMediaSegmentsPTSJitterDeviation: indicates PTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>HLSMediaSegmentsDTSJitterDeviation: indicates DTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Quality inspection item name. valid values:.
<li>LowEvaluation: specifies the no-reference MOS score of the video.</li>.
<li>AudioEvaluation: specifies the no-reference MOS score of the audio.</li>.
<Li>Mosaic: mosaic detection.</li>.
<Li>CrashScreen: specifies screen glitch detection.</li>.
<Li>Blur: specifies blur detection.</li>.
<Li>Jitter: jitter detection.</li>.
<Li>Noise: noise detection.</li>.
<Li>QRCode: qr code detection.</li>.
<Li>BarCode: specifies barcode detection.</li>.
<Li>AppletCode: specifies mini program code detection.</li>.
<Li>BlackWhiteEdge: specifies black and white edge detection.</li>.
<Li>SolidColorScreen: specifies solid color screen detection.</li>.
<Li>LowLighting: specifies low light.</li>.
<Li>HighLighting: overexposure.</li>.
<Li>NoVoice: specifies silence detection.</li>.
<Li>LowVoice: specifies bass detection.</li>.
<Li>HighVoice: explosion noise detection.</li>.
<Li>AudioNoise: specifies audio noise detection.</li>.
<Li>VideoResolutionChanged: specifies the video resolution change.</li>.
<Li>AudioSampleRateChanged: specifies the audio sample rate change.</li>.
<Li>AudioChannelsChanged: indicates the audio channel quantity change.</li>.
<Li>ParameterSetsChanged: indicates the stream parameter set information has changed.</li>.
<Li>DarOrSarInvalid: indicates an abnormal video aspect ratio.</li>.
<li>TimestampFallback: specifies DTS timestamp rollback.</li>.
<li>DtsJitter: specifies excessive DTS jitter.</li>.
<li>PtsJitter: indicates excessive PTS jitter.</li>.
<Li>AACDurationDeviation: specifies an improper aac frame timestamp interval.</li>.
<Li>AudioDroppingFrames: indicates audio frame dropping.</li>.
<Li>VideoDroppingFrames: specifies video frame dropping.</li>.
<Li>AVTimestampInterleave: improper audio-video interleaving.</li>.
<Li>PtsLessThanDts: specifies that the pts of the media stream is less than the dts.</li>.
<Li>ReceiveFpsJitter: specifies excessive jitter in the network received frame rate.</li>.
<Li>ReceiveFpsTooSmall: indicates the network received video frame rate is too low.</li>.
<li>FpsJitter: specifies excessive jitter in the stream frame rate calculated via PTS.</li>.
<Li>StreamOpenFailed: indicates the stream open failure.</li>.
<Li>StreamEnd: specifies the stream end.</li>.
<Li>StreamParseFailed: specifies the stream parsing failure.</li>.
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>.
<Li>StreamNALUError: indicates an nalu start code error.</li>.
<li>TsStreamNoAud: specifies whether the mpegts H26x stream misses AUD NALU.</li>.
<Li>AudioStreamLack: no audio stream.</li>.
<Li>VideoStreamLack: no video stream.</li>.
<Li>LackAudioRecover: specifies missing audio stream recovery.</li>.
<Li>LackVideoRecover: missing video stream recovery.</li>.
<Li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>.
<Li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>.
<Li>VideoDecodeFailed: indicates a video decoding error.</li>.
<Li>AudioDecodeFailed: audio decoding error.</li>.
<Li>AudioOutOfPhase: specifies opposite phase in dual-channel audio.</li>.
<Li>VideoDuplicatedFrame: indicates duplicate frames in video streams.</li>.
<Li>AudioDuplicatedFrame: indicates duplicate frames in audio streams.</li>.
<Li>VideoRotation: specifies video rotation.</li>.
<li>TsMultiPrograms: specifies multiple programs in MPEG2-TS streams.</li>.
<li>Mp4InvalidCodecFourcc: specifies the codec fourcc in Mp4 does not meet Apple HLS requirements.</li>.
<Li>HLSBadM3u8Format: invalid m3u8 file.</li>.
<Li>HLSInvalidMasterM3u8: invalid main m3u8 file.</li>.
<Li>HLSInvalidMediaM3u8: invalid media m3u8 file.</li>.
<Li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main m3u8.</li>.
<Li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media m3u8.</li>.
<li>HLSMediaM3u8DiscontinuityExist: indicates the existence of EXT-X-DISCONTINUITY in media m3u8.</li>.
<Li>HLSMediaSegmentsStreamNumChange: indicates the number of streams in segments changes.</li>.
<li>HLSMediaSegmentsPTSJitterDeviation: indicates PTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>HLSMediaSegmentsDTSJitterDeviation: indicates DTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * @param _type Quality inspection item name. valid values:.
<li>LowEvaluation: specifies the no-reference MOS score of the video.</li>.
<li>AudioEvaluation: specifies the no-reference MOS score of the audio.</li>.
<Li>Mosaic: mosaic detection.</li>.
<Li>CrashScreen: specifies screen glitch detection.</li>.
<Li>Blur: specifies blur detection.</li>.
<Li>Jitter: jitter detection.</li>.
<Li>Noise: noise detection.</li>.
<Li>QRCode: qr code detection.</li>.
<Li>BarCode: specifies barcode detection.</li>.
<Li>AppletCode: specifies mini program code detection.</li>.
<Li>BlackWhiteEdge: specifies black and white edge detection.</li>.
<Li>SolidColorScreen: specifies solid color screen detection.</li>.
<Li>LowLighting: specifies low light.</li>.
<Li>HighLighting: overexposure.</li>.
<Li>NoVoice: specifies silence detection.</li>.
<Li>LowVoice: specifies bass detection.</li>.
<Li>HighVoice: explosion noise detection.</li>.
<Li>AudioNoise: specifies audio noise detection.</li>.
<Li>VideoResolutionChanged: specifies the video resolution change.</li>.
<Li>AudioSampleRateChanged: specifies the audio sample rate change.</li>.
<Li>AudioChannelsChanged: indicates the audio channel quantity change.</li>.
<Li>ParameterSetsChanged: indicates the stream parameter set information has changed.</li>.
<Li>DarOrSarInvalid: indicates an abnormal video aspect ratio.</li>.
<li>TimestampFallback: specifies DTS timestamp rollback.</li>.
<li>DtsJitter: specifies excessive DTS jitter.</li>.
<li>PtsJitter: indicates excessive PTS jitter.</li>.
<Li>AACDurationDeviation: specifies an improper aac frame timestamp interval.</li>.
<Li>AudioDroppingFrames: indicates audio frame dropping.</li>.
<Li>VideoDroppingFrames: specifies video frame dropping.</li>.
<Li>AVTimestampInterleave: improper audio-video interleaving.</li>.
<Li>PtsLessThanDts: specifies that the pts of the media stream is less than the dts.</li>.
<Li>ReceiveFpsJitter: specifies excessive jitter in the network received frame rate.</li>.
<Li>ReceiveFpsTooSmall: indicates the network received video frame rate is too low.</li>.
<li>FpsJitter: specifies excessive jitter in the stream frame rate calculated via PTS.</li>.
<Li>StreamOpenFailed: indicates the stream open failure.</li>.
<Li>StreamEnd: specifies the stream end.</li>.
<Li>StreamParseFailed: specifies the stream parsing failure.</li>.
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>.
<Li>StreamNALUError: indicates an nalu start code error.</li>.
<li>TsStreamNoAud: specifies whether the mpegts H26x stream misses AUD NALU.</li>.
<Li>AudioStreamLack: no audio stream.</li>.
<Li>VideoStreamLack: no video stream.</li>.
<Li>LackAudioRecover: specifies missing audio stream recovery.</li>.
<Li>LackVideoRecover: missing video stream recovery.</li>.
<Li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>.
<Li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>.
<Li>VideoDecodeFailed: indicates a video decoding error.</li>.
<Li>AudioDecodeFailed: audio decoding error.</li>.
<Li>AudioOutOfPhase: specifies opposite phase in dual-channel audio.</li>.
<Li>VideoDuplicatedFrame: indicates duplicate frames in video streams.</li>.
<Li>AudioDuplicatedFrame: indicates duplicate frames in audio streams.</li>.
<Li>VideoRotation: specifies video rotation.</li>.
<li>TsMultiPrograms: specifies multiple programs in MPEG2-TS streams.</li>.
<li>Mp4InvalidCodecFourcc: specifies the codec fourcc in Mp4 does not meet Apple HLS requirements.</li>.
<Li>HLSBadM3u8Format: invalid m3u8 file.</li>.
<Li>HLSInvalidMasterM3u8: invalid main m3u8 file.</li>.
<Li>HLSInvalidMediaM3u8: invalid media m3u8 file.</li>.
<Li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main m3u8.</li>.
<Li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media m3u8.</li>.
<li>HLSMediaM3u8DiscontinuityExist: indicates the existence of EXT-X-DISCONTINUITY in media m3u8.</li>.
<Li>HLSMediaSegmentsStreamNumChange: indicates the number of streams in segments changes.</li>.
<li>HLSMediaSegmentsPTSJitterDeviation: indicates PTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>HLSMediaSegmentsDTSJitterDeviation: indicates DTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>

Default value: ON.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>

Default value: ON.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>

Default value: ON.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _switch Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>

Default value: ON.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Sampling method, Valid value:
- Time: sampling based on time interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sampling Sampling method, Valid value:
- Time: sampling based on time interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSampling() const;

                    /**
                     * 设置Sampling method, Valid value:
- Time: sampling based on time interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sampling Sampling method, Valid value:
- Time: sampling based on time interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSampling(const std::string& _sampling);

                    /**
                     * 判断参数 Sampling 是否已赋值
                     * @return Sampling 是否已赋值
                     * 
                     */
                    bool SamplingHasBeenSet() const;

                    /**
                     * 获取Sampling interval time, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntervalTime Sampling interval time, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置Sampling interval time, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intervalTime Sampling interval time, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取Duration of abnormality, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration Duration of abnormality, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Duration of abnormality, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration Duration of abnormality, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Threshold of a detection item. Different detection items have different thresholds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Threshold Threshold of a detection item. Different detection items have different thresholds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置Threshold of a detection item. Different detection items have different thresholds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _threshold Threshold of a detection item. Different detection items have different thresholds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThreshold(const std::string& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * Quality inspection item name. valid values:.
<li>LowEvaluation: specifies the no-reference MOS score of the video.</li>.
<li>AudioEvaluation: specifies the no-reference MOS score of the audio.</li>.
<Li>Mosaic: mosaic detection.</li>.
<Li>CrashScreen: specifies screen glitch detection.</li>.
<Li>Blur: specifies blur detection.</li>.
<Li>Jitter: jitter detection.</li>.
<Li>Noise: noise detection.</li>.
<Li>QRCode: qr code detection.</li>.
<Li>BarCode: specifies barcode detection.</li>.
<Li>AppletCode: specifies mini program code detection.</li>.
<Li>BlackWhiteEdge: specifies black and white edge detection.</li>.
<Li>SolidColorScreen: specifies solid color screen detection.</li>.
<Li>LowLighting: specifies low light.</li>.
<Li>HighLighting: overexposure.</li>.
<Li>NoVoice: specifies silence detection.</li>.
<Li>LowVoice: specifies bass detection.</li>.
<Li>HighVoice: explosion noise detection.</li>.
<Li>AudioNoise: specifies audio noise detection.</li>.
<Li>VideoResolutionChanged: specifies the video resolution change.</li>.
<Li>AudioSampleRateChanged: specifies the audio sample rate change.</li>.
<Li>AudioChannelsChanged: indicates the audio channel quantity change.</li>.
<Li>ParameterSetsChanged: indicates the stream parameter set information has changed.</li>.
<Li>DarOrSarInvalid: indicates an abnormal video aspect ratio.</li>.
<li>TimestampFallback: specifies DTS timestamp rollback.</li>.
<li>DtsJitter: specifies excessive DTS jitter.</li>.
<li>PtsJitter: indicates excessive PTS jitter.</li>.
<Li>AACDurationDeviation: specifies an improper aac frame timestamp interval.</li>.
<Li>AudioDroppingFrames: indicates audio frame dropping.</li>.
<Li>VideoDroppingFrames: specifies video frame dropping.</li>.
<Li>AVTimestampInterleave: improper audio-video interleaving.</li>.
<Li>PtsLessThanDts: specifies that the pts of the media stream is less than the dts.</li>.
<Li>ReceiveFpsJitter: specifies excessive jitter in the network received frame rate.</li>.
<Li>ReceiveFpsTooSmall: indicates the network received video frame rate is too low.</li>.
<li>FpsJitter: specifies excessive jitter in the stream frame rate calculated via PTS.</li>.
<Li>StreamOpenFailed: indicates the stream open failure.</li>.
<Li>StreamEnd: specifies the stream end.</li>.
<Li>StreamParseFailed: specifies the stream parsing failure.</li>.
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>.
<Li>StreamNALUError: indicates an nalu start code error.</li>.
<li>TsStreamNoAud: specifies whether the mpegts H26x stream misses AUD NALU.</li>.
<Li>AudioStreamLack: no audio stream.</li>.
<Li>VideoStreamLack: no video stream.</li>.
<Li>LackAudioRecover: specifies missing audio stream recovery.</li>.
<Li>LackVideoRecover: missing video stream recovery.</li>.
<Li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>.
<Li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>.
<Li>VideoDecodeFailed: indicates a video decoding error.</li>.
<Li>AudioDecodeFailed: audio decoding error.</li>.
<Li>AudioOutOfPhase: specifies opposite phase in dual-channel audio.</li>.
<Li>VideoDuplicatedFrame: indicates duplicate frames in video streams.</li>.
<Li>AudioDuplicatedFrame: indicates duplicate frames in audio streams.</li>.
<Li>VideoRotation: specifies video rotation.</li>.
<li>TsMultiPrograms: specifies multiple programs in MPEG2-TS streams.</li>.
<li>Mp4InvalidCodecFourcc: specifies the codec fourcc in Mp4 does not meet Apple HLS requirements.</li>.
<Li>HLSBadM3u8Format: invalid m3u8 file.</li>.
<Li>HLSInvalidMasterM3u8: invalid main m3u8 file.</li>.
<Li>HLSInvalidMediaM3u8: invalid media m3u8 file.</li>.
<Li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main m3u8.</li>.
<Li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media m3u8.</li>.
<li>HLSMediaM3u8DiscontinuityExist: indicates the existence of EXT-X-DISCONTINUITY in media m3u8.</li>.
<Li>HLSMediaSegmentsStreamNumChange: indicates the number of streams in segments changes.</li>.
<li>HLSMediaSegmentsPTSJitterDeviation: indicates PTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>HLSMediaSegmentsDTSJitterDeviation: indicates DTS jumps between segments without EXT-X-DISCONTINUITY.</li>.
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>

Default value: ON.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Sampling method, Valid value:
- Time: sampling based on time interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * Sampling interval time, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * Duration of abnormality, in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Threshold of a detection item. Different detection items have different thresholds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
