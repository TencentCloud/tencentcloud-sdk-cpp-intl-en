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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENHANCECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SuperResolutionConfig.h>
#include <tencentcloud/mps/v20190612/model/ColorEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/SharpEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/FaceEnhanceConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SuperResolution Super-resolution configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SuperResolutionConfig GetSuperResolution() const;

                    /**
                     * 设置Super-resolution configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _superResolution Super-resolution configuration.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * @return SharpEnhance 
                     * 
                     */
                    SharpEnhanceConfig GetSharpEnhance() const;

                    /**
                     * 设置
                     * @param _sharpEnhance 
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
                     * 获取
                     * @return FaceEnhance 
                     * 
                     */
                    FaceEnhanceConfig GetFaceEnhance() const;

                    /**
                     * 设置
                     * @param _faceEnhance 
                     * 
                     */
                    void SetFaceEnhance(const FaceEnhanceConfig& _faceEnhance);

                    /**
                     * 判断参数 FaceEnhance 是否已赋值
                     * @return FaceEnhance 是否已赋值
                     * 
                     */
                    bool FaceEnhanceHasBeenSet() const;

                private:

                    /**
                     * Super-resolution configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SuperResolutionConfig m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * 
                     */
                    ColorEnhanceConfig m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    SharpEnhanceConfig m_sharpEnhance;
                    bool m_sharpEnhanceHasBeenSet;

                    /**
                     * 
                     */
                    FaceEnhanceConfig m_faceEnhance;
                    bool m_faceEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENHANCECONFIG_H_
