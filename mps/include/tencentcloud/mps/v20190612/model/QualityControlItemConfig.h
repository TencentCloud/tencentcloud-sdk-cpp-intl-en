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
                     * 获取Quality inspection item name. Valid values:
<li>LowEvaluation: Video no-reference scoring (MOS).</li>
<li>AudioEvaluation: Audio no-reference scoring (MOS).</li>
<li>Mosaic: mosaic detection.</li>
<li>CrashScreen: screen glitch detection.</li>
<li>Blur: blur detection.</li>
<li>Jitter: jitter detection.</li>
<li>Noise: noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: barcode detection.</li>
<li>AppletCode: mini program code detection.</li>
<li>BlackWhiteEdge: black and white edge detection.</li>
<li>SolidColorScreen: solid color screen detection.</li>
<li>LowLighting: low light.</li>
<li>HighLighting: overexposure.</li>
<li>NoVoice: silence detection.</li>
<li>LowVoice: bass detection.</li>
<li>HighVoice: explosion noise detection</li>
<li>AudioNoise: audio noise detection.</li>
<li>VideoResolutionChanged: video resolution change.</li>
<li>AudioSampleRateChanged: audio sampling rate change.</li>
<li>AudioChannelsChanged: audio channels changed.</li>
<li>ParameterSetsChanged: stream parameter set information has changed.</li>
<li>DarOrSarInvalid: abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp rollback.</li>
<li>DtsJitter: DTS jitter too high.</li>
<li>PtsJitter: PTS jitter too high.</li>
<li>AACDurationDeviation: improper AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: audio frame dropping.</li>
<li>VideoDroppingFrames: video frame dropping.</li>
<li>AVTimestampInterleave: improper audio-video interleaving.</li>
<li>PtsLessThanDts: The pts of the media stream is less than the dts.</li>
<li>ReceiveFpsJitter: excessive network received frame rate jitter</li>
<li>ReceiveFpsTooSmall: network receive video frame rate too low.</li>
<li>FpsJitter: excessive stream frame rate jitter calculated by PTS</li>
<li>StreamOpenFailed: stream open failure.</li>
<li>StreamEnd: stream end.</li>
<li>StreamParseFailed: stream parsing failure.</li>
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of mpegts misses AUD NALU.</li>
<li>AudioStreamLack: no audio stream.</li>
<li>VideoStreamLack: no video stream.</li>
<li>LackAudioRecover: missing audio stream recovery.</li>
<li>LackVideoRecover: missing video stream recovery.</li>
<li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>
<li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>
<li>VideoDecodeFailed: video decoding error.</li>
<li>AudioDecodeFailed: audio decoding error.</li>
<li>AudioOutOfPhase: opposite phase in dual-channel audio.</li>
<li>VideoDuplicatedFrame: duplicate frames in video streams.</li>
<li>AudioDuplicatedFrame: duplicate frames in audio streams.</li>
<li>VideoRotation: video rotation.</li>
<li>TsMultiPrograms: multiple programs in MPEG2-TS streams.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: invalid M3U8 file.</li>
<li>HLSInvalidMasterM3u8: invalid main M3U8 file.</li>
<li>HLSInvalidMediaM3u8: invalid media M3U8 file.</li>
<li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.</li>
<li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.</li>
<li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * @return Type Quality inspection item name. Valid values:
<li>LowEvaluation: Video no-reference scoring (MOS).</li>
<li>AudioEvaluation: Audio no-reference scoring (MOS).</li>
<li>Mosaic: mosaic detection.</li>
<li>CrashScreen: screen glitch detection.</li>
<li>Blur: blur detection.</li>
<li>Jitter: jitter detection.</li>
<li>Noise: noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: barcode detection.</li>
<li>AppletCode: mini program code detection.</li>
<li>BlackWhiteEdge: black and white edge detection.</li>
<li>SolidColorScreen: solid color screen detection.</li>
<li>LowLighting: low light.</li>
<li>HighLighting: overexposure.</li>
<li>NoVoice: silence detection.</li>
<li>LowVoice: bass detection.</li>
<li>HighVoice: explosion noise detection</li>
<li>AudioNoise: audio noise detection.</li>
<li>VideoResolutionChanged: video resolution change.</li>
<li>AudioSampleRateChanged: audio sampling rate change.</li>
<li>AudioChannelsChanged: audio channels changed.</li>
<li>ParameterSetsChanged: stream parameter set information has changed.</li>
<li>DarOrSarInvalid: abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp rollback.</li>
<li>DtsJitter: DTS jitter too high.</li>
<li>PtsJitter: PTS jitter too high.</li>
<li>AACDurationDeviation: improper AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: audio frame dropping.</li>
<li>VideoDroppingFrames: video frame dropping.</li>
<li>AVTimestampInterleave: improper audio-video interleaving.</li>
<li>PtsLessThanDts: The pts of the media stream is less than the dts.</li>
<li>ReceiveFpsJitter: excessive network received frame rate jitter</li>
<li>ReceiveFpsTooSmall: network receive video frame rate too low.</li>
<li>FpsJitter: excessive stream frame rate jitter calculated by PTS</li>
<li>StreamOpenFailed: stream open failure.</li>
<li>StreamEnd: stream end.</li>
<li>StreamParseFailed: stream parsing failure.</li>
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of mpegts misses AUD NALU.</li>
<li>AudioStreamLack: no audio stream.</li>
<li>VideoStreamLack: no video stream.</li>
<li>LackAudioRecover: missing audio stream recovery.</li>
<li>LackVideoRecover: missing video stream recovery.</li>
<li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>
<li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>
<li>VideoDecodeFailed: video decoding error.</li>
<li>AudioDecodeFailed: audio decoding error.</li>
<li>AudioOutOfPhase: opposite phase in dual-channel audio.</li>
<li>VideoDuplicatedFrame: duplicate frames in video streams.</li>
<li>AudioDuplicatedFrame: duplicate frames in audio streams.</li>
<li>VideoRotation: video rotation.</li>
<li>TsMultiPrograms: multiple programs in MPEG2-TS streams.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: invalid M3U8 file.</li>
<li>HLSInvalidMasterM3u8: invalid main M3U8 file.</li>
<li>HLSInvalidMediaM3u8: invalid media M3U8 file.</li>
<li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.</li>
<li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.</li>
<li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Quality inspection item name. Valid values:
<li>LowEvaluation: Video no-reference scoring (MOS).</li>
<li>AudioEvaluation: Audio no-reference scoring (MOS).</li>
<li>Mosaic: mosaic detection.</li>
<li>CrashScreen: screen glitch detection.</li>
<li>Blur: blur detection.</li>
<li>Jitter: jitter detection.</li>
<li>Noise: noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: barcode detection.</li>
<li>AppletCode: mini program code detection.</li>
<li>BlackWhiteEdge: black and white edge detection.</li>
<li>SolidColorScreen: solid color screen detection.</li>
<li>LowLighting: low light.</li>
<li>HighLighting: overexposure.</li>
<li>NoVoice: silence detection.</li>
<li>LowVoice: bass detection.</li>
<li>HighVoice: explosion noise detection</li>
<li>AudioNoise: audio noise detection.</li>
<li>VideoResolutionChanged: video resolution change.</li>
<li>AudioSampleRateChanged: audio sampling rate change.</li>
<li>AudioChannelsChanged: audio channels changed.</li>
<li>ParameterSetsChanged: stream parameter set information has changed.</li>
<li>DarOrSarInvalid: abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp rollback.</li>
<li>DtsJitter: DTS jitter too high.</li>
<li>PtsJitter: PTS jitter too high.</li>
<li>AACDurationDeviation: improper AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: audio frame dropping.</li>
<li>VideoDroppingFrames: video frame dropping.</li>
<li>AVTimestampInterleave: improper audio-video interleaving.</li>
<li>PtsLessThanDts: The pts of the media stream is less than the dts.</li>
<li>ReceiveFpsJitter: excessive network received frame rate jitter</li>
<li>ReceiveFpsTooSmall: network receive video frame rate too low.</li>
<li>FpsJitter: excessive stream frame rate jitter calculated by PTS</li>
<li>StreamOpenFailed: stream open failure.</li>
<li>StreamEnd: stream end.</li>
<li>StreamParseFailed: stream parsing failure.</li>
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of mpegts misses AUD NALU.</li>
<li>AudioStreamLack: no audio stream.</li>
<li>VideoStreamLack: no video stream.</li>
<li>LackAudioRecover: missing audio stream recovery.</li>
<li>LackVideoRecover: missing video stream recovery.</li>
<li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>
<li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>
<li>VideoDecodeFailed: video decoding error.</li>
<li>AudioDecodeFailed: audio decoding error.</li>
<li>AudioOutOfPhase: opposite phase in dual-channel audio.</li>
<li>VideoDuplicatedFrame: duplicate frames in video streams.</li>
<li>AudioDuplicatedFrame: duplicate frames in audio streams.</li>
<li>VideoRotation: video rotation.</li>
<li>TsMultiPrograms: multiple programs in MPEG2-TS streams.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: invalid M3U8 file.</li>
<li>HLSInvalidMasterM3u8: invalid main M3U8 file.</li>
<li>HLSInvalidMediaM3u8: invalid media M3U8 file.</li>
<li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.</li>
<li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.</li>
<li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     * @param _type Quality inspection item name. Valid values:
<li>LowEvaluation: Video no-reference scoring (MOS).</li>
<li>AudioEvaluation: Audio no-reference scoring (MOS).</li>
<li>Mosaic: mosaic detection.</li>
<li>CrashScreen: screen glitch detection.</li>
<li>Blur: blur detection.</li>
<li>Jitter: jitter detection.</li>
<li>Noise: noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: barcode detection.</li>
<li>AppletCode: mini program code detection.</li>
<li>BlackWhiteEdge: black and white edge detection.</li>
<li>SolidColorScreen: solid color screen detection.</li>
<li>LowLighting: low light.</li>
<li>HighLighting: overexposure.</li>
<li>NoVoice: silence detection.</li>
<li>LowVoice: bass detection.</li>
<li>HighVoice: explosion noise detection</li>
<li>AudioNoise: audio noise detection.</li>
<li>VideoResolutionChanged: video resolution change.</li>
<li>AudioSampleRateChanged: audio sampling rate change.</li>
<li>AudioChannelsChanged: audio channels changed.</li>
<li>ParameterSetsChanged: stream parameter set information has changed.</li>
<li>DarOrSarInvalid: abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp rollback.</li>
<li>DtsJitter: DTS jitter too high.</li>
<li>PtsJitter: PTS jitter too high.</li>
<li>AACDurationDeviation: improper AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: audio frame dropping.</li>
<li>VideoDroppingFrames: video frame dropping.</li>
<li>AVTimestampInterleave: improper audio-video interleaving.</li>
<li>PtsLessThanDts: The pts of the media stream is less than the dts.</li>
<li>ReceiveFpsJitter: excessive network received frame rate jitter</li>
<li>ReceiveFpsTooSmall: network receive video frame rate too low.</li>
<li>FpsJitter: excessive stream frame rate jitter calculated by PTS</li>
<li>StreamOpenFailed: stream open failure.</li>
<li>StreamEnd: stream end.</li>
<li>StreamParseFailed: stream parsing failure.</li>
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of mpegts misses AUD NALU.</li>
<li>AudioStreamLack: no audio stream.</li>
<li>VideoStreamLack: no video stream.</li>
<li>LackAudioRecover: missing audio stream recovery.</li>
<li>LackVideoRecover: missing video stream recovery.</li>
<li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>
<li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>
<li>VideoDecodeFailed: video decoding error.</li>
<li>AudioDecodeFailed: audio decoding error.</li>
<li>AudioOutOfPhase: opposite phase in dual-channel audio.</li>
<li>VideoDuplicatedFrame: duplicate frames in video streams.</li>
<li>AudioDuplicatedFrame: duplicate frames in audio streams.</li>
<li>VideoRotation: video rotation.</li>
<li>TsMultiPrograms: multiple programs in MPEG2-TS streams.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: invalid M3U8 file.</li>
<li>HLSInvalidMasterM3u8: invalid main M3U8 file.</li>
<li>HLSInvalidMediaM3u8: invalid media M3U8 file.</li>
<li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.</li>
<li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.</li>
<li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.</li>
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
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
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
                     * 获取
                     * @return Sampling 
                     * 
                     */
                    std::string GetSampling() const;

                    /**
                     * 设置
                     * @param _sampling 
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
                     * 获取
                     * @return IntervalTime 
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置
                     * @param _intervalTime 
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
                     * 获取
                     * @return Duration 
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置
                     * @param _duration 
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
                     * 获取
                     * @return Threshold 
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置
                     * @param _threshold 
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
                     * Quality inspection item name. Valid values:
<li>LowEvaluation: Video no-reference scoring (MOS).</li>
<li>AudioEvaluation: Audio no-reference scoring (MOS).</li>
<li>Mosaic: mosaic detection.</li>
<li>CrashScreen: screen glitch detection.</li>
<li>Blur: blur detection.</li>
<li>Jitter: jitter detection.</li>
<li>Noise: noise detection.</li>
<li>QRCode: QR code detection.</li>
<li>BarCode: barcode detection.</li>
<li>AppletCode: mini program code detection.</li>
<li>BlackWhiteEdge: black and white edge detection.</li>
<li>SolidColorScreen: solid color screen detection.</li>
<li>LowLighting: low light.</li>
<li>HighLighting: overexposure.</li>
<li>NoVoice: silence detection.</li>
<li>LowVoice: bass detection.</li>
<li>HighVoice: explosion noise detection</li>
<li>AudioNoise: audio noise detection.</li>
<li>VideoResolutionChanged: video resolution change.</li>
<li>AudioSampleRateChanged: audio sampling rate change.</li>
<li>AudioChannelsChanged: audio channels changed.</li>
<li>ParameterSetsChanged: stream parameter set information has changed.</li>
<li>DarOrSarInvalid: abnormal video aspect ratio.</li>
<li>TimestampFallback: DTS timestamp rollback.</li>
<li>DtsJitter: DTS jitter too high.</li>
<li>PtsJitter: PTS jitter too high.</li>
<li>AACDurationDeviation: improper AAC frame timestamp interval.</li>
<li>AudioDroppingFrames: audio frame dropping.</li>
<li>VideoDroppingFrames: video frame dropping.</li>
<li>AVTimestampInterleave: improper audio-video interleaving.</li>
<li>PtsLessThanDts: The pts of the media stream is less than the dts.</li>
<li>ReceiveFpsJitter: excessive network received frame rate jitter</li>
<li>ReceiveFpsTooSmall: network receive video frame rate too low.</li>
<li>FpsJitter: excessive stream frame rate jitter calculated by PTS</li>
<li>StreamOpenFailed: stream open failure.</li>
<li>StreamEnd: stream end.</li>
<li>StreamParseFailed: stream parsing failure.</li>
<li>VideoFirstFrameNotIdr: first frame not an IDR frame.</li>
<li>StreamNALUError: NALU start code error.</li>
<li>TsStreamNoAud: The H26x stream of mpegts misses AUD NALU.</li>
<li>AudioStreamLack: no audio stream.</li>
<li>VideoStreamLack: no video stream.</li>
<li>LackAudioRecover: missing audio stream recovery.</li>
<li>LackVideoRecover: missing video stream recovery.</li>
<li>VideoBitrateOutofRange: video stream bitrate (kbps) out of range.</li>
<li>AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.</li>
<li>VideoDecodeFailed: video decoding error.</li>
<li>AudioDecodeFailed: audio decoding error.</li>
<li>AudioOutOfPhase: opposite phase in dual-channel audio.</li>
<li>VideoDuplicatedFrame: duplicate frames in video streams.</li>
<li>AudioDuplicatedFrame: duplicate frames in audio streams.</li>
<li>VideoRotation: video rotation.</li>
<li>TsMultiPrograms: multiple programs in MPEG2-TS streams.</li>
<li>Mp4InvalidCodecFourcc: The codec fourcc in MP4 does not meet Apple HLS requirements.</li>
<li>HLSBadM3u8Format: invalid M3U8 file.</li>
<li>HLSInvalidMasterM3u8: invalid main M3U8 file.</li>
<li>HLSInvalidMediaM3u8: invalid media M3U8 file.</li>
<li>HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.</li>
<li>HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.</li>
<li>HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.</li>
<li>HLSMediaSegmentsStreamNumChange: Number of streams in segments changes.</li>
<li>HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.</li>
<li>TimecodeTrackExist: TMCD track in MP4.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
