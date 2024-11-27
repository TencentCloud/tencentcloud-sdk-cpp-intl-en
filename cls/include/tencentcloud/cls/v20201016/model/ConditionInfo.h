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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONDITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONDITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 
                */
                class ConditionInfo : public AbstractModel
                {
                public:
                    ConditionInfo();
                    ~ConditionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Attributes 
                     * 
                     */
                    std::string GetAttributes() const;

                    /**
                     * 设置
                     * @param _attributes 
                     * 
                     */
                    void SetAttributes(const std::string& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Rule 
                     * 
                     */
                    uint64_t GetRule() const;

                    /**
                     * 设置
                     * @param _rule 
                     * 
                     */
                    void SetRule(const uint64_t& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConditionValue 
                     * 
                     */
                    std::string GetConditionValue() const;

                    /**
                     * 设置
                     * @param _conditionValue 
                     * 
                     */
                    void SetConditionValue(const std::string& _conditionValue);

                    /**
                     * 判断参数 ConditionValue 是否已赋值
                     * @return ConditionValue 是否已赋值
                     * 
                     */
                    bool ConditionValueHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_conditionValue;
                    bool m_conditionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONDITIONINFO_H_
