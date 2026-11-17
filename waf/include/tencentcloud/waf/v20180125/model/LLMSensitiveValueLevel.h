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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMSENSITIVEVALUELEVEL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMSENSITIVEVALUELEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Sensitive information result structure
                */
                class LLMSensitiveValueLevel : public AbstractModel
                {
                public:
                    LLMSensitiveValueLevel();
                    ~LLMSensitiveValueLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sensitive data labels, such as politics and pornography.
                     * @return Label Sensitive data labels, such as politics and pornography.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Sensitive data labels, such as politics and pornography.
                     * @param _label Sensitive data labels, such as politics and pornography.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Sensitive data level. 250, 300, and 400 represent ultra-strict, strict, and standard levels respectively.
                     * @return Level Sensitive data level. 250, 300, and 400 represent ultra-strict, strict, and standard levels respectively.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Sensitive data level. 250, 300, and 400 represent ultra-strict, strict, and standard levels respectively.
                     * @param _level Sensitive data level. 250, 300, and 400 represent ultra-strict, strict, and standard levels respectively.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * Sensitive data labels, such as politics and pornography.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Sensitive data level. 250, 300, and 400 represent ultra-strict, strict, and standard levels respectively.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMSENSITIVEVALUELEVEL_H_
