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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyL7AccRule request structure.
                */
                class ModifyL7AccRuleRequest : public AbstractModel
                {
                public:
                    ModifyL7AccRuleRequest();
                    ~ModifyL7AccRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Rule to modify. You can first call the DescribeL7AccRules API to get the Ruleid of the rule to modify, then input the modified rule content. The original rule content will be overwritten.
                     * @return Rule Rule to modify. You can first call the DescribeL7AccRules API to get the Ruleid of the rule to modify, then input the modified rule content. The original rule content will be overwritten.
                     * 
                     */
                    RuleEngineItem GetRule() const;

                    /**
                     * 设置Rule to modify. You can first call the DescribeL7AccRules API to get the Ruleid of the rule to modify, then input the modified rule content. The original rule content will be overwritten.
                     * @param _rule Rule to modify. You can first call the DescribeL7AccRules API to get the Ruleid of the rule to modify, then input the modified rule content. The original rule content will be overwritten.
                     * 
                     */
                    void SetRule(const RuleEngineItem& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Rule to modify. You can first call the DescribeL7AccRules API to get the Ruleid of the rule to modify, then input the modified rule content. The original rule content will be overwritten.
                     */
                    RuleEngineItem m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_
