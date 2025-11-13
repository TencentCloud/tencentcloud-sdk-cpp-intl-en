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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOENHANCECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FrameRateConfig.h>
#include <tencentcloud/mps/v20190612/model/SuperResolutionConfig.h>
#include <tencentcloud/mps/v20190612/model/HdrConfig.h>
#include <tencentcloud/mps/v20190612/model/VideoDenoiseConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageQualityEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ColorEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/LowLightEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ScratchRepairConfig.h>
#include <tencentcloud/mps/v20190612/model/ArtifactRepairConfig.h>
#include <tencentcloud/mps/v20190612/model/DiffusionEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/FrameRateWithDenConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FrameRate Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FrameRateConfig GetFrameRate() const;

                    /**
                     * 设置Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _frameRate Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrameRate(const FrameRateConfig& _frameRate);

                    /**
                     * 判断参数 FrameRate 是否已赋值
                     * @return FrameRate 是否已赋值
                     * 
                     */
                    bool FrameRateHasBeenSet() const;

                    /**
                     * 获取Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuperResolution Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SuperResolutionConfig GetSuperResolution() const;

                    /**
                     * 设置Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _superResolution Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuperResolution(const SuperResolutionConfig& _superResolution);

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
                    HdrConfig GetHdr() const;

                    /**
                     * 设置HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hdr HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHdr(const HdrConfig& _hdr);

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
                    VideoDenoiseConfig GetDenoise() const;

                    /**
                     * 设置Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _denoise Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDenoise(const VideoDenoiseConfig& _denoise);

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
                    ImageQualityEnhanceConfig GetImageQualityEnhance() const;

                    /**
                     * 设置Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageQualityEnhance Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageQualityEnhance(const ImageQualityEnhanceConfig& _imageQualityEnhance);

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
                    ColorEnhanceConfig GetColorEnhance() const;

                    /**
                     * 设置Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _colorEnhance Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColorEnhance(const ColorEnhanceConfig& _colorEnhance);

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
                    LowLightEnhanceConfig GetLowLightEnhance() const;

                    /**
                     * 设置Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lowLightEnhance Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLowLightEnhance(const LowLightEnhanceConfig& _lowLightEnhance);

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
                    ScratchRepairConfig GetScratchRepair() const;

                    /**
                     * 设置Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scratchRepair Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScratchRepair(const ScratchRepairConfig& _scratchRepair);

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
                    ArtifactRepairConfig GetArtifactRepair() const;

                    /**
                     * 设置Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _artifactRepair Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArtifactRepair(const ArtifactRepairConfig& _artifactRepair);

                    /**
                     * 判断参数 ArtifactRepair 是否已赋值
                     * @return ArtifactRepair 是否已赋值
                     * 
                     */
                    bool ArtifactRepairHasBeenSet() const;

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
                     * @return EnhanceSceneType Enhancement scenario configuration. Valid values:
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
                    std::string GetEnhanceSceneType() const;

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
                     * @param _enhanceSceneType Enhancement scenario configuration. Valid values:
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
                    void SetEnhanceSceneType(const std::string& _enhanceSceneType);

                    /**
                     * 判断参数 EnhanceSceneType 是否已赋值
                     * @return EnhanceSceneType 是否已赋值
                     * 
                     */
                    bool EnhanceSceneTypeHasBeenSet() const;

                    /**
                     * 获取Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiffusionEnhance Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DiffusionEnhanceConfig GetDiffusionEnhance() const;

                    /**
                     * 设置Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diffusionEnhance Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiffusionEnhance(const DiffusionEnhanceConfig& _diffusionEnhance);

                    /**
                     * 判断参数 DiffusionEnhance 是否已赋值
                     * @return DiffusionEnhance 是否已赋值
                     * 
                     */
                    bool DiffusionEnhanceHasBeenSet() const;

                    /**
                     * 获取New frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FrameRateWithDen New frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FrameRateWithDenConfig GetFrameRateWithDen() const;

                    /**
                     * 设置New frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _frameRateWithDen New frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrameRateWithDen(const FrameRateWithDenConfig& _frameRateWithDen);

                    /**
                     * 判断参数 FrameRateWithDen 是否已赋值
                     * @return FrameRateWithDen 是否已赋值
                     * 
                     */
                    bool FrameRateWithDenHasBeenSet() const;

                private:

                    /**
                     * Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FrameRateConfig m_frameRate;
                    bool m_frameRateHasBeenSet;

                    /**
                     * Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with Large Model enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SuperResolutionConfig m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * HDR configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HdrConfig m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageQualityEnhanceConfig m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * Color enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ColorEnhanceConfig m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * Low-light enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LowLightEnhanceConfig m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * Banding removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScratchRepairConfig m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ArtifactRepairConfig m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

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
                    std::string m_enhanceSceneType;
                    bool m_enhanceSceneTypeHasBeenSet;

                    /**
                     * Large Model enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DiffusionEnhanceConfig m_diffusionEnhance;
                    bool m_diffusionEnhanceHasBeenSet;

                    /**
                     * New frame rate configuration for the frame interpolation, which supports fractions. Note that it is mutually exclusive with FrameRate. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FrameRateWithDenConfig m_frameRateWithDen;
                    bool m_frameRateWithDenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOENHANCECONFIG_H_
