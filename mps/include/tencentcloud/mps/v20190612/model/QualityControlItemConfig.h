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
                     * 获取Quality control item name. The quality control item values are as follows:
<li>LowEvaluation: No reference score.</li>
<li>Mosaic: Mosaic detection.</li>
<li>CrashScreen: Screen crash detection.</li>
<li>Blur: Blur detection.</li>
<li>BlackWhiteEdge: Black and white edge detection.</li>
<li>SolidColorScreen: Solid color screen detection.</li>
<li>LowLighting: Low lighting.</li>
<li>HighLighting: Overexposure.</li>
<li>NoVoice: Silence detection.</li>
<li>LowVoice: Low voice detection.</li>
<li>HighVoice: High voice detection.</li>
<li>Jitter: Jitter detection.</li>
<li>Noise: Noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: Barcode detection.</li>
<li>AppletCode: Applet code detection.</li>
<li>VideoResolutionChanged: The video resolution changed.</li>
<li>AudioSampleRateChanged: The audio sampling rate changed.</li>
<li>AudioChannelsChanged: The audio channel count changed.</li>
<li>ParameterSetsChanged: The stream parameter set information changed.</li>
<li>DarOrSarInvalid: Abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp fallback.</li>
<li>DtsJitter: Excessive DTS jitter.</li>
<li>PtsJitter: Excessive PTS jitter.</li>
<li>AACDurationDeviation: Unreasonable AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: Audio frame loss.</li>
<li>VideoDroppingFrames: Video frame loss.</li>
<li>AVTimestampInterleave: Unreasonable audio and video interleaving.</li>
<li>PtsLessThanDts: The PTS of media streams is less than DTS.</li>
<li>ReceiveFpsJitter: Excessive jitter of the frame rate received by the network.</li>
<li>ReceiveFpsTooSmall: Too low video frame rate received by the network.</li>
<li>FpsJitter: Excessive stream frame rate jitter calculated through PTS.</li>
<li>StreamOpenFailed: Stream opening failed.</li>
<li>StreamEnd: The stream ended.</li>
<li>StreamParseFailed: Stream parsing failed.</li>
<li>VideoFirstFrameNotIdr: The first frame is not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of MPEGTS lacks AUD NALU.</li>
<li>AudioStreamLack: No audio stream.</li>
<li>VideoStreamLack: No video stream.</li>
<li>LackAudioRecover: Lack of audio stream recovery.</li>
<li>LackVideoRecover: Lack of video stream recovery.</li>
<li>VideoBitrateOutofRange: Out-of-range video stream bitrate (kbps).</li>
<li>AudioBitrateOutofRange: Out-of-range audio stream bitrate (kbps).</li>
<li>VideoDecodeFailed: Video decoding error.</li>
<li>AudioDecodeFailed: Audio decoding error.</li>
<li>AudioOutOfPhase: Opposite phase in Dual-channel audio.</li>
<li>VideoDuplicatedFrame: Duplicate frames in the video stream.</li>
<li>AudioDuplicatedFrame: Duplicate frames in the audio stream.</li>
<li>VideoRotation: Video image rotation.</li>
<li>TsMultiPrograms: The MPEG2-TS stream has multiple programs.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: Invalid m3u8 file.</li>
<li>HLSInvalidMasterM3u8: Invalid main m3u8 file.</li>
<li>HLSInvalidMediaM3u8: Invalid media m3u8 file.</li>
<li>HLSMasterM3u8Recommended: The main m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8Recommended: The media m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY exists in the media m3u8 file.</li>
<li>HLSMediaSegmentsStreamNumChange: The number of streams in the segment has changed.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * @return Type Quality control item name. The quality control item values are as follows:
<li>LowEvaluation: No reference score.</li>
<li>Mosaic: Mosaic detection.</li>
<li>CrashScreen: Screen crash detection.</li>
<li>Blur: Blur detection.</li>
<li>BlackWhiteEdge: Black and white edge detection.</li>
<li>SolidColorScreen: Solid color screen detection.</li>
<li>LowLighting: Low lighting.</li>
<li>HighLighting: Overexposure.</li>
<li>NoVoice: Silence detection.</li>
<li>LowVoice: Low voice detection.</li>
<li>HighVoice: High voice detection.</li>
<li>Jitter: Jitter detection.</li>
<li>Noise: Noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: Barcode detection.</li>
<li>AppletCode: Applet code detection.</li>
<li>VideoResolutionChanged: The video resolution changed.</li>
<li>AudioSampleRateChanged: The audio sampling rate changed.</li>
<li>AudioChannelsChanged: The audio channel count changed.</li>
<li>ParameterSetsChanged: The stream parameter set information changed.</li>
<li>DarOrSarInvalid: Abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp fallback.</li>
<li>DtsJitter: Excessive DTS jitter.</li>
<li>PtsJitter: Excessive PTS jitter.</li>
<li>AACDurationDeviation: Unreasonable AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: Audio frame loss.</li>
<li>VideoDroppingFrames: Video frame loss.</li>
<li>AVTimestampInterleave: Unreasonable audio and video interleaving.</li>
<li>PtsLessThanDts: The PTS of media streams is less than DTS.</li>
<li>ReceiveFpsJitter: Excessive jitter of the frame rate received by the network.</li>
<li>ReceiveFpsTooSmall: Too low video frame rate received by the network.</li>
<li>FpsJitter: Excessive stream frame rate jitter calculated through PTS.</li>
<li>StreamOpenFailed: Stream opening failed.</li>
<li>StreamEnd: The stream ended.</li>
<li>StreamParseFailed: Stream parsing failed.</li>
<li>VideoFirstFrameNotIdr: The first frame is not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of MPEGTS lacks AUD NALU.</li>
<li>AudioStreamLack: No audio stream.</li>
<li>VideoStreamLack: No video stream.</li>
<li>LackAudioRecover: Lack of audio stream recovery.</li>
<li>LackVideoRecover: Lack of video stream recovery.</li>
<li>VideoBitrateOutofRange: Out-of-range video stream bitrate (kbps).</li>
<li>AudioBitrateOutofRange: Out-of-range audio stream bitrate (kbps).</li>
<li>VideoDecodeFailed: Video decoding error.</li>
<li>AudioDecodeFailed: Audio decoding error.</li>
<li>AudioOutOfPhase: Opposite phase in Dual-channel audio.</li>
<li>VideoDuplicatedFrame: Duplicate frames in the video stream.</li>
<li>AudioDuplicatedFrame: Duplicate frames in the audio stream.</li>
<li>VideoRotation: Video image rotation.</li>
<li>TsMultiPrograms: The MPEG2-TS stream has multiple programs.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: Invalid m3u8 file.</li>
<li>HLSInvalidMasterM3u8: Invalid main m3u8 file.</li>
<li>HLSInvalidMediaM3u8: Invalid media m3u8 file.</li>
<li>HLSMasterM3u8Recommended: The main m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8Recommended: The media m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY exists in the media m3u8 file.</li>
<li>HLSMediaSegmentsStreamNumChange: The number of streams in the segment has changed.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Quality control item name. The quality control item values are as follows:
<li>LowEvaluation: No reference score.</li>
<li>Mosaic: Mosaic detection.</li>
<li>CrashScreen: Screen crash detection.</li>
<li>Blur: Blur detection.</li>
<li>BlackWhiteEdge: Black and white edge detection.</li>
<li>SolidColorScreen: Solid color screen detection.</li>
<li>LowLighting: Low lighting.</li>
<li>HighLighting: Overexposure.</li>
<li>NoVoice: Silence detection.</li>
<li>LowVoice: Low voice detection.</li>
<li>HighVoice: High voice detection.</li>
<li>Jitter: Jitter detection.</li>
<li>Noise: Noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: Barcode detection.</li>
<li>AppletCode: Applet code detection.</li>
<li>VideoResolutionChanged: The video resolution changed.</li>
<li>AudioSampleRateChanged: The audio sampling rate changed.</li>
<li>AudioChannelsChanged: The audio channel count changed.</li>
<li>ParameterSetsChanged: The stream parameter set information changed.</li>
<li>DarOrSarInvalid: Abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp fallback.</li>
<li>DtsJitter: Excessive DTS jitter.</li>
<li>PtsJitter: Excessive PTS jitter.</li>
<li>AACDurationDeviation: Unreasonable AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: Audio frame loss.</li>
<li>VideoDroppingFrames: Video frame loss.</li>
<li>AVTimestampInterleave: Unreasonable audio and video interleaving.</li>
<li>PtsLessThanDts: The PTS of media streams is less than DTS.</li>
<li>ReceiveFpsJitter: Excessive jitter of the frame rate received by the network.</li>
<li>ReceiveFpsTooSmall: Too low video frame rate received by the network.</li>
<li>FpsJitter: Excessive stream frame rate jitter calculated through PTS.</li>
<li>StreamOpenFailed: Stream opening failed.</li>
<li>StreamEnd: The stream ended.</li>
<li>StreamParseFailed: Stream parsing failed.</li>
<li>VideoFirstFrameNotIdr: The first frame is not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of MPEGTS lacks AUD NALU.</li>
<li>AudioStreamLack: No audio stream.</li>
<li>VideoStreamLack: No video stream.</li>
<li>LackAudioRecover: Lack of audio stream recovery.</li>
<li>LackVideoRecover: Lack of video stream recovery.</li>
<li>VideoBitrateOutofRange: Out-of-range video stream bitrate (kbps).</li>
<li>AudioBitrateOutofRange: Out-of-range audio stream bitrate (kbps).</li>
<li>VideoDecodeFailed: Video decoding error.</li>
<li>AudioDecodeFailed: Audio decoding error.</li>
<li>AudioOutOfPhase: Opposite phase in Dual-channel audio.</li>
<li>VideoDuplicatedFrame: Duplicate frames in the video stream.</li>
<li>AudioDuplicatedFrame: Duplicate frames in the audio stream.</li>
<li>VideoRotation: Video image rotation.</li>
<li>TsMultiPrograms: The MPEG2-TS stream has multiple programs.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: Invalid m3u8 file.</li>
<li>HLSInvalidMasterM3u8: Invalid main m3u8 file.</li>
<li>HLSInvalidMediaM3u8: Invalid media m3u8 file.</li>
<li>HLSMasterM3u8Recommended: The main m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8Recommended: The media m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY exists in the media m3u8 file.</li>
<li>HLSMediaSegmentsStreamNumChange: The number of streams in the segment has changed.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * @param _type Quality control item name. The quality control item values are as follows:
<li>LowEvaluation: No reference score.</li>
<li>Mosaic: Mosaic detection.</li>
<li>CrashScreen: Screen crash detection.</li>
<li>Blur: Blur detection.</li>
<li>BlackWhiteEdge: Black and white edge detection.</li>
<li>SolidColorScreen: Solid color screen detection.</li>
<li>LowLighting: Low lighting.</li>
<li>HighLighting: Overexposure.</li>
<li>NoVoice: Silence detection.</li>
<li>LowVoice: Low voice detection.</li>
<li>HighVoice: High voice detection.</li>
<li>Jitter: Jitter detection.</li>
<li>Noise: Noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: Barcode detection.</li>
<li>AppletCode: Applet code detection.</li>
<li>VideoResolutionChanged: The video resolution changed.</li>
<li>AudioSampleRateChanged: The audio sampling rate changed.</li>
<li>AudioChannelsChanged: The audio channel count changed.</li>
<li>ParameterSetsChanged: The stream parameter set information changed.</li>
<li>DarOrSarInvalid: Abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp fallback.</li>
<li>DtsJitter: Excessive DTS jitter.</li>
<li>PtsJitter: Excessive PTS jitter.</li>
<li>AACDurationDeviation: Unreasonable AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: Audio frame loss.</li>
<li>VideoDroppingFrames: Video frame loss.</li>
<li>AVTimestampInterleave: Unreasonable audio and video interleaving.</li>
<li>PtsLessThanDts: The PTS of media streams is less than DTS.</li>
<li>ReceiveFpsJitter: Excessive jitter of the frame rate received by the network.</li>
<li>ReceiveFpsTooSmall: Too low video frame rate received by the network.</li>
<li>FpsJitter: Excessive stream frame rate jitter calculated through PTS.</li>
<li>StreamOpenFailed: Stream opening failed.</li>
<li>StreamEnd: The stream ended.</li>
<li>StreamParseFailed: Stream parsing failed.</li>
<li>VideoFirstFrameNotIdr: The first frame is not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of MPEGTS lacks AUD NALU.</li>
<li>AudioStreamLack: No audio stream.</li>
<li>VideoStreamLack: No video stream.</li>
<li>LackAudioRecover: Lack of audio stream recovery.</li>
<li>LackVideoRecover: Lack of video stream recovery.</li>
<li>VideoBitrateOutofRange: Out-of-range video stream bitrate (kbps).</li>
<li>AudioBitrateOutofRange: Out-of-range audio stream bitrate (kbps).</li>
<li>VideoDecodeFailed: Video decoding error.</li>
<li>AudioDecodeFailed: Audio decoding error.</li>
<li>AudioOutOfPhase: Opposite phase in Dual-channel audio.</li>
<li>VideoDuplicatedFrame: Duplicate frames in the video stream.</li>
<li>AudioDuplicatedFrame: Duplicate frames in the audio stream.</li>
<li>VideoRotation: Video image rotation.</li>
<li>TsMultiPrograms: The MPEG2-TS stream has multiple programs.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: Invalid m3u8 file.</li>
<li>HLSInvalidMasterM3u8: Invalid main m3u8 file.</li>
<li>HLSInvalidMediaM3u8: Invalid media m3u8 file.</li>
<li>HLSMasterM3u8Recommended: The main m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8Recommended: The media m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY exists in the media m3u8 file.</li>
<li>HLSMediaSegmentsStreamNumChange: The number of streams in the segment has changed.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jitter between segments without EXT-X-DISCONTINUITY.</li>
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
                     * Quality control item name. The quality control item values are as follows:
<li>LowEvaluation: No reference score.</li>
<li>Mosaic: Mosaic detection.</li>
<li>CrashScreen: Screen crash detection.</li>
<li>Blur: Blur detection.</li>
<li>BlackWhiteEdge: Black and white edge detection.</li>
<li>SolidColorScreen: Solid color screen detection.</li>
<li>LowLighting: Low lighting.</li>
<li>HighLighting: Overexposure.</li>
<li>NoVoice: Silence detection.</li>
<li>LowVoice: Low voice detection.</li>
<li>HighVoice: High voice detection.</li>
<li>Jitter: Jitter detection.</li>
<li>Noise: Noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: Barcode detection.</li>
<li>AppletCode: Applet code detection.</li>
<li>VideoResolutionChanged: The video resolution changed.</li>
<li>AudioSampleRateChanged: The audio sampling rate changed.</li>
<li>AudioChannelsChanged: The audio channel count changed.</li>
<li>ParameterSetsChanged: The stream parameter set information changed.</li>
<li>DarOrSarInvalid: Abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp fallback.</li>
<li>DtsJitter: Excessive DTS jitter.</li>
<li>PtsJitter: Excessive PTS jitter.</li>
<li>AACDurationDeviation: Unreasonable AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: Audio frame loss.</li>
<li>VideoDroppingFrames: Video frame loss.</li>
<li>AVTimestampInterleave: Unreasonable audio and video interleaving.</li>
<li>PtsLessThanDts: The PTS of media streams is less than DTS.</li>
<li>ReceiveFpsJitter: Excessive jitter of the frame rate received by the network.</li>
<li>ReceiveFpsTooSmall: Too low video frame rate received by the network.</li>
<li>FpsJitter: Excessive stream frame rate jitter calculated through PTS.</li>
<li>StreamOpenFailed: Stream opening failed.</li>
<li>StreamEnd: The stream ended.</li>
<li>StreamParseFailed: Stream parsing failed.</li>
<li>VideoFirstFrameNotIdr: The first frame is not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of MPEGTS lacks AUD NALU.</li>
<li>AudioStreamLack: No audio stream.</li>
<li>VideoStreamLack: No video stream.</li>
<li>LackAudioRecover: Lack of audio stream recovery.</li>
<li>LackVideoRecover: Lack of video stream recovery.</li>
<li>VideoBitrateOutofRange: Out-of-range video stream bitrate (kbps).</li>
<li>AudioBitrateOutofRange: Out-of-range audio stream bitrate (kbps).</li>
<li>VideoDecodeFailed: Video decoding error.</li>
<li>AudioDecodeFailed: Audio decoding error.</li>
<li>AudioOutOfPhase: Opposite phase in Dual-channel audio.</li>
<li>VideoDuplicatedFrame: Duplicate frames in the video stream.</li>
<li>AudioDuplicatedFrame: Duplicate frames in the audio stream.</li>
<li>VideoRotation: Video image rotation.</li>
<li>TsMultiPrograms: The MPEG2-TS stream has multiple programs.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: Invalid m3u8 file.</li>
<li>HLSInvalidMasterM3u8: Invalid main m3u8 file.</li>
<li>HLSInvalidMediaM3u8: Invalid media m3u8 file.</li>
<li>HLSMasterM3u8Recommended: The main m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8Recommended: The media m3u8 file lacks parameters recommended by the standard.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY exists in the media m3u8 file.</li>
<li>HLSMediaSegmentsStreamNumChange: The number of streams in the segment has changed.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jitter between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jitter between segments without EXT-X-DISCONTINUITY.</li>
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
