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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULELISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULELISTREQUEST_H_

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
                * DescribeCustomRuleList request structure.
                */
                class DescribeCustomRuleListRequest : public AbstractModel
                {
                public:
                    DescribeCustomRuleListRequest();
                    ~DescribeCustomRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Capacity
                     * @return Limit Capacity
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Capacity
                     * @param _limit Capacity
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
                     * 获取Filter array. A name can be one of the following: RuleID, RuleName, and Match.
                     * @return Filters Filter array. A name can be one of the following: RuleID, RuleName, and Match.
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置Filter array. A name can be one of the following: RuleID, RuleName, and Match.
                     * @param _filters Filter array. A name can be one of the following: RuleID, RuleName, and Match.
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取asc or desc
                     * @return Order asc or desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置asc or desc
                     * @param _order asc or desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取exp_ts or mod_ts
                     * @return By exp_ts or mod_ts
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置exp_ts or mod_ts
                     * @param _by exp_ts or mod_ts
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Domain name list to query. This parameter is not required on the access control page.
                     * @return DomainList Domain name list to query. This parameter is not required on the access control page.
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置Domain name list to query. This parameter is not required on the access control page.
                     * @param _domainList Domain name list to query. This parameter is not required on the access control page.
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Capacity
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter array. A name can be one of the following: RuleID, RuleName, and Match.
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * asc or desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * exp_ts or mod_ts
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Domain name list to query. This parameter is not required on the access control page.
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULELISTREQUEST_H_
