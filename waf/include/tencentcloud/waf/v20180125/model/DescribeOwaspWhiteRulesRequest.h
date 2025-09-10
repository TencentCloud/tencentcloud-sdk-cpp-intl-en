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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPWHITERULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPWHITERULESREQUEST_H_

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
                * DescribeOwaspWhiteRules request structure.
                */
                class DescribeOwaspWhiteRulesRequest : public AbstractModel
                {
                public:
                    DescribeOwaspWhiteRulesRequest();
                    ~DescribeOwaspWhiteRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain to be queried
                     * @return Domain Domain to be queried
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain to be queried
                     * @param _domain Domain to be queried
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
                     * 获取Paginate, defaults to 0.
                     * @return Offset Paginate, defaults to 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paginate, defaults to 0.
                     * @param _offset Paginate, defaults to 0.
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
                     * 获取Specifies the field used to sort. valid values: CreateTime (creation time), UpdateTime (update time).
                     * @return By Specifies the field used to sort. valid values: CreateTime (creation time), UpdateTime (update time).
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Specifies the field used to sort. valid values: CreateTime (creation time), UpdateTime (update time).
                     * @param _by Specifies the field used to sort. valid values: CreateTime (creation time), UpdateTime (update time).
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
                     * 获取Sorting method. supports asc, desc.
                     * @return Order Sorting method. supports asc, desc.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method. supports asc, desc.
                     * @param _order Sorting method. supports asc, desc.
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
                     * 获取Filter conditions, support RuleId: whitelist rule ID, Name: rule Name, RuleType: whitelist rule type, Status: rule enabling Status, ValidStatus: rule effective Status, TimerType: effective method, ID: specific whitelist ID, determine whether it is a rule ID or type ID based on RuleType.
                     * @return Filters Filter conditions, support RuleId: whitelist rule ID, Name: rule Name, RuleType: whitelist rule type, Status: rule enabling Status, ValidStatus: rule effective Status, TimerType: effective method, ID: specific whitelist ID, determine whether it is a rule ID or type ID based on RuleType.
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置Filter conditions, support RuleId: whitelist rule ID, Name: rule Name, RuleType: whitelist rule type, Status: rule enabling Status, ValidStatus: rule effective Status, TimerType: effective method, ID: specific whitelist ID, determine whether it is a rule ID or type ID based on RuleType.
                     * @param _filters Filter conditions, support RuleId: whitelist rule ID, Name: rule Name, RuleType: whitelist rule type, Status: rule enabling Status, ValidStatus: rule effective Status, TimerType: effective method, ID: specific whitelist ID, determine whether it is a rule ID or type ID based on RuleType.
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
                     * Domain to be queried
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Paginate, defaults to 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Capacity per page. defaults to 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the field used to sort. valid values: CreateTime (creation time), UpdateTime (update time).
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting method. supports asc, desc.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Filter conditions, support RuleId: whitelist rule ID, Name: rule Name, RuleType: whitelist rule type, Status: rule enabling Status, ValidStatus: rule effective Status, TimerType: effective method, ID: specific whitelist ID, determine whether it is a rule ID or type ID based on RuleType.
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPWHITERULESREQUEST_H_
