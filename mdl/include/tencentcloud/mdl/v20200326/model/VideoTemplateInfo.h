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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOTEMPLATEINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AdditionalRateSetting.h>
#include <tencentcloud/mdl/v20200326/model/VideoCodecDetail.h>
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
                     * 获取Video width. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     * @return Width Video width. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Video width. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     * @param _width Video width. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
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
                     * 获取Video height. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     * @return Height Video height. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Video height. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     * @param _height Video height. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
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
                     * 获取
                     * @return VideoEnhanceEnabled 
                     * 
                     */
                    uint64_t GetVideoEnhanceEnabled() const;

                    /**
                     * 设置
                     * @param _videoEnhanceEnabled 
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
                     * 获取
                     * @return VideoEnhanceSettings 
                     * 
                     */
                    std::vector<VideoEnhanceSetting> GetVideoEnhanceSettings() const;

                    /**
                     * 设置
                     * @param _videoEnhanceSettings 
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
                     * Video width. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video height. Value range: (0,4096]. The value can only be a multiple of 2. If this parameter is left empty, the original value will be used.
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
                     * Bitrate control mode. Valid values: `CBR`, `ABR` (default), `VBR`.
                     */
                    std::string m_rateControlMode;
                    bool m_rateControlModeHasBeenSet;

                    /**
                     * Watermark ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * Whether to enable the face blur function, 1 is on, 0 is off, and the default is 0.
                     */
                    uint64_t m_faceBlurringEnabled;
                    bool m_faceBlurringEnabledHasBeenSet;

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
                     * 
                     */
                    uint64_t m_videoEnhanceEnabled;
                    bool m_videoEnhanceEnabledHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<VideoEnhanceSetting> m_videoEnhanceSettings;
                    bool m_videoEnhanceSettingsHasBeenSet;

                    /**
                     * Color space setting.
                     */
                    ColorSpaceSetting m_colorSpaceSettings;
                    bool m_colorSpaceSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOTEMPLATEINFO_H_
