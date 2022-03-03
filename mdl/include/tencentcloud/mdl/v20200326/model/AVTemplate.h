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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AVTEMPLATE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AVTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     * @param Name Name of an audio/video transcoding template, which can contain 1-20 case-sensitive letters and digits
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether video is needed. `0`: not needed; `1`: needed
                     * @return NeedVideo Whether video is needed. `0`: not needed; `1`: needed
                     */
                    uint64_t GetNeedVideo() const;

                    /**
                     * 设置Whether video is needed. `0`: not needed; `1`: needed
                     * @param NeedVideo Whether video is needed. `0`: not needed; `1`: needed
                     */
                    void SetNeedVideo(const uint64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     * @return Vcodec Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     * @param Vcodec Video codec. Valid values: `H264`, `H265`. If this parameter is left empty, the original video codec will be used.
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取Video width. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video width will be used.
                     * @return Width Video width. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video width will be used.
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Video width. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video width will be used.
                     * @param Width Video width. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video width will be used.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video height. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video height will be used.
                     * @return Height Video height. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video height will be used.
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Video height. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video height will be used.
                     * @param Height Video height. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video height will be used.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     * @return Fps Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     * @param Fps Video frame rate. Value range: [1, 240]. If this parameter is left empty, the original frame rate will be used.
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     * @return TopSpeed Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     */
                    std::string GetTopSpeed() const;

                    /**
                     * 设置Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     * @param TopSpeed Whether to enable top speed codec transcoding. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
                     */
                    void SetTopSpeed(const std::string& _topSpeed);

                    /**
                     * 判断参数 TopSpeed 是否已赋值
                     * @return TopSpeed 是否已赋值
                     */
                    bool TopSpeedHasBeenSet() const;

                    /**
                     * 获取Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     * @return BitrateCompressionRatio Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     */
                    uint64_t GetBitrateCompressionRatio() const;

                    /**
                     * 设置Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     * @param BitrateCompressionRatio Compression ratio for top speed codec transcoding. Value range: [0, 50]. The lower the compression ratio, the higher the image quality.
                     */
                    void SetBitrateCompressionRatio(const uint64_t& _bitrateCompressionRatio);

                    /**
                     * 判断参数 BitrateCompressionRatio 是否已赋值
                     * @return BitrateCompressionRatio 是否已赋值
                     */
                    bool BitrateCompressionRatioHasBeenSet() const;

                    /**
                     * 获取Whether audio is needed. `0`: not needed; `1`: needed
                     * @return NeedAudio Whether audio is needed. `0`: not needed; `1`: needed
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置Whether audio is needed. `0`: not needed; `1`: needed
                     * @param NeedAudio Whether audio is needed. `0`: not needed; `1`: needed
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取Audio codec. Valid value: `AAC` (default)
                     * @return Acodec Audio codec. Valid value: `AAC` (default)
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio codec. Valid value: `AAC` (default)
                     * @param Acodec Audio codec. Valid value: `AAC` (default)
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     * @return AudioBitrate Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     */
                    uint64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     * @param AudioBitrate Audio bitrate. If this parameter is left empty, the original bitrate will be used.
Valid values: `6000`, `7000`, `8000`, `10000`, `12000`, `14000`, `16000`, `20000`, `24000`, `28000`, `32000`, `40000`, `48000`, `56000`, `64000`, `80000`, `96000`, `112000`, `128000`, `160000`, `192000`, `224000`, `256000`, `288000`, `320000`, `384000`, `448000`, `512000`, `576000`, `640000`, `768000`, `896000`, `1024000`
                     */
                    void SetAudioBitrate(const uint64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     * @return VideoBitrate Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     */
                    uint64_t GetVideoBitrate() const;

                    /**
                     * 设置Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     * @param VideoBitrate Video bitrate. Value range: [50000, 40000000]. The value must be an integer multiple of 1000. If this parameter is left empty, the original bitrate will be used.
                     */
                    void SetVideoBitrate(const uint64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     * @return RateControlMode Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     */
                    std::string GetRateControlMode() const;

                    /**
                     * 设置Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     * @param RateControlMode Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     */
                    void SetRateControlMode(const std::string& _rateControlMode);

                    /**
                     * 判断参数 RateControlMode 是否已赋值
                     * @return RateControlMode 是否已赋值
                     */
                    bool RateControlModeHasBeenSet() const;

                    /**
                     * 获取Watermark ID
                     * @return WatermarkId Watermark ID
                     */
                    std::string GetWatermarkId() const;

                    /**
                     * 设置Watermark ID
                     * @param WatermarkId Watermark ID
                     */
                    void SetWatermarkId(const std::string& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     */
                    bool WatermarkIdHasBeenSet() const;

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
                     * Video width. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video width will be used.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video height. Value range: (0, 3000]. The value must be an integer multiple of 4. If this parameter is left empty, the original video height will be used.
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
                     * Audio codec. Valid value: `AAC` (default)
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
                     * Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     */
                    std::string m_rateControlMode;
                    bool m_rateControlModeHasBeenSet;

                    /**
                     * Watermark ID
                     */
                    std::string m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AVTEMPLATE_H_
