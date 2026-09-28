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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/SecurityPolicyInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicies response structure.
                */
                class DescribeSecurityPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPoliciesResponse();
                    ~DescribeSecurityPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token for the next query.

-If the return value is not empty, it means there is more data. You can use this value as the NextToken parameter in the next request to continue querying.
-If the return value is empty or this field is not returned, it means the current page is the last page.

                     * @return NextToken Token for the next query.

-If the return value is not empty, it means there is more data. You can use this value as the NextToken parameter in the next request to continue querying.
-If the return value is empty or this field is not returned, it means the current page is the last page.

                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Information list of security policies. Contains detailed configuration of each security policy, such as policy ID, name, TLS version, and encryption suite.

                     * @return SecurityPolicies Information list of security policies. Contains detailed configuration of each security policy, such as policy ID, name, TLS version, and encryption suite.

                     * 
                     */
                    std::vector<SecurityPolicyInfo> GetSecurityPolicies() const;

                    /**
                     * 判断参数 SecurityPolicies 是否已赋值
                     * @return SecurityPolicies 是否已赋值
                     * 
                     */
                    bool SecurityPoliciesHasBeenSet() const;

                    /**
                     * 获取Total number of security policies that meet filtering criteria.

**Description:** This value indicates the total record count that meets the query condition, not the number of records returned this time. It can be used to calculate pagination information.

                     * @return TotalCount Total number of security policies that meet filtering criteria.

**Description:** This value indicates the total record count that meets the query condition, not the number of records returned this time. It can be used to calculate pagination information.

                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Token for the next query.

-If the return value is not empty, it means there is more data. You can use this value as the NextToken parameter in the next request to continue querying.
-If the return value is empty or this field is not returned, it means the current page is the last page.

                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Information list of security policies. Contains detailed configuration of each security policy, such as policy ID, name, TLS version, and encryption suite.

                     */
                    std::vector<SecurityPolicyInfo> m_securityPolicies;
                    bool m_securityPoliciesHasBeenSet;

                    /**
                     * Total number of security policies that meet filtering criteria.

**Description:** This value indicates the total record count that meets the query condition, not the number of records returned this time. It can be used to calculate pagination information.

                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESRESPONSE_H_
