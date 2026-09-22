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
<li>HD_movie_series (UHD TV shows and movies) obtains smooth UHD effect, targeting the demand for UHD video in broadcasting/OTT, and generates Ultra-High-Definition Standard Video at 4K 60fps HDR. It supports broadcasting scenario format standards.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
                     * @return EnhanceScenarioType Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series (UHD TV shows and movies) obtains smooth UHD effect, targeting the demand for UHD video in broadcasting/OTT, and generates Ultra-High-Definition Standard Video at 4K 60fps HDR. It supports broadcasting scenario format standards.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
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
<li>HD_movie_series (UHD TV shows and movies) obtains smooth UHD effect, targeting the demand for UHD video in broadcasting/OTT, and generates Ultra-High-Definition Standard Video at 4K 60fps HDR. It supports broadcasting scenario format standards.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
                     * @param _enhanceScenarioType Enhancement scenario configuration. Valid values:
<li>common: common enhancement parameters, which are basic optimization parameters suitable for various video types, enhancing overall image quality.</li>
<li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li>
<li>short_play: enhance facial and subtitle details, emphasizing characters' facial expressions and subtitle clarity to improve the viewing experience.</li>
<li>short_video: optimize complex and diverse image quality issues, tailoring quality enhancements for the complex scenarios such as short videos to address various visual issues.</li>
<li>game: fix motion blur and enhance details, with a focus on enhancing the clarity of game details and restoring blurry areas during motions to make the image content during gaming clearer and richer.</li>
<li>HD_movie_series (UHD TV shows and movies) obtains smooth UHD effect, targeting the demand for UHD video in broadcasting/OTT, and generates Ultra-High-Definition Standard Video at 4K 60fps HDR. It supports broadcasting scenario format standards.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
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
                     * 获取Super-resolution configuration. If the source resolution is higher than the target resolution, the video will not be processed. Note that it cannot be enabled simultaneously with large model enhancement.
                     * @return SuperResolution Super-resolution configuration. If the source resolution is higher than the target resolution, the video will not be processed. Note that it cannot be enabled simultaneously with large model enhancement.
                     * 
                     */
                    SuperResolutionInfo GetSuperResolution() const;

                    /**
                     * 设置Super-resolution configuration. If the source resolution is higher than the target resolution, the video will not be processed. Note that it cannot be enabled simultaneously with large model enhancement.
                     * @param _superResolution Super-resolution configuration. If the source resolution is higher than the target resolution, the video will not be processed. Note that it cannot be enabled simultaneously with large model enhancement.
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
                     * @return Hdr HDR configuration.
                     * 
                     */
                    HDRInfo GetHdr() const;

                    /**
                     * 设置HDR configuration.
                     * @param _hdr HDR configuration.
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
                     * 获取Video noise reduction configuration. Note that it cannot be enabled simultaneously with large model enhancement.
                     * @return Denoise Video noise reduction configuration. Note that it cannot be enabled simultaneously with large model enhancement.
                     * 
                     */
                    VideoDenoiseInfo GetDenoise() const;

                    /**
                     * 设置Video noise reduction configuration. Note that it cannot be enabled simultaneously with large model enhancement.
                     * @param _denoise Video noise reduction configuration. Note that it cannot be enabled simultaneously with large model enhancement.
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
                     * @return ImageQualityEnhance Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
                     * 
                     */
                    ImageQualityEnhanceInfo GetImageQualityEnhance() const;

                    /**
                     * 设置Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
                     * @param _imageQualityEnhance Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
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
                     * @return ColorEnhance Color enhancement configuration.
                     * 
                     */
                    ColorEnhanceInfo GetColorEnhance() const;

                    /**
                     * 设置Color enhancement configuration.
                     * @param _colorEnhance Color enhancement configuration.
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
                     * @return LowLightEnhance Low-light enhancement configuration.
                     * 
                     */
                    LowLightEnhanceInfo GetLowLightEnhance() const;

                    /**
                     * 设置Low-light enhancement configuration.
                     * @param _lowLightEnhance Low-light enhancement configuration.
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
                     * 获取Scratch configuration.
                     * @return ScratchRepair Scratch configuration.
                     * 
                     */
                    ScratchRepairInfo GetScratchRepair() const;

                    /**
                     * 设置Scratch configuration.
                     * @param _scratchRepair Scratch configuration.
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
                     * @return ArtifactRepair Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
                     * 
                     */
                    ArtifactRepairInfo GetArtifactRepair() const;

                    /**
                     * 设置Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
                     * @param _artifactRepair Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
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
                     * 获取LLM enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.
                     * @return DiffusionEnhance LLM enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.
                     * 
                     */
                    DiffusionEnhanceInfo GetDiffusionEnhance() const;

                    /**
                     * 设置LLM enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.
                     * @param _diffusionEnhance LLM enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.
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
                     * 获取Frame interpolation frame rate configuration. Fractions are supported. Note that you can only specify either this parameter or FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.
                     * @return FrameRateWithDen Frame interpolation frame rate configuration. Fractions are supported. Note that you can only specify either this parameter or FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.
                     * 
                     */
                    FrameRateWithDenInfo GetFrameRateWithDen() const;

                    /**
                     * 设置Frame interpolation frame rate configuration. Fractions are supported. Note that you can only specify either this parameter or FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.
                     * @param _frameRateWithDen Frame interpolation frame rate configuration. Fractions are supported. Note that you can only specify either this parameter or FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.
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
<li>HD_movie_series (UHD TV shows and movies) obtains smooth UHD effect, targeting the demand for UHD video in broadcasting/OTT, and generates Ultra-High-Definition Standard Video at 4K 60fps HDR. It supports broadcasting scenario format standards.</li>
<li>LQ_material: low-definition material/old video restoration. It enhances overall resolution, and solves issues of old videos, such as low resolution, blur, distortion, scratches, and color temperature due to their age.</li>
<li>lecture: live shows, e-commerce, conferences, and lectures. It improves the face display effect and performs specific optimizations, including face region enhancement, noise reduction, and artifacts removal, for scenarios involving human explanation, such as live shows, e-commerce, conferences, and lectures.</li>
<li>Input of a null string indicates that the enhancement scenario is not used.</li>
                     */
                    std::string m_enhanceScenarioType;
                    bool m_enhanceScenarioTypeHasBeenSet;

                    /**
                     * Super-resolution configuration. If the source resolution is higher than the target resolution, the video will not be processed. Note that it cannot be enabled simultaneously with large model enhancement.
                     */
                    SuperResolutionInfo m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * HDR configuration.
                     */
                    HDRInfo m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * Video noise reduction configuration. Note that it cannot be enabled simultaneously with large model enhancement.
                     */
                    VideoDenoiseInfo m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Comprehensive enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
                     */
                    ImageQualityEnhanceInfo m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * Color enhancement configuration.
                     */
                    ColorEnhanceInfo m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * Low-light enhancement configuration.
                     */
                    LowLightEnhanceInfo m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * Scratch configuration.
                     */
                    ScratchRepairInfo m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * Artifacts removal configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured.
                     */
                    ArtifactRepairInfo m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

                    /**
                     * LLM enhancement configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.
                     */
                    DiffusionEnhanceInfo m_diffusionEnhance;
                    bool m_diffusionEnhanceHasBeenSet;

                    /**
                     * Frame interpolation frame rate configuration. Fractions are supported. Note that you can only specify either this parameter or FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.
                     */
                    FrameRateWithDenInfo m_frameRateWithDen;
                    bool m_frameRateWithDenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOENHANCECONFIG_H_
