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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETESECURITYRULESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETESECURITYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteSecurityRules request structure.
                */
                class DeleteSecurityRulesRequest : public AbstractModel
                {
                public:
                    DeleteSecurityRulesRequest();
                    ~DeleteSecurityRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security policy ID
                     * @return PolicyId Security policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID
                     * @param _policyId Security policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取List of access rule IDs
                     * @return RuleIdList List of access rule IDs
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置List of access rule IDs
                     * @param _ruleIdList List of access rule IDs
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * Security policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * List of access rule IDs
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETESECURITYRULESREQUEST_H_
