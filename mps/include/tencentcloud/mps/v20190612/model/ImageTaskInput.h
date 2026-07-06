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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageEncodeConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageEraseConfig.h>
#include <tencentcloud/mps/v20190612/model/AiPosterSuiteConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image task input parameters
                */
                class ImageTaskInput : public AbstractModel
                {
                public:
                    ImageTaskInput();
                    ~ImageTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image encoding configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncodeConfig <p>Image encoding configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>Image encoding configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encodeConfig <p>Image encoding configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncodeConfig(const ImageEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnhanceConfig <p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enhanceConfig <p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image erasing configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EraseConfig <p>Image erasing configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageEraseConfig GetEraseConfig() const;

                    /**
                     * 设置<p>Image erasing configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eraseConfig <p>Image erasing configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEraseConfig(const ImageEraseConfig& _eraseConfig);

                    /**
                     * 判断参数 EraseConfig 是否已赋值
                     * @return EraseConfig 是否已赋值
                     * 
                     */
                    bool EraseConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return AiPosterSuiteConfig 
                     * 
                     */
                    AiPosterSuiteConfig GetAiPosterSuiteConfig() const;

                    /**
                     * 设置
                     * @param _aiPosterSuiteConfig 
                     * 
                     */
                    void SetAiPosterSuiteConfig(const AiPosterSuiteConfig& _aiPosterSuiteConfig);

                    /**
                     * 判断参数 AiPosterSuiteConfig 是否已赋值
                     * @return AiPosterSuiteConfig 是否已赋值
                     * 
                     */
                    bool AiPosterSuiteConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Image encoding configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>Image enhancement configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>Image erasing configuration.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageEraseConfig m_eraseConfig;
                    bool m_eraseConfigHasBeenSet;

                    /**
                     * 
                     */
                    AiPosterSuiteConfig m_aiPosterSuiteConfig;
                    bool m_aiPosterSuiteConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
