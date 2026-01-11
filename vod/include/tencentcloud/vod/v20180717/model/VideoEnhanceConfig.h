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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOENHANCECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SuperResolutionInfo.h>
#include <tencentcloud/vod/v20180717/model/HDRInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/ImageQualityEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/ColorEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/LowLightEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/ScratchRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/ArtifactRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/DiffusionEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/FrameRateWithDenInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video enhancement configuration.
                */
                class VideoEnhanceConfig : public AbstractModel
                {
                public:
                    VideoEnhanceConfig();
                    ~VideoEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series: provide a smooth playback effect for UHD videos. Standard 4K HDR videos with an FPS of 60 are generated to meet the needs of broadcasting/OTT for UHD videos. Formats for broadcasting scenarios are supported.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnhanceScenarioType Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series: provide a smooth playback effect for UHD videos. Standard 4K HDR videos with an FPS of 60 are generated to meet the needs of broadcasting/OTT for UHD videos. Formats for broadcasting scenarios are supported.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnhanceScenarioType() const;

                    /**
                     * 设置Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series: provide a smooth playback effect for UHD videos. Standard 4K HDR videos with an FPS of 60 are generated to meet the needs of broadcasting/OTT for UHD videos. Formats for broadcasting scenarios are supported.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enhanceScenarioType Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series: provide a smooth playback effect for UHD videos. Standard 4K HDR videos with an FPS of 60 are generated to meet the needs of broadcasting/OTT for UHD videos. Formats for broadcasting scenarios are supported.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnhanceScenarioType(const std::string& _enhanceScenarioType);

                    /**
                     * 判断参数 EnhanceScenarioType 是否已赋值
                     * @return EnhanceScenarioType 是否已赋值
                     * 
                     */
                    bool EnhanceScenarioTypeHasBeenSet() const;

                    /**
                     * 获取Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuperResolution Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SuperResolutionInfo GetSuperResolution() const;

                    /**
                     * 设置Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _superResolution Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuperResolution(const SuperResolutionInfo& _superResolution);

                    /**
                     * 判断参数 SuperResolution 是否已赋值
                     * @return SuperResolution 是否已赋值
                     * 
                     */
                    bool SuperResolutionHasBeenSet() const;

                    /**
                     * 获取HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Hdr HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HDRInfo GetHdr() const;

                    /**
                     * 设置HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hdr HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHdr(const HDRInfo& _hdr);

                    /**
                     * 判断参数 Hdr 是否已赋值
                     * @return Hdr 是否已赋值
                     * 
                     */
                    bool HdrHasBeenSet() const;

                    /**
                     * 获取Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Denoise Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoDenoiseInfo GetDenoise() const;

                    /**
                     * 设置Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _denoise Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDenoise(const VideoDenoiseInfo& _denoise);

                    /**
                     * 判断参数 Denoise 是否已赋值
                     * @return Denoise 是否已赋值
                     * 
                     */
                    bool DenoiseHasBeenSet() const;

                    /**
                     * 获取Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageQualityEnhance Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageQualityEnhanceInfo GetImageQualityEnhance() const;

                    /**
                     * 设置Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageQualityEnhance Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageQualityEnhance(const ImageQualityEnhanceInfo& _imageQualityEnhance);

                    /**
                     * 判断参数 ImageQualityEnhance 是否已赋值
                     * @return ImageQualityEnhance 是否已赋值
                     * 
                     */
                    bool ImageQualityEnhanceHasBeenSet() const;

                    /**
                     * 获取Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColorEnhance Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ColorEnhanceInfo GetColorEnhance() const;

                    /**
                     * 设置Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _colorEnhance Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColorEnhance(const ColorEnhanceInfo& _colorEnhance);

                    /**
                     * 判断参数 ColorEnhance 是否已赋值
                     * @return ColorEnhance 是否已赋值
                     * 
                     */
                    bool ColorEnhanceHasBeenSet() const;

                    /**
                     * 获取Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LowLightEnhance Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LowLightEnhanceInfo GetLowLightEnhance() const;

                    /**
                     * 设置Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lowLightEnhance Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLowLightEnhance(const LowLightEnhanceInfo& _lowLightEnhance);

                    /**
                     * 判断参数 LowLightEnhance 是否已赋值
                     * @return LowLightEnhance 是否已赋值
                     * 
                     */
                    bool LowLightEnhanceHasBeenSet() const;

                    /**
                     * 获取Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScratchRepair Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScratchRepairInfo GetScratchRepair() const;

                    /**
                     * 设置Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scratchRepair Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScratchRepair(const ScratchRepairInfo& _scratchRepair);

                    /**
                     * 判断参数 ScratchRepair 是否已赋值
                     * @return ScratchRepair 是否已赋值
                     * 
                     */
                    bool ScratchRepairHasBeenSet() const;

                    /**
                     * 获取Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ArtifactRepair Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ArtifactRepairInfo GetArtifactRepair() const;

                    /**
                     * 设置Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _artifactRepair Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArtifactRepair(const ArtifactRepairInfo& _artifactRepair);

                    /**
                     * 判断参数 ArtifactRepair 是否已赋值
                     * @return ArtifactRepair 是否已赋值
                     * 
                     */
                    bool ArtifactRepairHasBeenSet() const;

                    /**
                     * 获取Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiffusionEnhance Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DiffusionEnhanceInfo GetDiffusionEnhance() const;

                    /**
                     * 设置Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diffusionEnhance Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiffusionEnhance(const DiffusionEnhanceInfo& _diffusionEnhance);

                    /**
                     * 判断参数 DiffusionEnhance 是否已赋值
                     * @return DiffusionEnhance 是否已赋值
                     * 
                     */
                    bool DiffusionEnhanceHasBeenSet() const;

                    /**
                     * 获取Frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FrameRateWithDen Frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FrameRateWithDenInfo GetFrameRateWithDen() const;

                    /**
                     * 设置Frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _frameRateWithDen Frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrameRateWithDen(const FrameRateWithDenInfo& _frameRateWithDen);

                    /**
                     * 判断参数 FrameRateWithDen 是否已赋值
                     * @return FrameRateWithDen 是否已赋值
                     * 
                     */
                    bool FrameRateWithDenHasBeenSet() const;

                private:

                    /**
                     * Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series: provide a smooth playback effect for UHD videos. Standard 4K HDR videos with an FPS of 60 are generated to meet the needs of broadcasting/OTT for UHD videos. Formats for broadcasting scenarios are supported.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enhanceScenarioType;
                    bool m_enhanceScenarioTypeHasBeenSet;

                    /**
                     * Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SuperResolutionInfo m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HDRInfo m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoDenoiseInfo m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageQualityEnhanceInfo m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ColorEnhanceInfo m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LowLightEnhanceInfo m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScratchRepairInfo m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ArtifactRepairInfo m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

                    /**
                     * Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DiffusionEnhanceInfo m_diffusionEnhance;
                    bool m_diffusionEnhanceHasBeenSet;

                    /**
                     * Frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FrameRateWithDenInfo m_frameRateWithDen;
                    bool m_frameRateWithDenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOENHANCECONFIG_H_
