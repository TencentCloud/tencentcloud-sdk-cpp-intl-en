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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEENHANCECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SuperResolutionInfo.h>
#include <tencentcloud/vod/v20180717/model/AdvancedSuperResolutionConfig.h>
#include <tencentcloud/vod/v20180717/model/ImageDenoiseConfig.h>
#include <tencentcloud/vod/v20180717/model/ImageQualityEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/ColorEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/SharpEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/LowLightEnhanceInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Image enhancement parameters
                */
                class ImageEnhanceConfig : public AbstractModel
                {
                public:
                    ImageEnhanceConfig();
                    ~ImageEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Super-resolution configuration.
                     * @return SuperResolution Super-resolution configuration.
                     * 
                     */
                    SuperResolutionInfo GetSuperResolution() const;

                    /**
                     * 设置Super-resolution configuration.
                     * @param _superResolution Super-resolution configuration.
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
                     * 获取Advanced super-resolution configuration.
                     * @return AdvancedSuperResolution Advanced super-resolution configuration.
                     * 
                     */
                    AdvancedSuperResolutionConfig GetAdvancedSuperResolution() const;

                    /**
                     * 设置Advanced super-resolution configuration.
                     * @param _advancedSuperResolution Advanced super-resolution configuration.
                     * 
                     */
                    void SetAdvancedSuperResolution(const AdvancedSuperResolutionConfig& _advancedSuperResolution);

                    /**
                     * 判断参数 AdvancedSuperResolution 是否已赋值
                     * @return AdvancedSuperResolution 是否已赋值
                     * 
                     */
                    bool AdvancedSuperResolutionHasBeenSet() const;

                    /**
                     * 获取Denoising configuration.
                     * @return Denoise Denoising configuration.
                     * 
                     */
                    ImageDenoiseConfig GetDenoise() const;

                    /**
                     * 设置Denoising configuration.
                     * @param _denoise Denoising configuration.
                     * 
                     */
                    void SetDenoise(const ImageDenoiseConfig& _denoise);

                    /**
                     * 判断参数 Denoise 是否已赋值
                     * @return Denoise 是否已赋值
                     * 
                     */
                    bool DenoiseHasBeenSet() const;

                    /**
                     * 获取Comprehensive enhancement configuration.
                     * @return ImageQualityEnhance Comprehensive enhancement configuration.
                     * 
                     */
                    ImageQualityEnhanceInfo GetImageQualityEnhance() const;

                    /**
                     * 设置Comprehensive enhancement configuration.
                     * @param _imageQualityEnhance Comprehensive enhancement configuration.
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
                     * 获取Detail enhancement configuration.
                     * @return SharpEnhance Detail enhancement configuration.
                     * 
                     */
                    SharpEnhanceInfo GetSharpEnhance() const;

                    /**
                     * 设置Detail enhancement configuration.
                     * @param _sharpEnhance Detail enhancement configuration.
                     * 
                     */
                    void SetSharpEnhance(const SharpEnhanceInfo& _sharpEnhance);

                    /**
                     * 判断参数 SharpEnhance 是否已赋值
                     * @return SharpEnhance 是否已赋值
                     * 
                     */
                    bool SharpEnhanceHasBeenSet() const;

                    /**
                     * 获取Face enhancement configuration.
                     * @return FaceEnhance Face enhancement configuration.
                     * 
                     */
                    FaceEnhanceInfo GetFaceEnhance() const;

                    /**
                     * 设置Face enhancement configuration.
                     * @param _faceEnhance Face enhancement configuration.
                     * 
                     */
                    void SetFaceEnhance(const FaceEnhanceInfo& _faceEnhance);

                    /**
                     * 判断参数 FaceEnhance 是否已赋值
                     * @return FaceEnhance 是否已赋值
                     * 
                     */
                    bool FaceEnhanceHasBeenSet() const;

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

                private:

                    /**
                     * Super-resolution configuration.
                     */
                    SuperResolutionInfo m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * Advanced super-resolution configuration.
                     */
                    AdvancedSuperResolutionConfig m_advancedSuperResolution;
                    bool m_advancedSuperResolutionHasBeenSet;

                    /**
                     * Denoising configuration.
                     */
                    ImageDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * Comprehensive enhancement configuration.
                     */
                    ImageQualityEnhanceInfo m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * Color enhancement configuration.
                     */
                    ColorEnhanceInfo m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * Detail enhancement configuration.
                     */
                    SharpEnhanceInfo m_sharpEnhance;
                    bool m_sharpEnhanceHasBeenSet;

                    /**
                     * Face enhancement configuration.
                     */
                    FaceEnhanceInfo m_faceEnhance;
                    bool m_faceEnhanceHasBeenSet;

                    /**
                     * Low-light enhancement configuration.
                     */
                    LowLightEnhanceInfo m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEENHANCECONFIG_H_
