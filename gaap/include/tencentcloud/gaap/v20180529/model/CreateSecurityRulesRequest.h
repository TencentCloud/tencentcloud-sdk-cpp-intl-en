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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleIn.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateSecurityRules request structure.
                */
                class CreateSecurityRulesRequest : public AbstractModel
                {
                public:
                    CreateSecurityRulesRequest();
                    ~CreateSecurityRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security policy ID
                     * @return PolicyId Security policy ID
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID
                     * @param PolicyId Security policy ID
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取List of access rules
                     * @return RuleList List of access rules
                     */
                    std::vector<SecurityPolicyRuleIn> GetRuleList() const;

                    /**
                     * 设置List of access rules
                     * @param RuleList List of access rules
                     */
                    void SetRuleList(const std::vector<SecurityPolicyRuleIn>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * Security policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * List of access rules
                     */
                    std::vector<SecurityPolicyRuleIn> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESREQUEST_H_
