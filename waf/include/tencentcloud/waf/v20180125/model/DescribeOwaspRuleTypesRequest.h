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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPRULETYPESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPRULETYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeOwaspRuleTypes request structure.
                */
                class DescribeOwaspRuleTypesRequest : public AbstractModel
                {
                public:
                    DescribeOwaspRuleTypesRequest();
                    ~DescribeOwaspRuleTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain names to be queried
                     * @return Domain Domain names to be queried
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain names to be queried
                     * @param _domain Domain names to be queried
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Page number, defaults to 0.
                     * @return Offset Page number, defaults to 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number, defaults to 0.
                     * @param _offset Page number, defaults to 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Capacity per page. defaults to 10.
                     * @return Limit Capacity per page. defaults to 10.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Capacity per page. defaults to 10.
                     * @param _limit Capacity per page. defaults to 10.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter conditions. supports rule ID, CVE ID, and description.
                     * @return Filters Filter conditions. supports rule ID, CVE ID, and description.
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置Filter conditions. supports rule ID, CVE ID, and description.
                     * @param _filters Filter conditions. supports rule ID, CVE ID, and description.
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Domain names to be queried
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Page number, defaults to 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Capacity per page. defaults to 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions. supports rule ID, CVE ID, and description.
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPRULETYPESREQUEST_H_
