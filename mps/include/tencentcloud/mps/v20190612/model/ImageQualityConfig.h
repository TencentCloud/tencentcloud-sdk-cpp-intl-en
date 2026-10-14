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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEQUALITYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEQUALITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image quality assessment task.
                */
                class ImageQualityConfig : public AbstractModel
                {
                public:
                    ImageQualityConfig();
                    ~ImageQualityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image quality assessment dimensions</p><p>Enumeration values:</p><ul><li>Brightness: Brightness assessment</li><li>Contrast: Contrast assessment</li><li>Sharpness: Clarity assessment</li><li>IQA: Comprehensive quality assessment</li></ul>
                     * @return Attributes <p>Image quality assessment dimensions</p><p>Enumeration values:</p><ul><li>Brightness: Brightness assessment</li><li>Contrast: Contrast assessment</li><li>Sharpness: Clarity assessment</li><li>IQA: Comprehensive quality assessment</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAttributes() const;

                    /**
                     * 设置<p>Image quality assessment dimensions</p><p>Enumeration values:</p><ul><li>Brightness: Brightness assessment</li><li>Contrast: Contrast assessment</li><li>Sharpness: Clarity assessment</li><li>IQA: Comprehensive quality assessment</li></ul>
                     * @param _attributes <p>Image quality assessment dimensions</p><p>Enumeration values:</p><ul><li>Brightness: Brightness assessment</li><li>Contrast: Contrast assessment</li><li>Sharpness: Clarity assessment</li><li>IQA: Comprehensive quality assessment</li></ul>
                     * 
                     */
                    void SetAttributes(const std::vector<std::string>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                private:

                    /**
                     * <p>Image quality assessment dimensions</p><p>Enumeration values:</p><ul><li>Brightness: Brightness assessment</li><li>Contrast: Contrast assessment</li><li>Sharpness: Clarity assessment</li><li>IQA: Comprehensive quality assessment</li></ul>
                     */
                    std::vector<std::string> m_attributes;
                    bool m_attributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEQUALITYCONFIG_H_
