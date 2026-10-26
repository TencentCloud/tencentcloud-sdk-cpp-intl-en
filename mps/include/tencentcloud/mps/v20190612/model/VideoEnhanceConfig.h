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
#include <tencentcloud/mps/v20190612/model/AiRestorationConfig.h>
#include <tencentcloud/mps/v20190612/model/DiffusionEnhanceV2Config.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Video enhancement configuration
                */
                class VideoEnhanceConfig : public AbstractModel
                {
                public:
                    VideoEnhanceConfig();
                    ~VideoEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.</p>
                     * @return FrameRate <p>Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.</p>
                     * 
                     */
                    FrameRateConfig GetFrameRate() const;

                    /**
                     * 设置<p>Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.</p>
                     * @param _frameRate <p>Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.</p>
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
                     * 获取<p>Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     * @return SuperResolution <p>Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     * 
                     */
                    SuperResolutionConfig GetSuperResolution() const;

                    /**
                     * 设置<p>Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     * @param _superResolution <p>Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
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
                     * 获取<p>HDR configuration.</p>
                     * @return Hdr <p>HDR configuration.</p>
                     * 
                     */
                    HdrConfig GetHdr() const;

                    /**
                     * 设置<p>HDR configuration.</p>
                     * @param _hdr <p>HDR configuration.</p>
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
                     * 获取<p>Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     * @return Denoise <p>Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     * 
                     */
                    VideoDenoiseConfig GetDenoise() const;

                    /**
                     * 设置<p>Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     * @param _denoise <p>Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
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
                     * 获取<p>Comprehensive enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     * @return ImageQualityEnhance <p>Comprehensive enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     * 
                     */
                    ImageQualityEnhanceConfig GetImageQualityEnhance() const;

                    /**
                     * 设置<p>Comprehensive enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     * @param _imageQualityEnhance <p>Comprehensive enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
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
                     * 获取<p>Color enhancement configuration.</p>
                     * @return ColorEnhance <p>Color enhancement configuration.</p>
                     * 
                     */
                    ColorEnhanceConfig GetColorEnhance() const;

                    /**
                     * 设置<p>Color enhancement configuration.</p>
                     * @param _colorEnhance <p>Color enhancement configuration.</p>
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
                     * 获取<p>Low-light enhancement configuration.</p>
                     * @return LowLightEnhance <p>Low-light enhancement configuration.</p>
                     * 
                     */
                    LowLightEnhanceConfig GetLowLightEnhance() const;

                    /**
                     * 设置<p>Low-light enhancement configuration.</p>
                     * @param _lowLightEnhance <p>Low-light enhancement configuration.</p>
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
                     * 获取<p>Scratch removal configuration.</p>
                     * @return ScratchRepair <p>Scratch removal configuration.</p>
                     * 
                     */
                    ScratchRepairConfig GetScratchRepair() const;

                    /**
                     * 设置<p>Scratch removal configuration.</p>
                     * @param _scratchRepair <p>Scratch removal configuration.</p>
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
                     * 获取<p>Artifacts removal configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     * @return ArtifactRepair <p>Artifacts removal configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     * 
                     */
                    ArtifactRepairConfig GetArtifactRepair() const;

                    /**
                     * 设置<p>Artifacts removal configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     * @param _artifactRepair <p>Artifacts removal configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
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
                     * 获取<p>Enhancement scenario configuration. Available values:</p><li>common: general enhancement parameters, basic optimization parameters suitable for various video types, improving overall video quality.</li><li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li><li>short_play (mini-drama & AI virtual human drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity, improving the viewing experience.</li><li>AI_comic (AI comic drama): enhances comic-style image details.</li><li>short_video: optimizes complex and diverse video quality issues, optimizes video quality for complex short video scenarios, and resolves various visual issues.</li><li>game (game video): repairs motion blur and enhances details, focusing on enhancing the clarity of game details, restoring motion blur areas, and making the game screen content clearer and richer.</li><li>HD_movie_series (UHD TV shows and movies): obtains UHD smooth effects, generates 4K 60fps HDR UHD standard videos for broadcasting/OTT UHD video demands. Supports broadcasting scenario format standards.</li><li>LQ_material (low-quality material/classic film restoration): overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li><li>lecture (live show/e-commerce/conference/lecture): beautifies and enhances face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain, such as live shows/e-commerce/conferences/lectures.</li><li>An empty string indicates non-use of enhancement scenarios.</li>
                     * @return EnhanceSceneType <p>Enhancement scenario configuration. Available values:</p><li>common: general enhancement parameters, basic optimization parameters suitable for various video types, improving overall video quality.</li><li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li><li>short_play (mini-drama & AI virtual human drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity, improving the viewing experience.</li><li>AI_comic (AI comic drama): enhances comic-style image details.</li><li>short_video: optimizes complex and diverse video quality issues, optimizes video quality for complex short video scenarios, and resolves various visual issues.</li><li>game (game video): repairs motion blur and enhances details, focusing on enhancing the clarity of game details, restoring motion blur areas, and making the game screen content clearer and richer.</li><li>HD_movie_series (UHD TV shows and movies): obtains UHD smooth effects, generates 4K 60fps HDR UHD standard videos for broadcasting/OTT UHD video demands. Supports broadcasting scenario format standards.</li><li>LQ_material (low-quality material/classic film restoration): overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li><li>lecture (live show/e-commerce/conference/lecture): beautifies and enhances face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain, such as live shows/e-commerce/conferences/lectures.</li><li>An empty string indicates non-use of enhancement scenarios.</li>
                     * 
                     */
                    std::string GetEnhanceSceneType() const;

                    /**
                     * 设置<p>Enhancement scenario configuration. Available values:</p><li>common: general enhancement parameters, basic optimization parameters suitable for various video types, improving overall video quality.</li><li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li><li>short_play (mini-drama & AI virtual human drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity, improving the viewing experience.</li><li>AI_comic (AI comic drama): enhances comic-style image details.</li><li>short_video: optimizes complex and diverse video quality issues, optimizes video quality for complex short video scenarios, and resolves various visual issues.</li><li>game (game video): repairs motion blur and enhances details, focusing on enhancing the clarity of game details, restoring motion blur areas, and making the game screen content clearer and richer.</li><li>HD_movie_series (UHD TV shows and movies): obtains UHD smooth effects, generates 4K 60fps HDR UHD standard videos for broadcasting/OTT UHD video demands. Supports broadcasting scenario format standards.</li><li>LQ_material (low-quality material/classic film restoration): overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li><li>lecture (live show/e-commerce/conference/lecture): beautifies and enhances face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain, such as live shows/e-commerce/conferences/lectures.</li><li>An empty string indicates non-use of enhancement scenarios.</li>
                     * @param _enhanceSceneType <p>Enhancement scenario configuration. Available values:</p><li>common: general enhancement parameters, basic optimization parameters suitable for various video types, improving overall video quality.</li><li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li><li>short_play (mini-drama & AI virtual human drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity, improving the viewing experience.</li><li>AI_comic (AI comic drama): enhances comic-style image details.</li><li>short_video: optimizes complex and diverse video quality issues, optimizes video quality for complex short video scenarios, and resolves various visual issues.</li><li>game (game video): repairs motion blur and enhances details, focusing on enhancing the clarity of game details, restoring motion blur areas, and making the game screen content clearer and richer.</li><li>HD_movie_series (UHD TV shows and movies): obtains UHD smooth effects, generates 4K 60fps HDR UHD standard videos for broadcasting/OTT UHD video demands. Supports broadcasting scenario format standards.</li><li>LQ_material (low-quality material/classic film restoration): overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li><li>lecture (live show/e-commerce/conference/lecture): beautifies and enhances face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain, such as live shows/e-commerce/conferences/lectures.</li><li>An empty string indicates non-use of enhancement scenarios.</li>
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
                     * 获取<p>Large model enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution and noise reduction.</p>
                     * @return DiffusionEnhance <p>Large model enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution and noise reduction.</p>
                     * 
                     */
                    DiffusionEnhanceConfig GetDiffusionEnhance() const;

                    /**
                     * 设置<p>Large model enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution and noise reduction.</p>
                     * @param _diffusionEnhance <p>Large model enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution and noise reduction.</p>
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
                     * 获取<p>New frame interpolation frame rate configuration, supporting fractions. Note that you can only choose one between this and FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.</p>
                     * @return FrameRateWithDen <p>New frame interpolation frame rate configuration, supporting fractions. Note that you can only choose one between this and FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.</p>
                     * 
                     */
                    FrameRateWithDenConfig GetFrameRateWithDen() const;

                    /**
                     * 设置<p>New frame interpolation frame rate configuration, supporting fractions. Note that you can only choose one between this and FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.</p>
                     * @param _frameRateWithDen <p>New frame interpolation frame rate configuration, supporting fractions. Note that you can only choose one between this and FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.</p>
                     * 
                     */
                    void SetFrameRateWithDen(const FrameRateWithDenConfig& _frameRateWithDen);

                    /**
                     * 判断参数 FrameRateWithDen 是否已赋值
                     * @return FrameRateWithDen 是否已赋值
                     * 
                     */
                    bool FrameRateWithDenHasBeenSet() const;

                    /**
                     * 获取<p>Large model repair configuration. Note that at most one of large model, comprehensive enhancement, and jitter removal can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.</p>
                     * @return AiRestoration <p>Large model repair configuration. Note that at most one of large model, comprehensive enhancement, and jitter removal can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.</p>
                     * 
                     */
                    AiRestorationConfig GetAiRestoration() const;

                    /**
                     * 设置<p>Large model repair configuration. Note that at most one of large model, comprehensive enhancement, and jitter removal can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.</p>
                     * @param _aiRestoration <p>Large model repair configuration. Note that at most one of large model, comprehensive enhancement, and jitter removal can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.</p>
                     * 
                     */
                    void SetAiRestoration(const AiRestorationConfig& _aiRestoration);

                    /**
                     * 判断参数 AiRestoration 是否已赋值
                     * @return AiRestoration 是否已赋值
                     * 
                     */
                    bool AiRestorationHasBeenSet() const;

                    /**
                     * 获取<p>LLM enhancement professional edition configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.</p>
                     * @return DiffusionEnhanceV2 <p>LLM enhancement professional edition configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.</p>
                     * 
                     */
                    DiffusionEnhanceV2Config GetDiffusionEnhanceV2() const;

                    /**
                     * 设置<p>LLM enhancement professional edition configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.</p>
                     * @param _diffusionEnhanceV2 <p>LLM enhancement professional edition configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.</p>
                     * 
                     */
                    void SetDiffusionEnhanceV2(const DiffusionEnhanceV2Config& _diffusionEnhanceV2);

                    /**
                     * 判断参数 DiffusionEnhanceV2 是否已赋值
                     * @return DiffusionEnhanceV2 是否已赋值
                     * 
                     */
                    bool DiffusionEnhanceV2HasBeenSet() const;

                private:

                    /**
                     * <p>Frame rate configuration (old) for the frame interpolation. New users are recommended to use FrameRateWithDen for configuring the frame rate of frame interpolation, which supports fractions and provides better results. Note that FrameRate and FrameRateWithDen are mutually exclusive; configuring both simultaneously may cause task failures. The configuration does not take effect if the source frame rate is greater than or equal to the target frame rate.</p>
                     */
                    FrameRateConfig m_frameRate;
                    bool m_frameRateHasBeenSet;

                    /**
                     * <p>Super-resolution configuration. The video is not processed when the source resolution is higher than the target resolution. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     */
                    SuperResolutionConfig m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * <p>HDR configuration.</p>
                     */
                    HdrConfig m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * <p>Video noise reduction configuration. Note that it cannot be enabled simultaneously with LLM enhancement.</p>
                     */
                    VideoDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * <p>Comprehensive enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     */
                    ImageQualityEnhanceConfig m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * <p>Color enhancement configuration.</p>
                     */
                    ColorEnhanceConfig m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * <p>Low-light enhancement configuration.</p>
                     */
                    LowLightEnhanceConfig m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * <p>Scratch removal configuration.</p>
                     */
                    ScratchRepairConfig m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * <p>Artifacts removal configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured.</p>
                     */
                    ArtifactRepairConfig m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

                    /**
                     * <p>Enhancement scenario configuration. Available values:</p><li>common: general enhancement parameters, basic optimization parameters suitable for various video types, improving overall video quality.</li><li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li><li>short_play (mini-drama & AI virtual human drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity, improving the viewing experience.</li><li>AI_comic (AI comic drama): enhances comic-style image details.</li><li>short_video: optimizes complex and diverse video quality issues, optimizes video quality for complex short video scenarios, and resolves various visual issues.</li><li>game (game video): repairs motion blur and enhances details, focusing on enhancing the clarity of game details, restoring motion blur areas, and making the game screen content clearer and richer.</li><li>HD_movie_series (UHD TV shows and movies): obtains UHD smooth effects, generates 4K 60fps HDR UHD standard videos for broadcasting/OTT UHD video demands. Supports broadcasting scenario format standards.</li><li>LQ_material (low-quality material/classic film restoration): overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li><li>lecture (live show/e-commerce/conference/lecture): beautifies and enhances face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain, such as live shows/e-commerce/conferences/lectures.</li><li>An empty string indicates non-use of enhancement scenarios.</li>
                     */
                    std::string m_enhanceSceneType;
                    bool m_enhanceSceneTypeHasBeenSet;

                    /**
                     * <p>Large model enhancement configuration. Note that only one of the three items, large model, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super resolution and noise reduction.</p>
                     */
                    DiffusionEnhanceConfig m_diffusionEnhance;
                    bool m_diffusionEnhanceHasBeenSet;

                    /**
                     * <p>New frame interpolation frame rate configuration, supporting fractions. Note that you can only choose one between this and FrameRate. The capacity will not take effect when the source frame rate is equal to or greater than the target frame rate.</p>
                     */
                    FrameRateWithDenConfig m_frameRateWithDen;
                    bool m_frameRateWithDenHasBeenSet;

                    /**
                     * <p>Large model repair configuration. Note that at most one of large model, comprehensive enhancement, and jitter removal can be configured. It cannot be enabled simultaneously with super resolution or noise reduction.</p>
                     */
                    AiRestorationConfig m_aiRestoration;
                    bool m_aiRestorationHasBeenSet;

                    /**
                     * <p>LLM enhancement professional edition configuration. Note that only one of the three items, LLM enhancement, comprehensive enhancement, and artifacts removal, can be configured. It cannot be enabled simultaneously with super-resolution and noise reduction.</p>
                     */
                    DiffusionEnhanceV2Config m_diffusionEnhanceV2;
                    bool m_diffusionEnhanceV2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOENHANCECONFIG_H_
