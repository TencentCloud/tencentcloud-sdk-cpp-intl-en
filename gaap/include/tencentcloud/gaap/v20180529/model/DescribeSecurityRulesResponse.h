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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleOut.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeSecurityRules response structure.
                */
                class DescribeSecurityRulesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityRulesResponse();
                    ~DescribeSecurityRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of returned security rules.
                     * @return TotalCount The number of returned security rules.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of returned security rules.
                     * @return SecurityRuleSet List of returned security rules.
                     * 
                     */
                    std::vector<SecurityPolicyRuleOut> GetSecurityRuleSet() const;

                    /**
                     * 判断参数 SecurityRuleSet 是否已赋值
                     * @return SecurityRuleSet 是否已赋值
                     * 
                     */
                    bool SecurityRuleSetHasBeenSet() const;

                private:

                    /**
                     * The number of returned security rules.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of returned security rules.
                     */
                    std::vector<SecurityPolicyRuleOut> m_securityRuleSet;
                    bool m_securityRuleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESRESPONSE_H_
