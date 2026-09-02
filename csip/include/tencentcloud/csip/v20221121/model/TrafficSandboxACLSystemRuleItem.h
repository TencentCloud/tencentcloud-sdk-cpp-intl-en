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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLSYSTEMRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLSYSTEMRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLRuleContentItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Data structure of the ACL system rule
                */
                class TrafficSandboxACLSystemRuleItem : public AbstractModel
                {
                public:
                    TrafficSandboxACLSystemRuleItem();
                    ~TrafficSandboxACLSystemRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取System rule ID
                     * @return ID System rule ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置System rule ID
                     * @param _iD System rule ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
                     * 获取System rule content
                     * @return RuleContent System rule content
                     * 
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> GetRuleContent() const;

                    /**
                     * 设置System rule content
                     * @param _ruleContent System rule content
                     * 
                     */
                    void SetRuleContent(const std::vector<TrafficSandboxACLRuleContentItem>& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                private:

                    /**
                     * System rule ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * System rule content
                     */
                    std::vector<TrafficSandboxACLRuleContentItem> m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLSYSTEMRULEITEM_H_
