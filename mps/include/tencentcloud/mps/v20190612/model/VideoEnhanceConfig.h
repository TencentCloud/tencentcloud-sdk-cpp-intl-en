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
                     * 获取
                     * @return FrameRate 
                     * 
                     */
                    FrameRateConfig GetFrameRate() const;

                    /**
                     * 设置
                     * @param _frameRate 
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
                     * 获取
                     * @return SuperResolution 
                     * 
                     */
                    SuperResolutionConfig GetSuperResolution() const;

                    /**
                     * 设置
                     * @param _superResolution 
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
                     * 获取
                     * @return Hdr 
                     * 
                     */
                    HdrConfig GetHdr() const;

                    /**
                     * 设置
                     * @param _hdr 
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
                     * 获取
                     * @return Denoise 
                     * 
                     */
                    VideoDenoiseConfig GetDenoise() const;

                    /**
                     * 设置
                     * @param _denoise 
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
                     * 获取
                     * @return ImageQualityEnhance 
                     * 
                     */
                    ImageQualityEnhanceConfig GetImageQualityEnhance() const;

                    /**
                     * 设置
                     * @param _imageQualityEnhance 
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
                     * 获取
                     * @return ColorEnhance 
                     * 
                     */
                    ColorEnhanceConfig GetColorEnhance() const;

                    /**
                     * 设置
                     * @param _colorEnhance 
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
                     * 获取
                     * @return LowLightEnhance 
                     * 
                     */
                    LowLightEnhanceConfig GetLowLightEnhance() const;

                    /**
                     * 设置
                     * @param _lowLightEnhance 
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
                     * 获取
                     * @return ScratchRepair 
                     * 
                     */
                    ScratchRepairConfig GetScratchRepair() const;

                    /**
                     * 设置
                     * @param _scratchRepair 
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
                     * 获取
                     * @return ArtifactRepair 
                     * 
                     */
                    ArtifactRepairConfig GetArtifactRepair() const;

                    /**
                     * 设置
                     * @param _artifactRepair 
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
                     * 获取
                     * @return EnhanceSceneType 
                     * 
                     */
                    std::string GetEnhanceSceneType() const;

                    /**
                     * 设置
                     * @param _enhanceSceneType 
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
                     * 获取
                     * @return DiffusionEnhance 
                     * 
                     */
                    DiffusionEnhanceConfig GetDiffusionEnhance() const;

                    /**
                     * 设置
                     * @param _diffusionEnhance 
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
                     * 获取
                     * @return FrameRateWithDen 
                     * 
                     */
                    FrameRateWithDenConfig GetFrameRateWithDen() const;

                    /**
                     * 设置
                     * @param _frameRateWithDen 
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
                     * 获取
                     * @return AiRestoration 
                     * 
                     */
                    AiRestorationConfig GetAiRestoration() const;

                    /**
                     * 设置
                     * @param _aiRestoration 
                     * 
                     */
                    void SetAiRestoration(const AiRestorationConfig& _aiRestoration);

                    /**
                     * 判断参数 AiRestoration 是否已赋值
                     * @return AiRestoration 是否已赋值
                     * 
                     */
                    bool AiRestorationHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    FrameRateConfig m_frameRate;
                    bool m_frameRateHasBeenSet;

                    /**
                     * 
                     */
                    SuperResolutionConfig m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * 
                     */
                    HdrConfig m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * 
                     */
                    VideoDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * 
                     */
                    ImageQualityEnhanceConfig m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    ColorEnhanceConfig m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    LowLightEnhanceConfig m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    ScratchRepairConfig m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * 
                     */
                    ArtifactRepairConfig m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_enhanceSceneType;
                    bool m_enhanceSceneTypeHasBeenSet;

                    /**
                     * 
                     */
                    DiffusionEnhanceConfig m_diffusionEnhance;
                    bool m_diffusionEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    FrameRateWithDenConfig m_frameRateWithDen;
                    bool m_frameRateWithDenHasBeenSet;

                    /**
                     * 
                     */
                    AiRestorationConfig m_aiRestoration;
                    bool m_aiRestorationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOENHANCECONFIG_H_
