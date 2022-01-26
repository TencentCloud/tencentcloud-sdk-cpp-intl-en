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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ENCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ENCODEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Output stream encoding parameters for MCU On-Cloud MixTranscoding
                */
                class EncodeParams : public AbstractModel
                {
                public:
                    EncodeParams();
                    ~EncodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output audio sample rate (Hz) for On-Cloud MixTranscoding. Valid values: 48000, 44100, 32000, 24000, 16000, 8000
                     * @return AudioSampleRate Output audio sample rate (Hz) for On-Cloud MixTranscoding. Valid values: 48000, 44100, 32000, 24000, 16000, 8000
                     */
                    uint64_t GetAudioSampleRate() const;

                    /**
                     * 设置Output audio sample rate (Hz) for On-Cloud MixTranscoding. Valid values: 48000, 44100, 32000, 24000, 16000, 8000
                     * @param AudioSampleRate Output audio sample rate (Hz) for On-Cloud MixTranscoding. Valid values: 48000, 44100, 32000, 24000, 16000, 8000
                     */
                    void SetAudioSampleRate(const uint64_t& _audioSampleRate);

                    /**
                     * 判断参数 AudioSampleRate 是否已赋值
                     * @return AudioSampleRate 是否已赋值
                     */
                    bool AudioSampleRateHasBeenSet() const;

                    /**
                     * 获取Output audio bitrate (Kbps) for On-Cloud MixTranscoding. Value range: 8-500
                     * @return AudioBitrate Output audio bitrate (Kbps) for On-Cloud MixTranscoding. Value range: 8-500
                     */
                    uint64_t GetAudioBitrate() const;

                    /**
                     * 设置Output audio bitrate (Kbps) for On-Cloud MixTranscoding. Value range: 8-500
                     * @param AudioBitrate Output audio bitrate (Kbps) for On-Cloud MixTranscoding. Value range: 8-500
                     */
                    void SetAudioBitrate(const uint64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取Number of sound channels of output stream for On-Cloud MixTranscoding. Valid values: 1, 2. 1 represents mono-channel, and 2 represents dual-channel.
                     * @return AudioChannels Number of sound channels of output stream for On-Cloud MixTranscoding. Valid values: 1, 2. 1 represents mono-channel, and 2 represents dual-channel.
                     */
                    uint64_t GetAudioChannels() const;

                    /**
                     * 设置Number of sound channels of output stream for On-Cloud MixTranscoding. Valid values: 1, 2. 1 represents mono-channel, and 2 represents dual-channel.
                     * @param AudioChannels Number of sound channels of output stream for On-Cloud MixTranscoding. Valid values: 1, 2. 1 represents mono-channel, and 2 represents dual-channel.
                     */
                    void SetAudioChannels(const uint64_t& _audioChannels);

                    /**
                     * 判断参数 AudioChannels 是否已赋值
                     * @return AudioChannels 是否已赋值
                     */
                    bool AudioChannelsHasBeenSet() const;

                    /**
                     * 获取Output stream width in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1920].
                     * @return VideoWidth Output stream width in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1920].
                     */
                    uint64_t GetVideoWidth() const;

                    /**
                     * 设置Output stream width in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1920].
                     * @param VideoWidth Output stream width in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1920].
                     */
                    void SetVideoWidth(const uint64_t& _videoWidth);

                    /**
                     * 判断参数 VideoWidth 是否已赋值
                     * @return VideoWidth 是否已赋值
                     */
                    bool VideoWidthHasBeenSet() const;

                    /**
                     * 获取Output stream height in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1080].
                     * @return VideoHeight Output stream height in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1080].
                     */
                    uint64_t GetVideoHeight() const;

                    /**
                     * 设置Output stream height in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1080].
                     * @param VideoHeight Output stream height in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1080].
                     */
                    void SetVideoHeight(const uint64_t& _videoHeight);

                    /**
                     * 判断参数 VideoHeight 是否已赋值
                     * @return VideoHeight 是否已赋值
                     */
                    bool VideoHeightHasBeenSet() const;

                    /**
                     * 获取Output bitrate (Kbps) for On-Cloud MixTranscoding, which is required for audio-video output. Value range: 1-10000
                     * @return VideoBitrate Output bitrate (Kbps) for On-Cloud MixTranscoding, which is required for audio-video output. Value range: 1-10000
                     */
                    uint64_t GetVideoBitrate() const;

                    /**
                     * 设置Output bitrate (Kbps) for On-Cloud MixTranscoding, which is required for audio-video output. Value range: 1-10000
                     * @param VideoBitrate Output bitrate (Kbps) for On-Cloud MixTranscoding, which is required for audio-video output. Value range: 1-10000
                     */
                    void SetVideoBitrate(const uint64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Output stream frame rate for On-Cloud MixTranscoding in FPS. This parameter is required for audio/video outputs. Value range: [1, 60].
                     * @return VideoFramerate Output stream frame rate for On-Cloud MixTranscoding in FPS. This parameter is required for audio/video outputs. Value range: [1, 60].
                     */
                    uint64_t GetVideoFramerate() const;

                    /**
                     * 设置Output stream frame rate for On-Cloud MixTranscoding in FPS. This parameter is required for audio/video outputs. Value range: [1, 60].
                     * @param VideoFramerate Output stream frame rate for On-Cloud MixTranscoding in FPS. This parameter is required for audio/video outputs. Value range: [1, 60].
                     */
                    void SetVideoFramerate(const uint64_t& _videoFramerate);

                    /**
                     * 判断参数 VideoFramerate 是否已赋值
                     * @return VideoFramerate 是否已赋值
                     */
                    bool VideoFramerateHasBeenSet() const;

                    /**
                     * 获取Output stream GOP in seconds for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [1, 5].
                     * @return VideoGop Output stream GOP in seconds for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [1, 5].
                     */
                    uint64_t GetVideoGop() const;

                    /**
                     * 设置Output stream GOP in seconds for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [1, 5].
                     * @param VideoGop Output stream GOP in seconds for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [1, 5].
                     */
                    void SetVideoGop(const uint64_t& _videoGop);

                    /**
                     * 判断参数 VideoGop 是否已赋值
                     * @return VideoGop 是否已赋值
                     */
                    bool VideoGopHasBeenSet() const;

                    /**
                     * 获取Output background color for On-Cloud MixTranscoding. Valid values: decimal integers. Commonly used colors include:
Red: 0xff0000, whose decimal number is 16724736
Yellow: 0xffff00, whose decimal number is 16776960
Green: 0x33cc00, whose decimal number is 3394560
Blue: 0x0066ff, whose decimal number is 26367
Black: 0x000000, whose decimal number is 0
White: 0xFFFFFF, whose decimal number is 16777215
Grey: 0x999999, whose decimal number is 10066329
                     * @return BackgroundColor Output background color for On-Cloud MixTranscoding. Valid values: decimal integers. Commonly used colors include:
Red: 0xff0000, whose decimal number is 16724736
Yellow: 0xffff00, whose decimal number is 16776960
Green: 0x33cc00, whose decimal number is 3394560
Blue: 0x0066ff, whose decimal number is 26367
Black: 0x000000, whose decimal number is 0
White: 0xFFFFFF, whose decimal number is 16777215
Grey: 0x999999, whose decimal number is 10066329
                     */
                    uint64_t GetBackgroundColor() const;

                    /**
                     * 设置Output background color for On-Cloud MixTranscoding. Valid values: decimal integers. Commonly used colors include:
Red: 0xff0000, whose decimal number is 16724736
Yellow: 0xffff00, whose decimal number is 16776960
Green: 0x33cc00, whose decimal number is 3394560
Blue: 0x0066ff, whose decimal number is 26367
Black: 0x000000, whose decimal number is 0
White: 0xFFFFFF, whose decimal number is 16777215
Grey: 0x999999, whose decimal number is 10066329
                     * @param BackgroundColor Output background color for On-Cloud MixTranscoding. Valid values: decimal integers. Commonly used colors include:
Red: 0xff0000, whose decimal number is 16724736
Yellow: 0xffff00, whose decimal number is 16776960
Green: 0x33cc00, whose decimal number is 3394560
Blue: 0x0066ff, whose decimal number is 26367
Black: 0x000000, whose decimal number is 0
White: 0xFFFFFF, whose decimal number is 16777215
Grey: 0x999999, whose decimal number is 10066329
                     */
                    void SetBackgroundColor(const uint64_t& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取Output stream background image for stream mix. Its value is the ID of image uploaded through the TRTC Console.
                     * @return BackgroundImageId Output stream background image for stream mix. Its value is the ID of image uploaded through the TRTC Console.
                     */
                    uint64_t GetBackgroundImageId() const;

                    /**
                     * 设置Output stream background image for stream mix. Its value is the ID of image uploaded through the TRTC Console.
                     * @param BackgroundImageId Output stream background image for stream mix. Its value is the ID of image uploaded through the TRTC Console.
                     */
                    void SetBackgroundImageId(const uint64_t& _backgroundImageId);

                    /**
                     * 判断参数 BackgroundImageId 是否已赋值
                     * @return BackgroundImageId 是否已赋值
                     */
                    bool BackgroundImageIdHasBeenSet() const;

                    /**
                     * 获取Output audio codec for On-Cloud MixTranscoding. Valid values: 0, 1, 2. 0 (default): LC-AAC; 1: HE-AAC; 2: HE-AACv2. If this parameter is set to 2 (HE-AACv2), On-Cloud MixTranscoding can produce only dual-channel streams. If it is set to 1 (HE-AAC) or 2 (HE-AACv2), the valid values for the audio sample rate of output streams are 48000, 44100, 32000, 24000, and 16000.
                     * @return AudioCodec Output audio codec for On-Cloud MixTranscoding. Valid values: 0, 1, 2. 0 (default): LC-AAC; 1: HE-AAC; 2: HE-AACv2. If this parameter is set to 2 (HE-AACv2), On-Cloud MixTranscoding can produce only dual-channel streams. If it is set to 1 (HE-AAC) or 2 (HE-AACv2), the valid values for the audio sample rate of output streams are 48000, 44100, 32000, 24000, and 16000.
                     */
                    uint64_t GetAudioCodec() const;

                    /**
                     * 设置Output audio codec for On-Cloud MixTranscoding. Valid values: 0, 1, 2. 0 (default): LC-AAC; 1: HE-AAC; 2: HE-AACv2. If this parameter is set to 2 (HE-AACv2), On-Cloud MixTranscoding can produce only dual-channel streams. If it is set to 1 (HE-AAC) or 2 (HE-AACv2), the valid values for the audio sample rate of output streams are 48000, 44100, 32000, 24000, and 16000.
                     * @param AudioCodec Output audio codec for On-Cloud MixTranscoding. Valid values: 0, 1, 2. 0 (default): LC-AAC; 1: HE-AAC; 2: HE-AACv2. If this parameter is set to 2 (HE-AACv2), On-Cloud MixTranscoding can produce only dual-channel streams. If it is set to 1 (HE-AAC) or 2 (HE-AACv2), the valid values for the audio sample rate of output streams are 48000, 44100, 32000, 24000, and 16000.
                     */
                    void SetAudioCodec(const uint64_t& _audioCodec);

                    /**
                     * 判断参数 AudioCodec 是否已赋值
                     * @return AudioCodec 是否已赋值
                     */
                    bool AudioCodecHasBeenSet() const;

                    /**
                     * 获取URL of the background image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `BackgroundImageUrl` and `BackgroundImageId` are specified, the former will be used. The background image must not exceed 10 MB.
                     * @return BackgroundImageUrl URL of the background image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `BackgroundImageUrl` and `BackgroundImageId` are specified, the former will be used. The background image must not exceed 10 MB.
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置URL of the background image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `BackgroundImageUrl` and `BackgroundImageId` are specified, the former will be used. The background image must not exceed 10 MB.
                     * @param BackgroundImageUrl URL of the background image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `BackgroundImageUrl` and `BackgroundImageId` are specified, the former will be used. The background image must not exceed 10 MB.
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                private:

                    /**
                     * Output audio sample rate (Hz) for On-Cloud MixTranscoding. Valid values: 48000, 44100, 32000, 24000, 16000, 8000
                     */
                    uint64_t m_audioSampleRate;
                    bool m_audioSampleRateHasBeenSet;

                    /**
                     * Output audio bitrate (Kbps) for On-Cloud MixTranscoding. Value range: 8-500
                     */
                    uint64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Number of sound channels of output stream for On-Cloud MixTranscoding. Valid values: 1, 2. 1 represents mono-channel, and 2 represents dual-channel.
                     */
                    uint64_t m_audioChannels;
                    bool m_audioChannelsHasBeenSet;

                    /**
                     * Output stream width in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1920].
                     */
                    uint64_t m_videoWidth;
                    bool m_videoWidthHasBeenSet;

                    /**
                     * Output stream height in pixels for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [0, 1080].
                     */
                    uint64_t m_videoHeight;
                    bool m_videoHeightHasBeenSet;

                    /**
                     * Output bitrate (Kbps) for On-Cloud MixTranscoding, which is required for audio-video output. Value range: 1-10000
                     */
                    uint64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Output stream frame rate for On-Cloud MixTranscoding in FPS. This parameter is required for audio/video outputs. Value range: [1, 60].
                     */
                    uint64_t m_videoFramerate;
                    bool m_videoFramerateHasBeenSet;

                    /**
                     * Output stream GOP in seconds for On-Cloud MixTranscoding, which is required for audio/video output. Value range: [1, 5].
                     */
                    uint64_t m_videoGop;
                    bool m_videoGopHasBeenSet;

                    /**
                     * Output background color for On-Cloud MixTranscoding. Valid values: decimal integers. Commonly used colors include:
Red: 0xff0000, whose decimal number is 16724736
Yellow: 0xffff00, whose decimal number is 16776960
Green: 0x33cc00, whose decimal number is 3394560
Blue: 0x0066ff, whose decimal number is 26367
Black: 0x000000, whose decimal number is 0
White: 0xFFFFFF, whose decimal number is 16777215
Grey: 0x999999, whose decimal number is 10066329
                     */
                    uint64_t m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * Output stream background image for stream mix. Its value is the ID of image uploaded through the TRTC Console.
                     */
                    uint64_t m_backgroundImageId;
                    bool m_backgroundImageIdHasBeenSet;

                    /**
                     * Output audio codec for On-Cloud MixTranscoding. Valid values: 0, 1, 2. 0 (default): LC-AAC; 1: HE-AAC; 2: HE-AACv2. If this parameter is set to 2 (HE-AACv2), On-Cloud MixTranscoding can produce only dual-channel streams. If it is set to 1 (HE-AAC) or 2 (HE-AACv2), the valid values for the audio sample rate of output streams are 48000, 44100, 32000, 24000, and 16000.
                     */
                    uint64_t m_audioCodec;
                    bool m_audioCodecHasBeenSet;

                    /**
                     * URL of the background image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `BackgroundImageUrl` and `BackgroundImageId` are specified, the former will be used. The background image must not exceed 10 MB.
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ENCODEPARAMS_H_
