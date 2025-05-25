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
                     * 获取Image encoding configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EncodeConfig Image encoding configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置Image encoding configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _encodeConfig Image encoding configuration.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Image enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EnhanceConfig Image enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置Image enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _enhanceConfig Image enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Image erasing configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EraseConfig Image erasing configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ImageEraseConfig GetEraseConfig() const;

                    /**
                     * 设置Image erasing configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eraseConfig Image erasing configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEraseConfig(const ImageEraseConfig& _eraseConfig);

                    /**
                     * 判断参数 EraseConfig 是否已赋值
                     * @return EraseConfig 是否已赋值
                     * 
                     */
                    bool EraseConfigHasBeenSet() const;

                private:

                    /**
                     * Image encoding configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * Image enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * Image erasing configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ImageEraseConfig m_eraseConfig;
                    bool m_eraseConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
