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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Configuration of control parameters for audio and video quality detection.
                */
                class QualityInspectConfig : public AbstractModel
                {
                public:
                    QualityInspectConfig();
                    ~QualityInspectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detection item name.</p><p>Enumeration values:</p><ul><li>LowEvaluation: No-reference video score (MOS)</li><li>AudioEvaluation: No-reference audio score (MOS)</li><li>Mosaic: Mosaic detection</li><li>CrashScreen: Screen glitch detection</li><li>Blur: Blur detection</li><li>Jitter: Jitter detection</li><li>Noise: Noise detection</li><li>QRCode: QR code detection</li><li>BarCode: BarCode detection</li><li>AppletCode: Mini program code detection</li><li>BlackWhiteEdge: Black and white edge detection</li><li>SolidColorScreen: Solid color screen detection</li><li>LowLighting: Low illumination</li><li>HighLighting: Overexposure</li><li>NoVoice: Silence detection</li><li>LowVoice: Bass detection</li><li>HighVoice: Explosion sound detection</li><li>AudioNoise: Audio Noise detection</li><li>VideoResolutionChanged: Video resolution change</li><li>AudioSampleRateChanged: Audio sampling rate change</li><li>AudioChannelsChanged: Audio channels changed</li><li>ParameterSetsChanged: Stream parameter set information changed</li><li>DarOrSarInvalid: Abnormal video aspect ratio</li><li>TimestampFallback: DTS timestamp fallback</li><li>DtsJitter: Excessive DTS Jitter</li><li>PtsJitter: Excessive PTS Jitter</li><li>AACDurationDeviation: Unreasonable AAC frame timestamp interval</li><li>AudioDroppingFrames: Audio frame loss</li><li>VideoDroppingFrames: Video frame loss</li><li>AVTimestampInterleave: Improper audio-video interleaving</li><li>PtsLessThanDts: media stream PTS less than DTS</li><li>ReceiveFpsJitter: Excessive network received frame rate Jitter</li><li>ReceiveFpsTooSmall: Network received video frame rate too small</li><li>FpsJitter: Excessive stream frame rate Jitter calculated by PTS</li><li>StreamOpenFailed: Stream open failure</li><li>StreamEnd: Stream end</li><li>StreamParseFailed: Stream parsing failure</li><li>VideoFirstFrameNotIdr: First frame not an IDR frame</li><li>StreamNALUError: NALU start code error</li><li>TsStreamNoAud: H26x stream in MPEG-TS missing AUD NALU</li><li>AudioStreamLack: No audio stream</li><li>VideoStreamLack: No video stream</li><li>LackAudioRecover: Missing audio stream recovery</li><li>LackVideoRecover: Missing video stream recovery</li><li>VideoBitrateOutofRange: Video stream bitrate (kbps) out of range</li><li>AudioBitrateOutofRange: Audio stream bitrate (kbps) out of range</li><li>VideoDecodeFailed: Video decoding error</li><li>AudioDecodeFailed: Audio decoding error</li><li>AudioOutOfPhase: Opposite phase in dual-channel audio</li><li>VideoDuplicatedFrame: Duplicate frames in video streams</li><li>AudioDuplicatedFrame: Duplicate frames in audio streams</li><li>VideoRotation: Video rotation</li><li>TsMultiPrograms: MPEG2-TS stream has multiple programs</li><li>Mp4InvalidCodecFourcc: codec fourcc in Mp4 does not meet Apple HLS requirements</li><li>HLSBadM3u8Format: Invalid m3u8 file</li><li>HLSInvalidMasterM3u8: Invalid main m3u8 file</li><li>HLSInvalidMediaM3u8: Invalid media m3u8 file</li><li>HLSMasterM3u8Recommended: main m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8Recommended: media m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8DiscontinuityExist: media m3u8 has EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes</li><li>HLSMediaSegmentsPTSJitterDeviation: PTS jump between slices without EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation: DTS jump between slices without EXT-x-DISCONTINUITY</li><li>TimecodeTrackExist: Mp4 has tmcd track</li><li>BodyPoseCheck: Abnormal human body pose</li><li>BodyDetailCheck: Abnormal human body detail</li><li>PhysicRulesCheck: Physics rule violation</li><li>ObjectConsistencyCheck:</li></ul>Object consistency anomaly</li><li>FormatCheck: Format exception</li><li>AudioReverb: Reverb level</li><li>AudioDiscontinuity: Audio discontinuity</li><li>AudioSpeechQuality: Speech clarity</li><li>AudioHighLoudness: Loudness distortion</li><li>AudioLoudnessJitter: Severe volume change</li><li>BackgroundMusic: Background music exists</li><li>NoBackgroundMusic: Background music does not exist</li><li>VideoAesthetic: Video aesthetic score</li><li>AudioVideoAsync: Audio and video out of sync</li><li>AudioSubtitleAsync: Audio and subtitle out of sync</li></ul>
                     * @return Type <p>Detection item name.</p><p>Enumeration values:</p><ul><li>LowEvaluation: No-reference video score (MOS)</li><li>AudioEvaluation: No-reference audio score (MOS)</li><li>Mosaic: Mosaic detection</li><li>CrashScreen: Screen glitch detection</li><li>Blur: Blur detection</li><li>Jitter: Jitter detection</li><li>Noise: Noise detection</li><li>QRCode: QR code detection</li><li>BarCode: BarCode detection</li><li>AppletCode: Mini program code detection</li><li>BlackWhiteEdge: Black and white edge detection</li><li>SolidColorScreen: Solid color screen detection</li><li>LowLighting: Low illumination</li><li>HighLighting: Overexposure</li><li>NoVoice: Silence detection</li><li>LowVoice: Bass detection</li><li>HighVoice: Explosion sound detection</li><li>AudioNoise: Audio Noise detection</li><li>VideoResolutionChanged: Video resolution change</li><li>AudioSampleRateChanged: Audio sampling rate change</li><li>AudioChannelsChanged: Audio channels changed</li><li>ParameterSetsChanged: Stream parameter set information changed</li><li>DarOrSarInvalid: Abnormal video aspect ratio</li><li>TimestampFallback: DTS timestamp fallback</li><li>DtsJitter: Excessive DTS Jitter</li><li>PtsJitter: Excessive PTS Jitter</li><li>AACDurationDeviation: Unreasonable AAC frame timestamp interval</li><li>AudioDroppingFrames: Audio frame loss</li><li>VideoDroppingFrames: Video frame loss</li><li>AVTimestampInterleave: Improper audio-video interleaving</li><li>PtsLessThanDts: media stream PTS less than DTS</li><li>ReceiveFpsJitter: Excessive network received frame rate Jitter</li><li>ReceiveFpsTooSmall: Network received video frame rate too small</li><li>FpsJitter: Excessive stream frame rate Jitter calculated by PTS</li><li>StreamOpenFailed: Stream open failure</li><li>StreamEnd: Stream end</li><li>StreamParseFailed: Stream parsing failure</li><li>VideoFirstFrameNotIdr: First frame not an IDR frame</li><li>StreamNALUError: NALU start code error</li><li>TsStreamNoAud: H26x stream in MPEG-TS missing AUD NALU</li><li>AudioStreamLack: No audio stream</li><li>VideoStreamLack: No video stream</li><li>LackAudioRecover: Missing audio stream recovery</li><li>LackVideoRecover: Missing video stream recovery</li><li>VideoBitrateOutofRange: Video stream bitrate (kbps) out of range</li><li>AudioBitrateOutofRange: Audio stream bitrate (kbps) out of range</li><li>VideoDecodeFailed: Video decoding error</li><li>AudioDecodeFailed: Audio decoding error</li><li>AudioOutOfPhase: Opposite phase in dual-channel audio</li><li>VideoDuplicatedFrame: Duplicate frames in video streams</li><li>AudioDuplicatedFrame: Duplicate frames in audio streams</li><li>VideoRotation: Video rotation</li><li>TsMultiPrograms: MPEG2-TS stream has multiple programs</li><li>Mp4InvalidCodecFourcc: codec fourcc in Mp4 does not meet Apple HLS requirements</li><li>HLSBadM3u8Format: Invalid m3u8 file</li><li>HLSInvalidMasterM3u8: Invalid main m3u8 file</li><li>HLSInvalidMediaM3u8: Invalid media m3u8 file</li><li>HLSMasterM3u8Recommended: main m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8Recommended: media m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8DiscontinuityExist: media m3u8 has EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes</li><li>HLSMediaSegmentsPTSJitterDeviation: PTS jump between slices without EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation: DTS jump between slices without EXT-x-DISCONTINUITY</li><li>TimecodeTrackExist: Mp4 has tmcd track</li><li>BodyPoseCheck: Abnormal human body pose</li><li>BodyDetailCheck: Abnormal human body detail</li><li>PhysicRulesCheck: Physics rule violation</li><li>ObjectConsistencyCheck:</li></ul>Object consistency anomaly</li><li>FormatCheck: Format exception</li><li>AudioReverb: Reverb level</li><li>AudioDiscontinuity: Audio discontinuity</li><li>AudioSpeechQuality: Speech clarity</li><li>AudioHighLoudness: Loudness distortion</li><li>AudioLoudnessJitter: Severe volume change</li><li>BackgroundMusic: Background music exists</li><li>NoBackgroundMusic: Background music does not exist</li><li>VideoAesthetic: Video aesthetic score</li><li>AudioVideoAsync: Audio and video out of sync</li><li>AudioSubtitleAsync: Audio and subtitle out of sync</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Detection item name.</p><p>Enumeration values:</p><ul><li>LowEvaluation: No-reference video score (MOS)</li><li>AudioEvaluation: No-reference audio score (MOS)</li><li>Mosaic: Mosaic detection</li><li>CrashScreen: Screen glitch detection</li><li>Blur: Blur detection</li><li>Jitter: Jitter detection</li><li>Noise: Noise detection</li><li>QRCode: QR code detection</li><li>BarCode: BarCode detection</li><li>AppletCode: Mini program code detection</li><li>BlackWhiteEdge: Black and white edge detection</li><li>SolidColorScreen: Solid color screen detection</li><li>LowLighting: Low illumination</li><li>HighLighting: Overexposure</li><li>NoVoice: Silence detection</li><li>LowVoice: Bass detection</li><li>HighVoice: Explosion sound detection</li><li>AudioNoise: Audio Noise detection</li><li>VideoResolutionChanged: Video resolution change</li><li>AudioSampleRateChanged: Audio sampling rate change</li><li>AudioChannelsChanged: Audio channels changed</li><li>ParameterSetsChanged: Stream parameter set information changed</li><li>DarOrSarInvalid: Abnormal video aspect ratio</li><li>TimestampFallback: DTS timestamp fallback</li><li>DtsJitter: Excessive DTS Jitter</li><li>PtsJitter: Excessive PTS Jitter</li><li>AACDurationDeviation: Unreasonable AAC frame timestamp interval</li><li>AudioDroppingFrames: Audio frame loss</li><li>VideoDroppingFrames: Video frame loss</li><li>AVTimestampInterleave: Improper audio-video interleaving</li><li>PtsLessThanDts: media stream PTS less than DTS</li><li>ReceiveFpsJitter: Excessive network received frame rate Jitter</li><li>ReceiveFpsTooSmall: Network received video frame rate too small</li><li>FpsJitter: Excessive stream frame rate Jitter calculated by PTS</li><li>StreamOpenFailed: Stream open failure</li><li>StreamEnd: Stream end</li><li>StreamParseFailed: Stream parsing failure</li><li>VideoFirstFrameNotIdr: First frame not an IDR frame</li><li>StreamNALUError: NALU start code error</li><li>TsStreamNoAud: H26x stream in MPEG-TS missing AUD NALU</li><li>AudioStreamLack: No audio stream</li><li>VideoStreamLack: No video stream</li><li>LackAudioRecover: Missing audio stream recovery</li><li>LackVideoRecover: Missing video stream recovery</li><li>VideoBitrateOutofRange: Video stream bitrate (kbps) out of range</li><li>AudioBitrateOutofRange: Audio stream bitrate (kbps) out of range</li><li>VideoDecodeFailed: Video decoding error</li><li>AudioDecodeFailed: Audio decoding error</li><li>AudioOutOfPhase: Opposite phase in dual-channel audio</li><li>VideoDuplicatedFrame: Duplicate frames in video streams</li><li>AudioDuplicatedFrame: Duplicate frames in audio streams</li><li>VideoRotation: Video rotation</li><li>TsMultiPrograms: MPEG2-TS stream has multiple programs</li><li>Mp4InvalidCodecFourcc: codec fourcc in Mp4 does not meet Apple HLS requirements</li><li>HLSBadM3u8Format: Invalid m3u8 file</li><li>HLSInvalidMasterM3u8: Invalid main m3u8 file</li><li>HLSInvalidMediaM3u8: Invalid media m3u8 file</li><li>HLSMasterM3u8Recommended: main m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8Recommended: media m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8DiscontinuityExist: media m3u8 has EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes</li><li>HLSMediaSegmentsPTSJitterDeviation: PTS jump between slices without EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation: DTS jump between slices without EXT-x-DISCONTINUITY</li><li>TimecodeTrackExist: Mp4 has tmcd track</li><li>BodyPoseCheck: Abnormal human body pose</li><li>BodyDetailCheck: Abnormal human body detail</li><li>PhysicRulesCheck: Physics rule violation</li><li>ObjectConsistencyCheck:</li></ul>Object consistency anomaly</li><li>FormatCheck: Format exception</li><li>AudioReverb: Reverb level</li><li>AudioDiscontinuity: Audio discontinuity</li><li>AudioSpeechQuality: Speech clarity</li><li>AudioHighLoudness: Loudness distortion</li><li>AudioLoudnessJitter: Severe volume change</li><li>BackgroundMusic: Background music exists</li><li>NoBackgroundMusic: Background music does not exist</li><li>VideoAesthetic: Video aesthetic score</li><li>AudioVideoAsync: Audio and video out of sync</li><li>AudioSubtitleAsync: Audio and subtitle out of sync</li></ul>
                     * @param _type <p>Detection item name.</p><p>Enumeration values:</p><ul><li>LowEvaluation: No-reference video score (MOS)</li><li>AudioEvaluation: No-reference audio score (MOS)</li><li>Mosaic: Mosaic detection</li><li>CrashScreen: Screen glitch detection</li><li>Blur: Blur detection</li><li>Jitter: Jitter detection</li><li>Noise: Noise detection</li><li>QRCode: QR code detection</li><li>BarCode: BarCode detection</li><li>AppletCode: Mini program code detection</li><li>BlackWhiteEdge: Black and white edge detection</li><li>SolidColorScreen: Solid color screen detection</li><li>LowLighting: Low illumination</li><li>HighLighting: Overexposure</li><li>NoVoice: Silence detection</li><li>LowVoice: Bass detection</li><li>HighVoice: Explosion sound detection</li><li>AudioNoise: Audio Noise detection</li><li>VideoResolutionChanged: Video resolution change</li><li>AudioSampleRateChanged: Audio sampling rate change</li><li>AudioChannelsChanged: Audio channels changed</li><li>ParameterSetsChanged: Stream parameter set information changed</li><li>DarOrSarInvalid: Abnormal video aspect ratio</li><li>TimestampFallback: DTS timestamp fallback</li><li>DtsJitter: Excessive DTS Jitter</li><li>PtsJitter: Excessive PTS Jitter</li><li>AACDurationDeviation: Unreasonable AAC frame timestamp interval</li><li>AudioDroppingFrames: Audio frame loss</li><li>VideoDroppingFrames: Video frame loss</li><li>AVTimestampInterleave: Improper audio-video interleaving</li><li>PtsLessThanDts: media stream PTS less than DTS</li><li>ReceiveFpsJitter: Excessive network received frame rate Jitter</li><li>ReceiveFpsTooSmall: Network received video frame rate too small</li><li>FpsJitter: Excessive stream frame rate Jitter calculated by PTS</li><li>StreamOpenFailed: Stream open failure</li><li>StreamEnd: Stream end</li><li>StreamParseFailed: Stream parsing failure</li><li>VideoFirstFrameNotIdr: First frame not an IDR frame</li><li>StreamNALUError: NALU start code error</li><li>TsStreamNoAud: H26x stream in MPEG-TS missing AUD NALU</li><li>AudioStreamLack: No audio stream</li><li>VideoStreamLack: No video stream</li><li>LackAudioRecover: Missing audio stream recovery</li><li>LackVideoRecover: Missing video stream recovery</li><li>VideoBitrateOutofRange: Video stream bitrate (kbps) out of range</li><li>AudioBitrateOutofRange: Audio stream bitrate (kbps) out of range</li><li>VideoDecodeFailed: Video decoding error</li><li>AudioDecodeFailed: Audio decoding error</li><li>AudioOutOfPhase: Opposite phase in dual-channel audio</li><li>VideoDuplicatedFrame: Duplicate frames in video streams</li><li>AudioDuplicatedFrame: Duplicate frames in audio streams</li><li>VideoRotation: Video rotation</li><li>TsMultiPrograms: MPEG2-TS stream has multiple programs</li><li>Mp4InvalidCodecFourcc: codec fourcc in Mp4 does not meet Apple HLS requirements</li><li>HLSBadM3u8Format: Invalid m3u8 file</li><li>HLSInvalidMasterM3u8: Invalid main m3u8 file</li><li>HLSInvalidMediaM3u8: Invalid media m3u8 file</li><li>HLSMasterM3u8Recommended: main m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8Recommended: media m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8DiscontinuityExist: media m3u8 has EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes</li><li>HLSMediaSegmentsPTSJitterDeviation: PTS jump between slices without EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation: DTS jump between slices without EXT-x-DISCONTINUITY</li><li>TimecodeTrackExist: Mp4 has tmcd track</li><li>BodyPoseCheck: Abnormal human body pose</li><li>BodyDetailCheck: Abnormal human body detail</li><li>PhysicRulesCheck: Physics rule violation</li><li>ObjectConsistencyCheck:</li></ul>Object consistency anomaly</li><li>FormatCheck: Format exception</li><li>AudioReverb: Reverb level</li><li>AudioDiscontinuity: Audio discontinuity</li><li>AudioSpeechQuality: Speech clarity</li><li>AudioHighLoudness: Loudness distortion</li><li>AudioLoudnessJitter: Severe volume change</li><li>BackgroundMusic: Background music exists</li><li>NoBackgroundMusic: Background music does not exist</li><li>VideoAesthetic: Video aesthetic score</li><li>AudioVideoAsync: Audio and video out of sync</li><li>AudioSubtitleAsync: Audio and subtitle out of sync</li></ul>
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
                     * 获取<p>Capability configuration switch.</p><p>Enumeration values: </p><ul><li>ON: Enable.</li><li>OFF: Disable.</li></ul><p>Default value: ON</p>
                     * @return Switch <p>Capability configuration switch.</p><p>Enumeration values: </p><ul><li>ON: Enable.</li><li>OFF: Disable.</li></ul><p>Default value: ON</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch.</p><p>Enumeration values: </p><ul><li>ON: Enable.</li><li>OFF: Disable.</li></ul><p>Default value: ON</p>
                     * @param _switch <p>Capability configuration switch.</p><p>Enumeration values: </p><ul><li>ON: Enable.</li><li>OFF: Disable.</li></ul><p>Default value: ON</p>
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
                     * 获取<p>Sampling method</p><p>Enumeration values:</p><ul><li>Time: Sampling based on time interval.</li></ul>
                     * @return Sampling <p>Sampling method</p><p>Enumeration values:</p><ul><li>Time: Sampling based on time interval.</li></ul>
                     * 
                     */
                    std::string GetSampling() const;

                    /**
                     * 设置<p>Sampling method</p><p>Enumeration values:</p><ul><li>Time: Sampling based on time interval.</li></ul>
                     * @param _sampling <p>Sampling method</p><p>Enumeration values:</p><ul><li>Time: Sampling based on time interval.</li></ul>
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
                     * 获取<p>Sampling interval time</p><p>Unit: ms.</p>
                     * @return IntervalTime <p>Sampling interval time</p><p>Unit: ms.</p>
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置<p>Sampling interval time</p><p>Unit: ms.</p>
                     * @param _intervalTime <p>Sampling interval time</p><p>Unit: ms.</p>
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取<p>Duration of abnormality.</p><p>Measurement unit: ms.</p>
                     * @return Duration <p>Duration of abnormality.</p><p>Measurement unit: ms.</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>Duration of abnormality.</p><p>Measurement unit: ms.</p>
                     * @param _duration <p>Duration of abnormality.</p><p>Measurement unit: ms.</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>Threshold corresponding to the detection item. Different detection items have different thresholds.</p>
                     * @return Threshold <p>Threshold corresponding to the detection item. Different detection items have different thresholds.</p>
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置<p>Threshold corresponding to the detection item. Different detection items have different thresholds.</p>
                     * @param _threshold <p>Threshold corresponding to the detection item. Different detection items have different thresholds.</p>
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
                     * <p>Detection item name.</p><p>Enumeration values:</p><ul><li>LowEvaluation: No-reference video score (MOS)</li><li>AudioEvaluation: No-reference audio score (MOS)</li><li>Mosaic: Mosaic detection</li><li>CrashScreen: Screen glitch detection</li><li>Blur: Blur detection</li><li>Jitter: Jitter detection</li><li>Noise: Noise detection</li><li>QRCode: QR code detection</li><li>BarCode: BarCode detection</li><li>AppletCode: Mini program code detection</li><li>BlackWhiteEdge: Black and white edge detection</li><li>SolidColorScreen: Solid color screen detection</li><li>LowLighting: Low illumination</li><li>HighLighting: Overexposure</li><li>NoVoice: Silence detection</li><li>LowVoice: Bass detection</li><li>HighVoice: Explosion sound detection</li><li>AudioNoise: Audio Noise detection</li><li>VideoResolutionChanged: Video resolution change</li><li>AudioSampleRateChanged: Audio sampling rate change</li><li>AudioChannelsChanged: Audio channels changed</li><li>ParameterSetsChanged: Stream parameter set information changed</li><li>DarOrSarInvalid: Abnormal video aspect ratio</li><li>TimestampFallback: DTS timestamp fallback</li><li>DtsJitter: Excessive DTS Jitter</li><li>PtsJitter: Excessive PTS Jitter</li><li>AACDurationDeviation: Unreasonable AAC frame timestamp interval</li><li>AudioDroppingFrames: Audio frame loss</li><li>VideoDroppingFrames: Video frame loss</li><li>AVTimestampInterleave: Improper audio-video interleaving</li><li>PtsLessThanDts: media stream PTS less than DTS</li><li>ReceiveFpsJitter: Excessive network received frame rate Jitter</li><li>ReceiveFpsTooSmall: Network received video frame rate too small</li><li>FpsJitter: Excessive stream frame rate Jitter calculated by PTS</li><li>StreamOpenFailed: Stream open failure</li><li>StreamEnd: Stream end</li><li>StreamParseFailed: Stream parsing failure</li><li>VideoFirstFrameNotIdr: First frame not an IDR frame</li><li>StreamNALUError: NALU start code error</li><li>TsStreamNoAud: H26x stream in MPEG-TS missing AUD NALU</li><li>AudioStreamLack: No audio stream</li><li>VideoStreamLack: No video stream</li><li>LackAudioRecover: Missing audio stream recovery</li><li>LackVideoRecover: Missing video stream recovery</li><li>VideoBitrateOutofRange: Video stream bitrate (kbps) out of range</li><li>AudioBitrateOutofRange: Audio stream bitrate (kbps) out of range</li><li>VideoDecodeFailed: Video decoding error</li><li>AudioDecodeFailed: Audio decoding error</li><li>AudioOutOfPhase: Opposite phase in dual-channel audio</li><li>VideoDuplicatedFrame: Duplicate frames in video streams</li><li>AudioDuplicatedFrame: Duplicate frames in audio streams</li><li>VideoRotation: Video rotation</li><li>TsMultiPrograms: MPEG2-TS stream has multiple programs</li><li>Mp4InvalidCodecFourcc: codec fourcc in Mp4 does not meet Apple HLS requirements</li><li>HLSBadM3u8Format: Invalid m3u8 file</li><li>HLSInvalidMasterM3u8: Invalid main m3u8 file</li><li>HLSInvalidMediaM3u8: Invalid media m3u8 file</li><li>HLSMasterM3u8Recommended: main m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8Recommended: media m3u8 lacks standard Recommended parameters</li><li>HLSMediaM3u8DiscontinuityExist: media m3u8 has EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes</li><li>HLSMediaSegmentsPTSJitterDeviation: PTS jump between slices without EXT-x-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation: DTS jump between slices without EXT-x-DISCONTINUITY</li><li>TimecodeTrackExist: Mp4 has tmcd track</li><li>BodyPoseCheck: Abnormal human body pose</li><li>BodyDetailCheck: Abnormal human body detail</li><li>PhysicRulesCheck: Physics rule violation</li><li>ObjectConsistencyCheck:</li></ul>Object consistency anomaly</li><li>FormatCheck: Format exception</li><li>AudioReverb: Reverb level</li><li>AudioDiscontinuity: Audio discontinuity</li><li>AudioSpeechQuality: Speech clarity</li><li>AudioHighLoudness: Loudness distortion</li><li>AudioLoudnessJitter: Severe volume change</li><li>BackgroundMusic: Background music exists</li><li>NoBackgroundMusic: Background music does not exist</li><li>VideoAesthetic: Video aesthetic score</li><li>AudioVideoAsync: Audio and video out of sync</li><li>AudioSubtitleAsync: Audio and subtitle out of sync</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Capability configuration switch.</p><p>Enumeration values: </p><ul><li>ON: Enable.</li><li>OFF: Disable.</li></ul><p>Default value: ON</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Sampling method</p><p>Enumeration values:</p><ul><li>Time: Sampling based on time interval.</li></ul>
                     */
                    std::string m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * <p>Sampling interval time</p><p>Unit: ms.</p>
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * <p>Duration of abnormality.</p><p>Measurement unit: ms.</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Threshold corresponding to the detection item. Different detection items have different thresholds.</p>
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONFIG_H_
