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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPTRAFFICRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPTRAFFICRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Outbound content detection line (name + regular)
                */
                class TrafficSandboxDLPTrafficRuleItem : public AbstractModel
                {
                public:
                    TrafficSandboxDLPTrafficRuleItem();
                    ~TrafficSandboxDLPTrafficRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-rule name
                     * @return RuleName Sub-rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Sub-rule name
                     * @param _ruleName Sub-rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Regular expression content (Hyperscan-compatible)
                     * @return RuleContent Regular expression content (Hyperscan-compatible)
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置Regular expression content (Hyperscan-compatible)
                     * @param _ruleContent Regular expression content (Hyperscan-compatible)
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                private:

                    /**
                     * Sub-rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Regular expression content (Hyperscan-compatible)
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPTRAFFICRULEITEM_H_
