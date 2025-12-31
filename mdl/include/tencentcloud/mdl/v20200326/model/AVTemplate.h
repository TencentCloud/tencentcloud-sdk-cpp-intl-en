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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AVTEMPLATE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AVTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AudioNormalizationSettings.h>
#include <tencentcloud/mdl/v20200326/model/AdditionalRateSetting.h>
#include <tencentcloud/mdl/v20200326/model/VideoCodecDetail.h>
#include <tencentcloud/mdl/v20200326/model/AudioCodecDetail.h>
#include <tencentcloud/mdl/v20200326/model/AudioTrackInfo.h>
#include <tencentcloud/mdl/v20200326/model/VideoEnhanceSetting.h>
#include <tencentcloud/mdl/v20200326/model/ColorSpaceSetting.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Audio/Video transcoding template
                */
                class AVTemplate : public AbstractModel
                {
                public:
                    AVTemplate();
                    ~AVTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     * @return Name Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     * @param _name Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether video is needed. `0`: not needed; `1`: needed
                     * @return NeedVideo Whether video is needed. `0`: not needed; `1`: needed
                     * 
                     */
                    uint64_t GetNeedVideo() const;

                    /**
                     * 设置Whether video is needed. `0`: not needed; `1`: needed
                     * @param _needVideo Whether video is needed. `0`: not needed; `1`: needed
                     * 
                     */
                    void SetNeedVideo(const uint64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     * 
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     * @return Vcodec Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     * @param _vcodec Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     * 
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     * 
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取Video width. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video width will be used.
                     * @return Width Video width. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video width will be used.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Video width. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video width will be used.
                     * @param _width Video width. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video width will be used.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video height. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video height will be used.
                     * @return Height Video height. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video height will be used.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Video height. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video height will be used.
                     * @param _height Video height. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video height will be used.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     * @return Fps Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     * @param _fps Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     * @return TopSpeed Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     * 
                     */
                    std::string GetTopSpeed() const;

                    /**
                     * 设置Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     * @param _topSpeed Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     * 
                     */
                    void SetTopSpeed(const std::string& _topSpeed);

                    /**
                     * 判断参数 TopSpeed 是否已赋值
                     * @return TopSpeed 是否已赋值
                     * 
                     */
                    bool TopSpeedHasBeenSet() const;

                    /**
                     * 获取Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     * @return BitrateCompressionRatio Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     * 
                     */
                    uint64_t GetBitrateCompressionRatio() const;

                    /**
                     * 设置Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     * @param _bitrateCompressionRatio Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     * 
                     */
                    void SetBitrateCompressionRatio(const uint64_t& _bitrateCompressionRatio);

                    /**
                     * 判断参数 BitrateCompressionRatio 是否已赋值
                     * @return BitrateCompressionRatio 是否已赋值
                     * 
                     */
                    bool BitrateCompressionRatioHasBeenSet() const;

                    /**
                     * 获取Whether audio is needed. `0`: not needed; `1`: needed
                     * @return NeedAudio Whether audio is needed. `0`: not needed; `1`: needed
                     * 
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置Whether audio is needed. `0`: not needed; `1`: needed
                     * @param _needAudio Whether audio is needed. `0`: not needed; `1`: needed
                     * 
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     * 
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * @return Acodec Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * @param _acodec Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     * 
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     * 
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     * @return AudioBitrate Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     * 
                     */
                    uint64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     * @param _audioBitrate Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     * 
                     */
                    void SetAudioBitrate(const uint64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     * 
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     * @return VideoBitrate Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     * 
                     */
                    uint64_t GetVideoBitrate() const;

                    /**
                     * 设置Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     * @param _videoBitrate Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     * 
                     */
                    void SetVideoBitrate(const uint64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     * 
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Bitrate control mode. Valid values: `CBR`, `ABR` (default), `VBR`.
                     * @return RateControlMode Bitrate control mode. Valid values: `CBR`, `ABR` (default), `VBR`.
                     * 
                     */
                    std::string GetRateControlMode() const;

                    /**
                     * 设置Bitrate control mode. Valid values: `CBR`, `ABR` (default), `VBR`.
                     * @param _rateControlMode Bitrate control mode. Valid values: `CBR`, `ABR` (default), `VBR`.
                     * 
                     */
                    void SetRateControlMode(const std::string& _rateControlMode);

                    /**
                     * 判断参数 RateControlMode 是否已赋值
                     * @return RateControlMode 是否已赋值
                     * 
                     */
                    bool RateControlModeHasBeenSet() const;

                    /**
                     * 获取Watermark ID
                     * @return WatermarkId Watermark ID
                     * 
                     */
                    std::string GetWatermarkId() const;

                    /**
                     * 设置Watermark ID
                     * @param _watermarkId Watermark ID
                     * 
                     */
                    void SetWatermarkId(const std::string& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                    /**
                     * 获取Whether to convert audio to text. `0` (default): No; `1`: Yes.
                     * @return SmartSubtitles Whether to convert audio to text. `0` (default): No; `1`: Yes.
                     * 
                     */
                    uint64_t GetSmartSubtitles() const;

                    /**
                     * 设置Whether to convert audio to text. `0` (default): No; `1`: Yes.
                     * @param _smartSubtitles Whether to convert audio to text. `0` (default): No; `1`: Yes.
                     * 
                     */
                    void SetSmartSubtitles(const uint64_t& _smartSubtitles);

                    /**
                     * 判断参数 SmartSubtitles 是否已赋值
                     * @return SmartSubtitles 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesHasBeenSet() const;

                    /**
                     * 获取The subtitle settings. Currently, the following subtitles are supported:
`eng2eng`: English speech to English text.
`eng2chs`: English speech to Chinese text. 
`eng2chseng`: English speech to English and Chinese text. 
`chs2chs`: Chinese speech to Chinese text.   
`chs2eng`: Chinese speech to English text. 
`chs2chseng`: Chinese speech to Chinese and English text.
                     * @return SubtitleConfiguration The subtitle settings. Currently, the following subtitles are supported:
`eng2eng`: English speech to English text.
`eng2chs`: English speech to Chinese text. 
`eng2chseng`: English speech to English and Chinese text. 
`chs2chs`: Chinese speech to Chinese text.   
`chs2eng`: Chinese speech to English text. 
`chs2chseng`: Chinese speech to Chinese and English text.
                     * 
                     */
                    std::string GetSubtitleConfiguration() const;

                    /**
                     * 设置The subtitle settings. Currently, the following subtitles are supported:
`eng2eng`: English speech to English text.
`eng2chs`: English speech to Chinese text. 
`eng2chseng`: English speech to English and Chinese text. 
`chs2chs`: Chinese speech to Chinese text.   
`chs2eng`: Chinese speech to English text. 
`chs2chseng`: Chinese speech to Chinese and English text.
                     * @param _subtitleConfiguration The subtitle settings. Currently, the following subtitles are supported:
`eng2eng`: English speech to English text.
`eng2chs`: English speech to Chinese text. 
`eng2chseng`: English speech to English and Chinese text. 
`chs2chs`: Chinese speech to Chinese text.   
`chs2eng`: Chinese speech to English text. 
`chs2chseng`: Chinese speech to Chinese and English text.
                     * 
                     */
                    void SetSubtitleConfiguration(const std::string& _subtitleConfiguration);

                    /**
                     * 判断参数 SubtitleConfiguration 是否已赋值
                     * @return SubtitleConfiguration 是否已赋值
                     * 
                     */
                    bool SubtitleConfigurationHasBeenSet() const;

                    /**
                     * 获取Whether to enable the face blur function, 1 is on, 0 is off, and the default is 0.
                     * @return FaceBlurringEnabled Whether to enable the face blur function, 1 is on, 0 is off, and the default is 0.
                     * 
                     */
                    uint64_t GetFaceBlurringEnabled() const;

                    /**
                     * 设置Whether to enable the face blur function, 1 is on, 0 is off, and the default is 0.
                     * @param _faceBlurringEnabled Whether to enable the face blur function, 1 is on, 0 is off, and the default is 0.
                     * 
                     */
                    void SetFaceBlurringEnabled(const uint64_t& _faceBlurringEnabled);

                    /**
                     * 判断参数 FaceBlurringEnabled 是否已赋值
                     * @return FaceBlurringEnabled 是否已赋值
                     * 
                     */
                    bool FaceBlurringEnabledHasBeenSet() const;

                    /**
                     * 获取Only AttachedInputs.AudioSelectors.Name can be selected. The following types need to be filled in: 'RTP_PUSH', 'SRT_PUSH', 'UDP_PUSH', 'RTP-FEC_PUSH'.
                     * @return AudioSelectorName Only AttachedInputs.AudioSelectors.Name can be selected. The following types need to be filled in: 'RTP_PUSH', 'SRT_PUSH', 'UDP_PUSH', 'RTP-FEC_PUSH'.
                     * 
                     */
                    std::string GetAudioSelectorName() const;

                    /**
                     * 设置Only AttachedInputs.AudioSelectors.Name can be selected. The following types need to be filled in: 'RTP_PUSH', 'SRT_PUSH', 'UDP_PUSH', 'RTP-FEC_PUSH'.
                     * @param _audioSelectorName Only AttachedInputs.AudioSelectors.Name can be selected. The following types need to be filled in: 'RTP_PUSH', 'SRT_PUSH', 'UDP_PUSH', 'RTP-FEC_PUSH'.
                     * 
                     */
                    void SetAudioSelectorName(const std::string& _audioSelectorName);

                    /**
                     * 判断参数 AudioSelectorName 是否已赋值
                     * @return AudioSelectorName 是否已赋值
                     * 
                     */
                    bool AudioSelectorNameHasBeenSet() const;

                    /**
                     * 获取Audio transcoding special configuration information.
                     * @return AudioNormalization Audio transcoding special configuration information.
                     * 
                     */
                    AudioNormalizationSettings GetAudioNormalization() const;

                    /**
                     * 设置Audio transcoding special configuration information.
                     * @param _audioNormalization Audio transcoding special configuration information.
                     * 
                     */
                    void SetAudioNormalization(const AudioNormalizationSettings& _audioNormalization);

                    /**
                     * 判断参数 AudioNormalization 是否已赋值
                     * @return AudioNormalization 是否已赋值
                     * 
                     */
                    bool AudioNormalizationHasBeenSet() const;

                    /**
                     * 获取Audio sampling rate, unit HZ.
                     * @return AudioSampleRate Audio sampling rate, unit HZ.
                     * 
                     */
                    uint64_t GetAudioSampleRate() const;

                    /**
                     * 设置Audio sampling rate, unit HZ.
                     * @param _audioSampleRate Audio sampling rate, unit HZ.
                     * 
                     */
                    void SetAudioSampleRate(const uint64_t& _audioSampleRate);

                    /**
                     * 判断参数 AudioSampleRate 是否已赋值
                     * @return AudioSampleRate 是否已赋值
                     * 
                     */
                    bool AudioSampleRateHasBeenSet() const;

                    /**
                     * 获取This field indicates how to specify the output video frame rate. If FOLLOW_SOURCE is selected, the output video frame rate will be set equal to the input video frame rate of the first input. If SPECIFIED_FRACTION is selected, the output video frame rate is determined by the fraction (frame rate numerator and frame rate denominator). If SPECIFIED_HZ is selected, the frame rate of the output video is determined by the HZ you enter.
                     * @return FrameRateType This field indicates how to specify the output video frame rate. If FOLLOW_SOURCE is selected, the output video frame rate will be set equal to the input video frame rate of the first input. If SPECIFIED_FRACTION is selected, the output video frame rate is determined by the fraction (frame rate numerator and frame rate denominator). If SPECIFIED_HZ is selected, the frame rate of the output video is determined by the HZ you enter.
                     * 
                     */
                    std::string GetFrameRateType() const;

                    /**
                     * 设置This field indicates how to specify the output video frame rate. If FOLLOW_SOURCE is selected, the output video frame rate will be set equal to the input video frame rate of the first input. If SPECIFIED_FRACTION is selected, the output video frame rate is determined by the fraction (frame rate numerator and frame rate denominator). If SPECIFIED_HZ is selected, the frame rate of the output video is determined by the HZ you enter.
                     * @param _frameRateType This field indicates how to specify the output video frame rate. If FOLLOW_SOURCE is selected, the output video frame rate will be set equal to the input video frame rate of the first input. If SPECIFIED_FRACTION is selected, the output video frame rate is determined by the fraction (frame rate numerator and frame rate denominator). If SPECIFIED_HZ is selected, the frame rate of the output video is determined by the HZ you enter.
                     * 
                     */
                    void SetFrameRateType(const std::string& _frameRateType);

                    /**
                     * 判断参数 FrameRateType 是否已赋值
                     * @return FrameRateType 是否已赋值
                     * 
                     */
                    bool FrameRateTypeHasBeenSet() const;

                    /**
                     * 获取Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate numerator setting.
                     * @return FrameRateNumerator Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate numerator setting.
                     * 
                     */
                    uint64_t GetFrameRateNumerator() const;

                    /**
                     * 设置Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate numerator setting.
                     * @param _frameRateNumerator Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate numerator setting.
                     * 
                     */
                    void SetFrameRateNumerator(const uint64_t& _frameRateNumerator);

                    /**
                     * 判断参数 FrameRateNumerator 是否已赋值
                     * @return FrameRateNumerator 是否已赋值
                     * 
                     */
                    bool FrameRateNumeratorHasBeenSet() const;

                    /**
                     * 获取Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate denominator setting.
                     * @return FrameRateDenominator Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate denominator setting.
                     * 
                     */
                    uint64_t GetFrameRateDenominator() const;

                    /**
                     * 设置Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate denominator setting.
                     * @param _frameRateDenominator Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate denominator setting.
                     * 
                     */
                    void SetFrameRateDenominator(const uint64_t& _frameRateDenominator);

                    /**
                     * 判断参数 FrameRateDenominator 是否已赋值
                     * @return FrameRateDenominator 是否已赋值
                     * 
                     */
                    bool FrameRateDenominatorHasBeenSet() const;

                    /**
                     * 获取The number of B frames can be selected from 1 to 3.
                     * @return BFramesNum The number of B frames can be selected from 1 to 3.
                     * 
                     */
                    uint64_t GetBFramesNum() const;

                    /**
                     * 设置The number of B frames can be selected from 1 to 3.
                     * @param _bFramesNum The number of B frames can be selected from 1 to 3.
                     * 
                     */
                    void SetBFramesNum(const uint64_t& _bFramesNum);

                    /**
                     * 判断参数 BFramesNum 是否已赋值
                     * @return BFramesNum 是否已赋值
                     * 
                     */
                    bool BFramesNumHasBeenSet() const;

                    /**
                     * 获取The number of reference frames can be selected from 1 to 16.
                     * @return RefFramesNum The number of reference frames can be selected from 1 to 16.
                     * 
                     */
                    uint64_t GetRefFramesNum() const;

                    /**
                     * 设置The number of reference frames can be selected from 1 to 16.
                     * @param _refFramesNum The number of reference frames can be selected from 1 to 16.
                     * 
                     */
                    void SetRefFramesNum(const uint64_t& _refFramesNum);

                    /**
                     * 判断参数 RefFramesNum 是否已赋值
                     * @return RefFramesNum 是否已赋值
                     * 
                     */
                    bool RefFramesNumHasBeenSet() const;

                    /**
                     * 获取Additional video bitrate configuration.
                     * @return AdditionalRateSettings Additional video bitrate configuration.
                     * 
                     */
                    AdditionalRateSetting GetAdditionalRateSettings() const;

                    /**
                     * 设置Additional video bitrate configuration.
                     * @param _additionalRateSettings Additional video bitrate configuration.
                     * 
                     */
                    void SetAdditionalRateSettings(const AdditionalRateSetting& _additionalRateSettings);

                    /**
                     * 判断参数 AdditionalRateSettings 是否已赋值
                     * @return AdditionalRateSettings 是否已赋值
                     * 
                     */
                    bool AdditionalRateSettingsHasBeenSet() const;

                    /**
                     * 获取Video encoding configuration.
                     * @return VideoCodecDetails Video encoding configuration.
                     * 
                     */
                    VideoCodecDetail GetVideoCodecDetails() const;

                    /**
                     * 设置Video encoding configuration.
                     * @param _videoCodecDetails Video encoding configuration.
                     * 
                     */
                    void SetVideoCodecDetails(const VideoCodecDetail& _videoCodecDetails);

                    /**
                     * 判断参数 VideoCodecDetails 是否已赋值
                     * @return VideoCodecDetails 是否已赋值
                     * 
                     */
                    bool VideoCodecDetailsHasBeenSet() const;

                    /**
                     * 获取Audio encoding configuration.
                     * @return AudioCodecDetails Audio encoding configuration.
                     * 
                     */
                    AudioCodecDetail GetAudioCodecDetails() const;

                    /**
                     * 设置Audio encoding configuration.
                     * @param _audioCodecDetails Audio encoding configuration.
                     * 
                     */
                    void SetAudioCodecDetails(const AudioCodecDetail& _audioCodecDetails);

                    /**
                     * 判断参数 AudioCodecDetails 是否已赋值
                     * @return AudioCodecDetails 是否已赋值
                     * 
                     */
                    bool AudioCodecDetailsHasBeenSet() const;

                    /**
                     * 获取Whether to enable multiple audio tracks 0: Not required 1: Required Default value 0.
                     * @return MultiAudioTrackEnabled Whether to enable multiple audio tracks 0: Not required 1: Required Default value 0.
                     * 
                     */
                    uint64_t GetMultiAudioTrackEnabled() const;

                    /**
                     * 设置Whether to enable multiple audio tracks 0: Not required 1: Required Default value 0.
                     * @param _multiAudioTrackEnabled Whether to enable multiple audio tracks 0: Not required 1: Required Default value 0.
                     * 
                     */
                    void SetMultiAudioTrackEnabled(const uint64_t& _multiAudioTrackEnabled);

                    /**
                     * 判断参数 MultiAudioTrackEnabled 是否已赋值
                     * @return MultiAudioTrackEnabled 是否已赋值
                     * 
                     */
                    bool MultiAudioTrackEnabledHasBeenSet() const;

                    /**
                     * 获取Quantity limit 0-20 Valid when MultiAudioTrackEnabled is turned on.
                     * @return AudioTracks Quantity limit 0-20 Valid when MultiAudioTrackEnabled is turned on.
                     * 
                     */
                    std::vector<AudioTrackInfo> GetAudioTracks() const;

                    /**
                     * 设置Quantity limit 0-20 Valid when MultiAudioTrackEnabled is turned on.
                     * @param _audioTracks Quantity limit 0-20 Valid when MultiAudioTrackEnabled is turned on.
                     * 
                     */
                    void SetAudioTracks(const std::vector<AudioTrackInfo>& _audioTracks);

                    /**
                     * 判断参数 AudioTracks 是否已赋值
                     * @return AudioTracks 是否已赋值
                     * 
                     */
                    bool AudioTracksHasBeenSet() const;

                    /**
                     * 获取Do you want to enable video enhancement? 1: Enable 0: Do not enable.
                     * @return VideoEnhanceEnabled Do you want to enable video enhancement? 1: Enable 0: Do not enable.
                     * 
                     */
                    uint64_t GetVideoEnhanceEnabled() const;

                    /**
                     * 设置Do you want to enable video enhancement? 1: Enable 0: Do not enable.
                     * @param _videoEnhanceEnabled Do you want to enable video enhancement? 1: Enable 0: Do not enable.
                     * 
                     */
                    void SetVideoEnhanceEnabled(const uint64_t& _videoEnhanceEnabled);

                    /**
                     * 判断参数 VideoEnhanceEnabled 是否已赋值
                     * @return VideoEnhanceEnabled 是否已赋值
                     * 
                     */
                    bool VideoEnhanceEnabledHasBeenSet() const;

                    /**
                     * 获取Video enhancement configuration array.
                     * @return VideoEnhanceSettings Video enhancement configuration array.
                     * 
                     */
                    std::vector<VideoEnhanceSetting> GetVideoEnhanceSettings() const;

                    /**
                     * 设置Video enhancement configuration array.
                     * @param _videoEnhanceSettings Video enhancement configuration array.
                     * 
                     */
                    void SetVideoEnhanceSettings(const std::vector<VideoEnhanceSetting>& _videoEnhanceSettings);

                    /**
                     * 判断参数 VideoEnhanceSettings 是否已赋值
                     * @return VideoEnhanceSettings 是否已赋值
                     * 
                     */
                    bool VideoEnhanceSettingsHasBeenSet() const;

                    /**
                     * 获取Key frame interval, 300-10000, optional.
                     * @return GopSize Key frame interval, 300-10000, optional.
                     * 
                     */
                    int64_t GetGopSize() const;

                    /**
                     * 设置Key frame interval, 300-10000, optional.
                     * @param _gopSize Key frame interval, 300-10000, optional.
                     * 
                     */
                    void SetGopSize(const int64_t& _gopSize);

                    /**
                     * 判断参数 GopSize 是否已赋值
                     * @return GopSize 是否已赋值
                     * 
                     */
                    bool GopSizeHasBeenSet() const;

                    /**
                     * 获取Keyframe units, only support MILLISECONDS (milliseconds).
                     * @return GopSizeUnits Keyframe units, only support MILLISECONDS (milliseconds).
                     * 
                     */
                    std::string GetGopSizeUnits() const;

                    /**
                     * 设置Keyframe units, only support MILLISECONDS (milliseconds).
                     * @param _gopSizeUnits Keyframe units, only support MILLISECONDS (milliseconds).
                     * 
                     */
                    void SetGopSizeUnits(const std::string& _gopSizeUnits);

                    /**
                     * 判断参数 GopSizeUnits 是否已赋值
                     * @return GopSizeUnits 是否已赋值
                     * 
                     */
                    bool GopSizeUnitsHasBeenSet() const;

                    /**
                     * 获取Color space setting.
                     * @return ColorSpaceSettings Color space setting.
                     * 
                     */
                    ColorSpaceSetting GetColorSpaceSettings() const;

                    /**
                     * 设置Color space setting.
                     * @param _colorSpaceSettings Color space setting.
                     * 
                     */
                    void SetColorSpaceSettings(const ColorSpaceSetting& _colorSpaceSettings);

                    /**
                     * 判断参数 ColorSpaceSettings 是否已赋值
                     * @return ColorSpaceSettings 是否已赋值
                     * 
                     */
                    bool ColorSpaceSettingsHasBeenSet() const;

                    /**
                     * 获取Traceability watermark.
                     * @return ForensicWatermarkIds Traceability watermark.
                     * 
                     */
                    std::vector<std::string> GetForensicWatermarkIds() const;

                    /**
                     * 设置Traceability watermark.
                     * @param _forensicWatermarkIds Traceability watermark.
                     * 
                     */
                    void SetForensicWatermarkIds(const std::vector<std::string>& _forensicWatermarkIds);

                    /**
                     * 判断参数 ForensicWatermarkIds 是否已赋值
                     * @return ForensicWatermarkIds 是否已赋值
                     * 
                     */
                    bool ForensicWatermarkIdsHasBeenSet() const;

                private:

                    /**
                     * Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether video is needed. `0`: not needed; `1`: needed
                     */
                    uint64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * Video width. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video width will be used.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video height. Value range: (0, 4096]. The value must be an integer multiple of 2. If this parameter is left empty, the original video height will be used.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     */
                    std::string m_topSpeed;
                    bool m_topSpeedHasBeenSet;

                    /**
                     * Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     */
                    uint64_t m_bitrateCompressionRatio;
                    bool m_bitrateCompressionRatioHasBeenSet;

                    /**
                     * Whether audio is needed. `0`: not needed; `1`: needed
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * Audio encoding format, only `AAC` and `PASSTHROUGH` are available, with `AAC` as the default.
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     */
                    uint64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     */
                    uint64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Bitrate control mode. Valid values: `CBR`, `ABR` (default), `VBR`.
                     */
                    std::string m_rateControlMode;
                    bool m_rateControlModeHasBeenSet;

                    /**
                     * Watermark ID
                     */
                    std::string m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * Whether to convert audio to text. `0` (default): No; `1`: Yes.
                     */
                    uint64_t m_smartSubtitles;
                    bool m_smartSubtitlesHasBeenSet;

                    /**
                     * The subtitle settings. Currently, the following subtitles are supported:
`eng2eng`: English speech to English text.
`eng2chs`: English speech to Chinese text. 
`eng2chseng`: English speech to English and Chinese text. 
`chs2chs`: Chinese speech to Chinese text.   
`chs2eng`: Chinese speech to English text. 
`chs2chseng`: Chinese speech to Chinese and English text.
                     */
                    std::string m_subtitleConfiguration;
                    bool m_subtitleConfigurationHasBeenSet;

                    /**
                     * Whether to enable the face blur function, 1 is on, 0 is off, and the default is 0.
                     */
                    uint64_t m_faceBlurringEnabled;
                    bool m_faceBlurringEnabledHasBeenSet;

                    /**
                     * Only AttachedInputs.AudioSelectors.Name can be selected. The following types need to be filled in: 'RTP_PUSH', 'SRT_PUSH', 'UDP_PUSH', 'RTP-FEC_PUSH'.
                     */
                    std::string m_audioSelectorName;
                    bool m_audioSelectorNameHasBeenSet;

                    /**
                     * Audio transcoding special configuration information.
                     */
                    AudioNormalizationSettings m_audioNormalization;
                    bool m_audioNormalizationHasBeenSet;

                    /**
                     * Audio sampling rate, unit HZ.
                     */
                    uint64_t m_audioSampleRate;
                    bool m_audioSampleRateHasBeenSet;

                    /**
                     * This field indicates how to specify the output video frame rate. If FOLLOW_SOURCE is selected, the output video frame rate will be set equal to the input video frame rate of the first input. If SPECIFIED_FRACTION is selected, the output video frame rate is determined by the fraction (frame rate numerator and frame rate denominator). If SPECIFIED_HZ is selected, the frame rate of the output video is determined by the HZ you enter.
                     */
                    std::string m_frameRateType;
                    bool m_frameRateTypeHasBeenSet;

                    /**
                     * Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate numerator setting.
                     */
                    uint64_t m_frameRateNumerator;
                    bool m_frameRateNumeratorHasBeenSet;

                    /**
                     * Valid when the FrameRateType type you select is SPECIFIED_FRACTION, the output frame rate denominator setting.
                     */
                    uint64_t m_frameRateDenominator;
                    bool m_frameRateDenominatorHasBeenSet;

                    /**
                     * The number of B frames can be selected from 1 to 3.
                     */
                    uint64_t m_bFramesNum;
                    bool m_bFramesNumHasBeenSet;

                    /**
                     * The number of reference frames can be selected from 1 to 16.
                     */
                    uint64_t m_refFramesNum;
                    bool m_refFramesNumHasBeenSet;

                    /**
                     * Additional video bitrate configuration.
                     */
                    AdditionalRateSetting m_additionalRateSettings;
                    bool m_additionalRateSettingsHasBeenSet;

                    /**
                     * Video encoding configuration.
                     */
                    VideoCodecDetail m_videoCodecDetails;
                    bool m_videoCodecDetailsHasBeenSet;

                    /**
                     * Audio encoding configuration.
                     */
                    AudioCodecDetail m_audioCodecDetails;
                    bool m_audioCodecDetailsHasBeenSet;

                    /**
                     * Whether to enable multiple audio tracks 0: Not required 1: Required Default value 0.
                     */
                    uint64_t m_multiAudioTrackEnabled;
                    bool m_multiAudioTrackEnabledHasBeenSet;

                    /**
                     * Quantity limit 0-20 Valid when MultiAudioTrackEnabled is turned on.
                     */
                    std::vector<AudioTrackInfo> m_audioTracks;
                    bool m_audioTracksHasBeenSet;

                    /**
                     * Do you want to enable video enhancement? 1: Enable 0: Do not enable.
                     */
                    uint64_t m_videoEnhanceEnabled;
                    bool m_videoEnhanceEnabledHasBeenSet;

                    /**
                     * Video enhancement configuration array.
                     */
                    std::vector<VideoEnhanceSetting> m_videoEnhanceSettings;
                    bool m_videoEnhanceSettingsHasBeenSet;

                    /**
                     * Key frame interval, 300-10000, optional.
                     */
                    int64_t m_gopSize;
                    bool m_gopSizeHasBeenSet;

                    /**
                     * Keyframe units, only support MILLISECONDS (milliseconds).
                     */
                    std::string m_gopSizeUnits;
                    bool m_gopSizeUnitsHasBeenSet;

                    /**
                     * Color space setting.
                     */
                    ColorSpaceSetting m_colorSpaceSettings;
                    bool m_colorSpaceSettingsHasBeenSet;

                    /**
                     * Traceability watermark.
                     */
                    std::vector<std::string> m_forensicWatermarkIds;
                    bool m_forensicWatermarkIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AVTEMPLATE_H_
