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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEPOLICY_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Protection policy
                */
                class TemplatePolicy : public AbstractModel
                {
                public:
                    TemplatePolicy();
                    ~TemplatePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protection policy ID list
                     * @return TemplatePolicyIdList Protection policy ID list
                     * 
                     */
                    std::vector<std::string> GetTemplatePolicyIdList() const;

                    /**
                     * 设置Protection policy ID list
                     * @param _templatePolicyIdList Protection policy ID list
                     * 
                     */
                    void SetTemplatePolicyIdList(const std::vector<std::string>& _templatePolicyIdList);

                    /**
                     * 判断参数 TemplatePolicyIdList 是否已赋值
                     * @return TemplatePolicyIdList 是否已赋值
                     * 
                     */
                    bool TemplatePolicyIdListHasBeenSet() const;

                    /**
                     * 获取Policy rules
                     * @return TemplatePolicyRule Policy rules
                     * 
                     */
                    std::string GetTemplatePolicyRule() const;

                    /**
                     * 设置Policy rules
                     * @param _templatePolicyRule Policy rules
                     * 
                     */
                    void SetTemplatePolicyRule(const std::string& _templatePolicyRule);

                    /**
                     * 判断参数 TemplatePolicyRule 是否已赋值
                     * @return TemplatePolicyRule 是否已赋值
                     * 
                     */
                    bool TemplatePolicyRuleHasBeenSet() const;

                    /**
                     * 获取Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
                     * @return TemplatePolicyDealType Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
                     * 
                     */
                    int64_t GetTemplatePolicyDealType() const;

                    /**
                     * 设置Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
                     * @param _templatePolicyDealType Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
                     * 
                     */
                    void SetTemplatePolicyDealType(const int64_t& _templatePolicyDealType);

                    /**
                     * 判断参数 TemplatePolicyDealType 是否已赋值
                     * @return TemplatePolicyDealType 是否已赋值
                     * 
                     */
                    bool TemplatePolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * Protection policy ID list
                     */
                    std::vector<std::string> m_templatePolicyIdList;
                    bool m_templatePolicyIdListHasBeenSet;

                    /**
                     * Policy rules
                     */
                    std::string m_templatePolicyRule;
                    bool m_templatePolicyRuleHasBeenSet;

                    /**
                     * Process method when the guardrail policy takes effect. 1: sequential execution, 2: pausing.
                     */
                    int64_t m_templatePolicyDealType;
                    bool m_templatePolicyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEPOLICY_H_
