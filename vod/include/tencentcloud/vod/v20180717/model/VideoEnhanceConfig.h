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
                * 
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
                     * @return EnhanceScenarioType 
                     * 
                     */
                    std::string GetEnhanceScenarioType() const;

                    /**
                     * 设置
                     * @param _enhanceScenarioType 
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
                     * 获取
                     * @return SuperResolution 
                     * 
                     */
                    SuperResolutionInfo GetSuperResolution() const;

                    /**
                     * 设置
                     * @param _superResolution 
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
                     * 获取
                     * @return Hdr 
                     * 
                     */
                    HDRInfo GetHdr() const;

                    /**
                     * 设置
                     * @param _hdr 
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
                     * 获取
                     * @return Denoise 
                     * 
                     */
                    VideoDenoiseInfo GetDenoise() const;

                    /**
                     * 设置
                     * @param _denoise 
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
                     * 获取
                     * @return ImageQualityEnhance 
                     * 
                     */
                    ImageQualityEnhanceInfo GetImageQualityEnhance() const;

                    /**
                     * 设置
                     * @param _imageQualityEnhance 
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
                     * 获取
                     * @return ColorEnhance 
                     * 
                     */
                    ColorEnhanceInfo GetColorEnhance() const;

                    /**
                     * 设置
                     * @param _colorEnhance 
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
                     * 获取
                     * @return LowLightEnhance 
                     * 
                     */
                    LowLightEnhanceInfo GetLowLightEnhance() const;

                    /**
                     * 设置
                     * @param _lowLightEnhance 
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
                     * 获取
                     * @return ScratchRepair 
                     * 
                     */
                    ScratchRepairInfo GetScratchRepair() const;

                    /**
                     * 设置
                     * @param _scratchRepair 
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
                     * 获取
                     * @return ArtifactRepair 
                     * 
                     */
                    ArtifactRepairInfo GetArtifactRepair() const;

                    /**
                     * 设置
                     * @param _artifactRepair 
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
                     * 获取
                     * @return DiffusionEnhance 
                     * 
                     */
                    DiffusionEnhanceInfo GetDiffusionEnhance() const;

                    /**
                     * 设置
                     * @param _diffusionEnhance 
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
                     * 获取
                     * @return FrameRateWithDen 
                     * 
                     */
                    FrameRateWithDenInfo GetFrameRateWithDen() const;

                    /**
                     * 设置
                     * @param _frameRateWithDen 
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
                     * 
                     */
                    std::string m_enhanceScenarioType;
                    bool m_enhanceScenarioTypeHasBeenSet;

                    /**
                     * 
                     */
                    SuperResolutionInfo m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * 
                     */
                    HDRInfo m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * 
                     */
                    VideoDenoiseInfo m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * 
                     */
                    ImageQualityEnhanceInfo m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    ColorEnhanceInfo m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    LowLightEnhanceInfo m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    ScratchRepairInfo m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * 
                     */
                    ArtifactRepairInfo m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

                    /**
                     * 
                     */
                    DiffusionEnhanceInfo m_diffusionEnhance;
                    bool m_diffusionEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    FrameRateWithDenInfo m_frameRateWithDen;
                    bool m_frameRateWithDenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOENHANCECONFIG_H_
