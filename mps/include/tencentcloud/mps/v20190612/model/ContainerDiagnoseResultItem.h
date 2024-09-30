/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CONTAINERDIAGNOSERESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CONTAINERDIAGNOSERESULTITEM_H_

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
                * Container format diagnostic result.
                */
                class ContainerDiagnoseResultItem : public AbstractModel
                {
                public:
                    ContainerDiagnoseResultItem();
                    ~ContainerDiagnoseResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Diagnosed exception category. Valid values:
DecodeParamException: decoding parameter exception.
TimeStampException: timestamp exception.
FrameException: frame rate exception.
StreamStatusException: stream status exception.
StreamInfo: stream information exception.
StreamAbnormalCharacteristics: stream characteristics exception.
DecodeException: decoding exception.
HLSRequirements: HLS format exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Category Diagnosed exception category. Valid values:
DecodeParamException: decoding parameter exception.
TimeStampException: timestamp exception.
FrameException: frame rate exception.
StreamStatusException: stream status exception.
StreamInfo: stream information exception.
StreamAbnormalCharacteristics: stream characteristics exception.
DecodeException: decoding exception.
HLSRequirements: HLS format exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Diagnosed exception category. Valid values:
DecodeParamException: decoding parameter exception.
TimeStampException: timestamp exception.
FrameException: frame rate exception.
StreamStatusException: stream status exception.
StreamInfo: stream information exception.
StreamAbnormalCharacteristics: stream characteristics exception.
DecodeException: decoding exception.
HLSRequirements: HLS format exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _category Diagnosed exception category. Valid values:
DecodeParamException: decoding parameter exception.
TimeStampException: timestamp exception.
FrameException: frame rate exception.
StreamStatusException: stream status exception.
StreamInfo: stream information exception.
StreamAbnormalCharacteristics: stream characteristics exception.
DecodeException: decoding exception.
HLSRequirements: HLS format exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Diagnosed specific exception type. Valid values:

VideoResolutionChanged: video resolution change.
AudioSampleRateChanged: audio sample rate change.
AudioChannelsChanged: audio channel quantity change.
ParameterSetsChanged: stream parameter set information change.
DarOrSarInvalid: video aspect ratio exception.
TimestampFallback: DTS timestamp rollback.
DtsJitter: DTS jitter too high.
PtsJitter: PTS jitter too high.
AACDurationDeviation: improper AAC frame timestamp interval.
AudioDroppingFrames: audio frame dropping.
VideoDroppingFrames: video frame dropping.
AVTimestampInterleave: improper audio-video interleaving.
PtsLessThanDts: PTS less than DTS for media streams.
ReceiveFpsJitter: significant jitter in the network receive frame rate.
ReceiveFpsTooSmall: network receive video frame rate too low.
FpsJitter: significant jitter in the stream frame rate calculated via PTS.
StreamOpenFailed: stream open failure.
StreamEnd: stream end.
StreamParseFailed: stream parsing failure.
VideoFirstFrameNotIdr: first frame not an IDR frame.
StreamNALUError: NALU start code error.
TsStreamNoAud: no AUD NALU in the H26x stream of MPEG-TS.
AudioStreamLack: no audio stream.
VideoStreamLack: no video stream.
LackAudioRecover: missing audio stream recovery.
LackVideoRecover: missing video stream recovery.
VideoBitrateOutofRange: video stream bitrate (kbps) out of range.
AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.
VideoDecodeFailed: video decoding error.
AudioDecodeFailed: audio decoding error.
AudioOutOfPhase: opposite phase in dual-channel audio.
VideoDuplicatedFrame: duplicate frames in video streams.
AudioDuplicatedFrame: duplicate frames in audio streams.
VideoRotation: video rotation.
TsMultiPrograms: multiple programs in MPEG2-TS streams
Mp4InvalidCodecFourcc: codec FourCC in MP4 not meeting Apple HLS requirements.
HLSBadM3u8Format: invalid M3U8 file.
HLSInvalidMasterM3u8: invalid main M3U8 file.
HLSInvalidMediaM3u8: invalid media M3U8 file.
HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.
HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.
HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.
HLSMediaSegmentsStreamNumChange: changed number of streams in segments.
HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.
HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.
TimecodeTrackExist: TMCD track in MP4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Diagnosed specific exception type. Valid values:

VideoResolutionChanged: video resolution change.
AudioSampleRateChanged: audio sample rate change.
AudioChannelsChanged: audio channel quantity change.
ParameterSetsChanged: stream parameter set information change.
DarOrSarInvalid: video aspect ratio exception.
TimestampFallback: DTS timestamp rollback.
DtsJitter: DTS jitter too high.
PtsJitter: PTS jitter too high.
AACDurationDeviation: improper AAC frame timestamp interval.
AudioDroppingFrames: audio frame dropping.
VideoDroppingFrames: video frame dropping.
AVTimestampInterleave: improper audio-video interleaving.
PtsLessThanDts: PTS less than DTS for media streams.
ReceiveFpsJitter: significant jitter in the network receive frame rate.
ReceiveFpsTooSmall: network receive video frame rate too low.
FpsJitter: significant jitter in the stream frame rate calculated via PTS.
StreamOpenFailed: stream open failure.
StreamEnd: stream end.
StreamParseFailed: stream parsing failure.
VideoFirstFrameNotIdr: first frame not an IDR frame.
StreamNALUError: NALU start code error.
TsStreamNoAud: no AUD NALU in the H26x stream of MPEG-TS.
AudioStreamLack: no audio stream.
VideoStreamLack: no video stream.
LackAudioRecover: missing audio stream recovery.
LackVideoRecover: missing video stream recovery.
VideoBitrateOutofRange: video stream bitrate (kbps) out of range.
AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.
VideoDecodeFailed: video decoding error.
AudioDecodeFailed: audio decoding error.
AudioOutOfPhase: opposite phase in dual-channel audio.
VideoDuplicatedFrame: duplicate frames in video streams.
AudioDuplicatedFrame: duplicate frames in audio streams.
VideoRotation: video rotation.
TsMultiPrograms: multiple programs in MPEG2-TS streams
Mp4InvalidCodecFourcc: codec FourCC in MP4 not meeting Apple HLS requirements.
HLSBadM3u8Format: invalid M3U8 file.
HLSInvalidMasterM3u8: invalid main M3U8 file.
HLSInvalidMediaM3u8: invalid media M3U8 file.
HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.
HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.
HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.
HLSMediaSegmentsStreamNumChange: changed number of streams in segments.
HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.
HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.
TimecodeTrackExist: TMCD track in MP4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Diagnosed specific exception type. Valid values:

VideoResolutionChanged: video resolution change.
AudioSampleRateChanged: audio sample rate change.
AudioChannelsChanged: audio channel quantity change.
ParameterSetsChanged: stream parameter set information change.
DarOrSarInvalid: video aspect ratio exception.
TimestampFallback: DTS timestamp rollback.
DtsJitter: DTS jitter too high.
PtsJitter: PTS jitter too high.
AACDurationDeviation: improper AAC frame timestamp interval.
AudioDroppingFrames: audio frame dropping.
VideoDroppingFrames: video frame dropping.
AVTimestampInterleave: improper audio-video interleaving.
PtsLessThanDts: PTS less than DTS for media streams.
ReceiveFpsJitter: significant jitter in the network receive frame rate.
ReceiveFpsTooSmall: network receive video frame rate too low.
FpsJitter: significant jitter in the stream frame rate calculated via PTS.
StreamOpenFailed: stream open failure.
StreamEnd: stream end.
StreamParseFailed: stream parsing failure.
VideoFirstFrameNotIdr: first frame not an IDR frame.
StreamNALUError: NALU start code error.
TsStreamNoAud: no AUD NALU in the H26x stream of MPEG-TS.
AudioStreamLack: no audio stream.
VideoStreamLack: no video stream.
LackAudioRecover: missing audio stream recovery.
LackVideoRecover: missing video stream recovery.
VideoBitrateOutofRange: video stream bitrate (kbps) out of range.
AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.
VideoDecodeFailed: video decoding error.
AudioDecodeFailed: audio decoding error.
AudioOutOfPhase: opposite phase in dual-channel audio.
VideoDuplicatedFrame: duplicate frames in video streams.
AudioDuplicatedFrame: duplicate frames in audio streams.
VideoRotation: video rotation.
TsMultiPrograms: multiple programs in MPEG2-TS streams
Mp4InvalidCodecFourcc: codec FourCC in MP4 not meeting Apple HLS requirements.
HLSBadM3u8Format: invalid M3U8 file.
HLSInvalidMasterM3u8: invalid main M3U8 file.
HLSInvalidMediaM3u8: invalid media M3U8 file.
HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.
HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.
HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.
HLSMediaSegmentsStreamNumChange: changed number of streams in segments.
HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.
HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.
TimecodeTrackExist: TMCD track in MP4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Diagnosed specific exception type. Valid values:

VideoResolutionChanged: video resolution change.
AudioSampleRateChanged: audio sample rate change.
AudioChannelsChanged: audio channel quantity change.
ParameterSetsChanged: stream parameter set information change.
DarOrSarInvalid: video aspect ratio exception.
TimestampFallback: DTS timestamp rollback.
DtsJitter: DTS jitter too high.
PtsJitter: PTS jitter too high.
AACDurationDeviation: improper AAC frame timestamp interval.
AudioDroppingFrames: audio frame dropping.
VideoDroppingFrames: video frame dropping.
AVTimestampInterleave: improper audio-video interleaving.
PtsLessThanDts: PTS less than DTS for media streams.
ReceiveFpsJitter: significant jitter in the network receive frame rate.
ReceiveFpsTooSmall: network receive video frame rate too low.
FpsJitter: significant jitter in the stream frame rate calculated via PTS.
StreamOpenFailed: stream open failure.
StreamEnd: stream end.
StreamParseFailed: stream parsing failure.
VideoFirstFrameNotIdr: first frame not an IDR frame.
StreamNALUError: NALU start code error.
TsStreamNoAud: no AUD NALU in the H26x stream of MPEG-TS.
AudioStreamLack: no audio stream.
VideoStreamLack: no video stream.
LackAudioRecover: missing audio stream recovery.
LackVideoRecover: missing video stream recovery.
VideoBitrateOutofRange: video stream bitrate (kbps) out of range.
AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.
VideoDecodeFailed: video decoding error.
AudioDecodeFailed: audio decoding error.
AudioOutOfPhase: opposite phase in dual-channel audio.
VideoDuplicatedFrame: duplicate frames in video streams.
AudioDuplicatedFrame: duplicate frames in audio streams.
VideoRotation: video rotation.
TsMultiPrograms: multiple programs in MPEG2-TS streams
Mp4InvalidCodecFourcc: codec FourCC in MP4 not meeting Apple HLS requirements.
HLSBadM3u8Format: invalid M3U8 file.
HLSInvalidMasterM3u8: invalid main M3U8 file.
HLSInvalidMediaM3u8: invalid media M3U8 file.
HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.
HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.
HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.
HLSMediaSegmentsStreamNumChange: changed number of streams in segments.
HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.
HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.
TimecodeTrackExist: TMCD track in MP4.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Diagnosed exception level. Valid values:
Fatal: affecting subsequent playback and parsing.
Error: may affect playback.
Warning: potential risk, which may not necessarily affect playback.
Notice: important stream information.
Info: general stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SeverityLevel Diagnosed exception level. Valid values:
Fatal: affecting subsequent playback and parsing.
Error: may affect playback.
Warning: potential risk, which may not necessarily affect playback.
Notice: important stream information.
Info: general stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSeverityLevel() const;

                    /**
                     * 设置Diagnosed exception level. Valid values:
Fatal: affecting subsequent playback and parsing.
Error: may affect playback.
Warning: potential risk, which may not necessarily affect playback.
Notice: important stream information.
Info: general stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _severityLevel Diagnosed exception level. Valid values:
Fatal: affecting subsequent playback and parsing.
Error: may affect playback.
Warning: potential risk, which may not necessarily affect playback.
Notice: important stream information.
Info: general stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSeverityLevel(const std::string& _severityLevel);

                    /**
                     * 判断参数 SeverityLevel 是否已赋值
                     * @return SeverityLevel 是否已赋值
                     * 
                     */
                    bool SeverityLevelHasBeenSet() const;

                    /**
                     * 获取Timestamp of warning, in the format of 2022-12-25T13:14:16Z.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateTimeSet Timestamp of warning, in the format of 2022-12-25T13:14:16Z.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDateTimeSet() const;

                    /**
                     * 设置Timestamp of warning, in the format of 2022-12-25T13:14:16Z.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateTimeSet Timestamp of warning, in the format of 2022-12-25T13:14:16Z.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDateTimeSet(const std::vector<std::string>& _dateTimeSet);

                    /**
                     * 判断参数 DateTimeSet 是否已赋值
                     * @return DateTimeSet 是否已赋值
                     * 
                     */
                    bool DateTimeSetHasBeenSet() const;

                    /**
                     * 获取Timestamp.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimestampSet Timestamp.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<double> GetTimestampSet() const;

                    /**
                     * 设置Timestamp.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestampSet Timestamp.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestampSet(const std::vector<double>& _timestampSet);

                    /**
                     * 判断参数 TimestampSet 是否已赋值
                     * @return TimestampSet 是否已赋值
                     * 
                     */
                    bool TimestampSetHasBeenSet() const;

                private:

                    /**
                     * Diagnosed exception category. Valid values:
DecodeParamException: decoding parameter exception.
TimeStampException: timestamp exception.
FrameException: frame rate exception.
StreamStatusException: stream status exception.
StreamInfo: stream information exception.
StreamAbnormalCharacteristics: stream characteristics exception.
DecodeException: decoding exception.
HLSRequirements: HLS format exception.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Diagnosed specific exception type. Valid values:

VideoResolutionChanged: video resolution change.
AudioSampleRateChanged: audio sample rate change.
AudioChannelsChanged: audio channel quantity change.
ParameterSetsChanged: stream parameter set information change.
DarOrSarInvalid: video aspect ratio exception.
TimestampFallback: DTS timestamp rollback.
DtsJitter: DTS jitter too high.
PtsJitter: PTS jitter too high.
AACDurationDeviation: improper AAC frame timestamp interval.
AudioDroppingFrames: audio frame dropping.
VideoDroppingFrames: video frame dropping.
AVTimestampInterleave: improper audio-video interleaving.
PtsLessThanDts: PTS less than DTS for media streams.
ReceiveFpsJitter: significant jitter in the network receive frame rate.
ReceiveFpsTooSmall: network receive video frame rate too low.
FpsJitter: significant jitter in the stream frame rate calculated via PTS.
StreamOpenFailed: stream open failure.
StreamEnd: stream end.
StreamParseFailed: stream parsing failure.
VideoFirstFrameNotIdr: first frame not an IDR frame.
StreamNALUError: NALU start code error.
TsStreamNoAud: no AUD NALU in the H26x stream of MPEG-TS.
AudioStreamLack: no audio stream.
VideoStreamLack: no video stream.
LackAudioRecover: missing audio stream recovery.
LackVideoRecover: missing video stream recovery.
VideoBitrateOutofRange: video stream bitrate (kbps) out of range.
AudioBitrateOutofRange: audio stream bitrate (kbps) out of range.
VideoDecodeFailed: video decoding error.
AudioDecodeFailed: audio decoding error.
AudioOutOfPhase: opposite phase in dual-channel audio.
VideoDuplicatedFrame: duplicate frames in video streams.
AudioDuplicatedFrame: duplicate frames in audio streams.
VideoRotation: video rotation.
TsMultiPrograms: multiple programs in MPEG2-TS streams
Mp4InvalidCodecFourcc: codec FourCC in MP4 not meeting Apple HLS requirements.
HLSBadM3u8Format: invalid M3U8 file.
HLSInvalidMasterM3u8: invalid main M3U8 file.
HLSInvalidMediaM3u8: invalid media M3U8 file.
HLSMasterM3u8Recommended: parameters recommended by standards missing in main M3U8.
HLSMediaM3u8Recommended: parameters recommended by standards missing in media M3U8.
HLSMediaM3u8DiscontinuityExist: EXT-X-DISCONTINUITY in media M3U8.
HLSMediaSegmentsStreamNumChange: changed number of streams in segments.
HLSMediaSegmentsPTSJitterDeviation: PTS jumps between segments without EXT-X-DISCONTINUITY.
HLSMediaSegmentsDTSJitterDeviation: DTS jumps between segments without EXT-X-DISCONTINUITY.
TimecodeTrackExist: TMCD track in MP4.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Diagnosed exception level. Valid values:
Fatal: affecting subsequent playback and parsing.
Error: may affect playback.
Warning: potential risk, which may not necessarily affect playback.
Notice: important stream information.
Info: general stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_severityLevel;
                    bool m_severityLevelHasBeenSet;

                    /**
                     * Timestamp of warning, in the format of 2022-12-25T13:14:16Z.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dateTimeSet;
                    bool m_dateTimeSetHasBeenSet;

                    /**
                     * Timestamp.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> m_timestampSet;
                    bool m_timestampSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CONTAINERDIAGNOSERESULTITEM_H_
