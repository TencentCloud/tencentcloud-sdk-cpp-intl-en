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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESREQUEST_H_

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
                * DescribeSecurityRules request structure.
                */
                class DescribeSecurityRulesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityRulesRequest();
                    ~DescribeSecurityRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of security rule IDs. Up to 20 security rules are supported.
                     * @return SecurityRuleIds List of security rule IDs. Up to 20 security rules are supported.
                     * 
                     */
                    std::vector<std::string> GetSecurityRuleIds() const;

                    /**
                     * 设置List of security rule IDs. Up to 20 security rules are supported.
                     * @param _securityRuleIds List of security rule IDs. Up to 20 security rules are supported.
                     * 
                     */
                    void SetSecurityRuleIds(const std::vector<std::string>& _securityRuleIds);

                    /**
                     * 判断参数 SecurityRuleIds 是否已赋值
                     * @return SecurityRuleIds 是否已赋值
                     * 
                     */
                    bool SecurityRuleIdsHasBeenSet() const;

                private:

                    /**
                     * List of security rule IDs. Up to 20 security rules are supported.
                     */
                    std::vector<std::string> m_securityRuleIds;
                    bool m_securityRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESREQUEST_H_
