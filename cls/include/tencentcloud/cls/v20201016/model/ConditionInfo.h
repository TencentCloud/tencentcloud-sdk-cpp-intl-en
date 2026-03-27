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
                * Authentication-free condition information
                */
                class ConditionInfo : public AbstractModel
                {
                public:
                    ConditionInfo();
                    ~ConditionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Condition attribute, currently supports only VpcID
                     * @return Attributes Condition attribute, currently supports only VpcID
                     * 
                     */
                    std::string GetAttributes() const;

                    /**
                     * 设置Condition attribute, currently supports only VpcID
                     * @param _attributes Condition attribute, currently supports only VpcID
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
                     * 获取Condition rule, 1: equal to, 2: not equal to
                     * @return Rule Condition rule, 1: equal to, 2: not equal to
                     * 
                     */
                    uint64_t GetRule() const;

                    /**
                     * 设置Condition rule, 1: equal to, 2: not equal to
                     * @param _rule Condition rule, 1: equal to, 2: not equal to
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
                     * 获取Value of the corresponding condition attribute
                     * @return ConditionValue Value of the corresponding condition attribute
                     * 
                     */
                    std::string GetConditionValue() const;

                    /**
                     * 设置Value of the corresponding condition attribute
                     * @param _conditionValue Value of the corresponding condition attribute
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
                     * Condition attribute, currently supports only VpcID
                     */
                    std::string m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * Condition rule, 1: equal to, 2: not equal to
                     */
                    uint64_t m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Value of the corresponding condition attribute
                     */
                    std::string m_conditionValue;
                    bool m_conditionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONDITIONINFO_H_
