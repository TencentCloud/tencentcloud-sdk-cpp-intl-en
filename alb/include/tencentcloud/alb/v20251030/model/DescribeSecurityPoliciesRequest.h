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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicies request structure.
                */
                class DescribeSecurityPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPoliciesRequest();
                    ~DescribeSecurityPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter condition list for filtering security policies that meet the specified conditions. Multiple filter conditions are in an "AND" relationship with each other.

**Supported filter conditions:**
- **SecurityPolicyNames**: Filter by security policy name. Fuzzy matching is supported.
- **tag:tag-key**: Filter by tag key-value pair. Replace tag-key with the actual tag key. For example, `tag:env` means filtering by the tag key `env`.

**Description:** Each filter condition supports a maximum of 10 values.

                     * @return Filters Filter condition list for filtering security policies that meet the specified conditions. Multiple filter conditions are in an "AND" relationship with each other.

**Supported filter conditions:**
- **SecurityPolicyNames**: Filter by security policy name. Fuzzy matching is supported.
- **tag:tag-key**: Filter by tag key-value pair. Replace tag-key with the actual tag key. For example, `tag:env` means filtering by the tag key `env`.

**Description:** Each filter condition supports a maximum of 10 values.

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition list for filtering security policies that meet the specified conditions. Multiple filter conditions are in an "AND" relationship with each other.

**Supported filter conditions:**
- **SecurityPolicyNames**: Filter by security policy name. Fuzzy matching is supported.
- **tag:tag-key**: Filter by tag key-value pair. Replace tag-key with the actual tag key. For example, `tag:env` means filtering by the tag key `env`.

**Description:** Each filter condition supports a maximum of 10 values.

                     * @param _filters Filter condition list for filtering security policies that meet the specified conditions. Multiple filter conditions are in an "AND" relationship with each other.

**Supported filter conditions:**
- **SecurityPolicyNames**: Filter by security policy name. Fuzzy matching is supported.
- **tag:tag-key**: Filter by tag key-value pair. Replace tag-key with the actual tag key. For example, `tag:env` means filtering by the tag key `env`.

**Description:** Each filter condition supports a maximum of 10 values.

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Maximum number of results returned for a single request. For pagination queries, use together with NextToken.

**Value range:** from 1 to 100.

**Default value:** 20.

                     * @return MaxResults Maximum number of results returned for a single request. For pagination queries, use together with NextToken.

**Value range:** from 1 to 100.

**Default value:** 20.

                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of results returned for a single request. For pagination queries, use together with NextToken.

**Value range:** from 1 to 100.

**Default value:** 20.

                     * @param _maxResults Maximum number of results returned for a single request. For pagination queries, use together with NextToken.

**Value range:** from 1 to 100.

**Default value:** 20.

                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Token for the paging query start. Used to obtain the result data on the next page.

**Instructions:**
-No need to set this parameter for the initial query.
- If the last query returned NextToken, it means there is more data. Input this value to retrieve the next page.
-If the last query did not return NextToken or returned empty, it means the current page is the last page.

                     * @return NextToken Token for the paging query start. Used to obtain the result data on the next page.

**Instructions:**
-No need to set this parameter for the initial query.
- If the last query returned NextToken, it means there is more data. Input this value to retrieve the next page.
-If the last query did not return NextToken or returned empty, it means the current page is the last page.

                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Token for the paging query start. Used to obtain the result data on the next page.

**Instructions:**
-No need to set this parameter for the initial query.
- If the last query returned NextToken, it means there is more data. Input this value to retrieve the next page.
-If the last query did not return NextToken or returned empty, it means the current page is the last page.

                     * @param _nextToken Token for the paging query start. Used to obtain the result data on the next page.

**Instructions:**
-No need to set this parameter for the initial query.
- If the last query returned NextToken, it means there is more data. Input this value to retrieve the next page.
-If the last query did not return NextToken or returned empty, it means the current page is the last page.

                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Security policy ID list. The ID format is `tls-` followed by 8 alphanumeric characters.
                     * @return SecurityPolicyIds Security policy ID list. The ID format is `tls-` followed by 8 alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicyIds() const;

                    /**
                     * 设置Security policy ID list. The ID format is `tls-` followed by 8 alphanumeric characters.
                     * @param _securityPolicyIds Security policy ID list. The ID format is `tls-` followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetSecurityPolicyIds(const std::vector<std::string>& _securityPolicyIds);

                    /**
                     * 判断参数 SecurityPolicyIds 是否已赋值
                     * @return SecurityPolicyIds 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdsHasBeenSet() const;

                private:

                    /**
                     * Filter condition list for filtering security policies that meet the specified conditions. Multiple filter conditions are in an "AND" relationship with each other.

**Supported filter conditions:**
- **SecurityPolicyNames**: Filter by security policy name. Fuzzy matching is supported.
- **tag:tag-key**: Filter by tag key-value pair. Replace tag-key with the actual tag key. For example, `tag:env` means filtering by the tag key `env`.

**Description:** Each filter condition supports a maximum of 10 values.

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Maximum number of results returned for a single request. For pagination queries, use together with NextToken.

**Value range:** from 1 to 100.

**Default value:** 20.

                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Token for the paging query start. Used to obtain the result data on the next page.

**Instructions:**
-No need to set this parameter for the initial query.
- If the last query returned NextToken, it means there is more data. Input this value to retrieve the next page.
-If the last query did not return NextToken or returned empty, it means the current page is the last page.

                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Security policy ID list. The ID format is `tls-` followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_securityPolicyIds;
                    bool m_securityPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESREQUEST_H_
