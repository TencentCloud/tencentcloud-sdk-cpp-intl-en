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
#include <tencentcloud/mps/v20190612/model/SharpEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/FaceEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/LowLightEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ScratchRepairConfig.h>
#include <tencentcloud/mps/v20190612/model/ArtifactRepairConfig.h>


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
                     * 获取Frame interpolation configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FrameRate Frame interpolation configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FrameRateConfig GetFrameRate() const;

                    /**
                     * 设置Frame interpolation configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _frameRate Frame interpolation configuration.
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
                     * 获取Super resolution configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuperResolution Super resolution configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SuperResolutionConfig GetSuperResolution() const;

                    /**
                     * 设置Super resolution configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _superResolution Super resolution configuration.
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
                     * 获取Image noise removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Denoise Image noise removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoDenoiseConfig GetDenoise() const;

                    /**
                     * 设置Image noise removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _denoise Image noise removal configuration.
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
                     * 获取Overall enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageQualityEnhance Overall enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageQualityEnhanceConfig GetImageQualityEnhance() const;

                    /**
                     * 设置Overall enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageQualityEnhance Overall enhancement configuration.
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
                     * 获取Detail enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SharpEnhance Detail enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SharpEnhanceConfig GetSharpEnhance() const;

                    /**
                     * 设置Detail enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sharpEnhance Detail enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharpEnhance(const SharpEnhanceConfig& _sharpEnhance);

                    /**
                     * 判断参数 SharpEnhance 是否已赋值
                     * @return SharpEnhance 是否已赋值
                     * 
                     */
                    bool SharpEnhanceHasBeenSet() const;

                    /**
                     * 获取Face enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FaceEnhance Face enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FaceEnhanceConfig GetFaceEnhance() const;

                    /**
                     * 设置Face enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _faceEnhance Face enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFaceEnhance(const FaceEnhanceConfig& _faceEnhance);

                    /**
                     * 判断参数 FaceEnhance 是否已赋值
                     * @return FaceEnhance 是否已赋值
                     * 
                     */
                    bool FaceEnhanceHasBeenSet() const;

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
                     * 获取Artifact removal (smoothing) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ArtifactRepair Artifact removal (smoothing) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ArtifactRepairConfig GetArtifactRepair() const;

                    /**
                     * 设置Artifact removal (smoothing) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _artifactRepair Artifact removal (smoothing) configuration.
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

                private:

                    /**
                     * Frame interpolation configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FrameRateConfig m_frameRate;
                    bool m_frameRateHasBeenSet;

                    /**
                     * Super resolution configuration.
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
                     * Image noise removal configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Overall enhancement configuration.
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
                     * Detail enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SharpEnhanceConfig m_sharpEnhance;
                    bool m_sharpEnhanceHasBeenSet;

                    /**
                     * Face enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FaceEnhanceConfig m_faceEnhance;
                    bool m_faceEnhanceHasBeenSet;

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
                     * Artifact removal (smoothing) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ArtifactRepairConfig m_artifactRepair;
                    bool m_artifactRepairHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOENHANCECONFIG_H_
