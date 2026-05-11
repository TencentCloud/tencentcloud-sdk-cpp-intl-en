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
                * 
                */
                class ImageEnhanceConfig : public AbstractModel
                {
                public:
                    ImageEnhanceConfig();
                    ~ImageEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return AdvancedSuperResolution 
                     * 
                     */
                    AdvancedSuperResolutionConfig GetAdvancedSuperResolution() const;

                    /**
                     * 设置
                     * @param _advancedSuperResolution 
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
                     * 获取
                     * @return Denoise 
                     * 
                     */
                    ImageDenoiseConfig GetDenoise() const;

                    /**
                     * 设置
                     * @param _denoise 
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
                     * @return SharpEnhance 
                     * 
                     */
                    SharpEnhanceInfo GetSharpEnhance() const;

                    /**
                     * 设置
                     * @param _sharpEnhance 
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
                     * 获取
                     * @return FaceEnhance 
                     * 
                     */
                    FaceEnhanceInfo GetFaceEnhance() const;

                    /**
                     * 设置
                     * @param _faceEnhance 
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

                private:

                    /**
                     * 
                     */
                    SuperResolutionInfo m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * 
                     */
                    AdvancedSuperResolutionConfig m_advancedSuperResolution;
                    bool m_advancedSuperResolutionHasBeenSet;

                    /**
                     * 
                     */
                    ImageDenoiseConfig m_denoise;
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
                    SharpEnhanceInfo m_sharpEnhance;
                    bool m_sharpEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    FaceEnhanceInfo m_faceEnhance;
                    bool m_faceEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    LowLightEnhanceInfo m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEENHANCECONFIG_H_
