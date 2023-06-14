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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOTEMPLATEINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOTEMPLATEINFO_H_

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
                * Video transcoding template.
                */
                class VideoTemplateInfo : public AbstractModel
                {
                public:
                    VideoTemplateInfo();
                    ~VideoTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video transcoding template name, which can contain 1-20 letters and digits.
                     * @return Name Video transcoding template name, which can contain 1-20 letters and digits.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Video transcoding template name, which can contain 1-20 letters and digits.
                     * @param _name Video transcoding template name, which can contain 1-20 letters and digits.
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
                     * 获取Video codec. Valid values: H264/H265. If this parameter is left empty, the original value will be used.
                     * @return Vcodec Video codec. Valid values: H264/H265. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Video codec. Valid values: H264/H265. If this parameter is left empty, the original value will be used.
                     * @param _vcodec Video codec. Valid values: H264/H265. If this parameter is left empty, the original value will be used.
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
                     * 获取Video bitrate. Value range: [50000,40000000]. The value can only be a multiple of 1,000. If this parameter is left empty, the original value will be used.
                     * @return VideoBitrate Video bitrate. Value range: [50000,40000000]. The value can only be a multiple of 1,000. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    uint64_t GetVideoBitrate() const;

                    /**
                     * 设置Video bitrate. Value range: [50000,40000000]. The value can only be a multiple of 1,000. If this parameter is left empty, the original value will be used.
                     * @param _videoBitrate Video bitrate. Value range: [50000,40000000]. The value can only be a multiple of 1,000. If this parameter is left empty, the original value will be used.
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
                     * 获取Video width. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     * @return Width Video width. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Video width. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     * @param _width Video width. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
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
                     * 获取Video height. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     * @return Height Video height. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Video height. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     * @param _height Video height. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
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
                     * 获取Video frame rate. Value range: [1,240]. If this parameter is left empty, the original value will be used.
                     * @return Fps Video frame rate. Value range: [1,240]. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video frame rate. Value range: [1,240]. If this parameter is left empty, the original value will be used.
                     * @param _fps Video frame rate. Value range: [1,240]. If this parameter is left empty, the original value will be used.
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
                     * 获取Whether to enable top speed codec. Valid value: CLOSE/OPEN. Default value: CLOSE.
                     * @return TopSpeed Whether to enable top speed codec. Valid value: CLOSE/OPEN. Default value: CLOSE.
                     * 
                     */
                    std::string GetTopSpeed() const;

                    /**
                     * 设置Whether to enable top speed codec. Valid value: CLOSE/OPEN. Default value: CLOSE.
                     * @param _topSpeed Whether to enable top speed codec. Valid value: CLOSE/OPEN. Default value: CLOSE.
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
                     * 获取Top speed codec compression ratio. Value range: [0,50]. The lower the compression ratio, the higher the image quality.
                     * @return BitrateCompressionRatio Top speed codec compression ratio. Value range: [0,50]. The lower the compression ratio, the higher the image quality.
                     * 
                     */
                    uint64_t GetBitrateCompressionRatio() const;

                    /**
                     * 设置Top speed codec compression ratio. Value range: [0,50]. The lower the compression ratio, the higher the image quality.
                     * @param _bitrateCompressionRatio Top speed codec compression ratio. Value range: [0,50]. The lower the compression ratio, the higher the image quality.
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
                     * 获取Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     * @return RateControlMode Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     * 
                     */
                    std::string GetRateControlMode() const;

                    /**
                     * 设置Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     * @param _rateControlMode Bitrate control mode. Valid values: `CBR`, `ABR` (default)
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
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WatermarkId Watermark ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetWatermarkId() const;

                    /**
                     * 设置Watermark ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _watermarkId Watermark ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWatermarkId(const std::string& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                private:

                    /**
                     * Video transcoding template name, which can contain 1-20 letters and digits.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Video codec. Valid values: H264/H265. If this parameter is left empty, the original value will be used.
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * Video bitrate. Value range: [50000,40000000]. The value can only be a multiple of 1,000. If this parameter is left empty, the original value will be used.
                     */
                    uint64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Video width. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video height. Value range: (0,3000]. The value can only be a multiple of 4. If this parameter is left empty, the original value will be used.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Video frame rate. Value range: [1,240]. If this parameter is left empty, the original value will be used.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Whether to enable top speed codec. Valid value: CLOSE/OPEN. Default value: CLOSE.
                     */
                    std::string m_topSpeed;
                    bool m_topSpeedHasBeenSet;

                    /**
                     * Top speed codec compression ratio. Value range: [0,50]. The lower the compression ratio, the higher the image quality.
                     */
                    uint64_t m_bitrateCompressionRatio;
                    bool m_bitrateCompressionRatioHasBeenSet;

                    /**
                     * Bitrate control mode. Valid values: `CBR`, `ABR` (default)
                     */
                    std::string m_rateControlMode;
                    bool m_rateControlModeHasBeenSet;

                    /**
                     * Watermark ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOTEMPLATEINFO_H_
