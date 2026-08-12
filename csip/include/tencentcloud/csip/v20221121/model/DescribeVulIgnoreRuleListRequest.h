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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULIGNORERULELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULIGNORERULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulIgnoreRuleList request structure.
                */
                class DescribeVulIgnoreRuleListRequest : public AbstractModel
                {
                public:
                    DescribeVulIgnoreRuleListRequest();
                    ~DescribeVulIgnoreRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria support the following Name:</p><li>Keyword - Vulnerability name/remark, fuzzy matching</li><li>Switch - Switch status, filter value: 0 (off) / 1 (on)</li>
                     * @return Filters <p>Filter criteria support the following Name:</p><li>Keyword - Vulnerability name/remark, fuzzy matching</li><li>Switch - Switch status, filter value: 0 (off) / 1 (on)</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria support the following Name:</p><li>Keyword - Vulnerability name/remark, fuzzy matching</li><li>Switch - Switch status, filter value: 0 (off) / 1 (on)</li>
                     * @param _filters <p>Filter criteria support the following Name:</p><li>Keyword - Vulnerability name/remark, fuzzy matching</li><li>Switch - Switch status, filter value: 0 (off) / 1 (on)</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Page size, default 10, maximum 100</p>
                     * @return Limit <p>Page size, default 10, maximum 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Page size, default 10, maximum 100</p>
                     * @param _limit <p>Page size, default 10, maximum 100</p>
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
                     * 获取<p>Pagination offset, starting from 0.</p>
                     * @return Offset <p>Pagination offset, starting from 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset, starting from 0.</p>
                     * @param _offset <p>Pagination offset, starting from 0.</p>
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
                     * 获取<p>Sorting order: asc (ascending)/ desc (descending order), default desc</p>
                     * @return Order <p>Sorting order: asc (ascending)/ desc (descending order), default desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order: asc (ascending)/ desc (descending order), default desc</p>
                     * @param _order <p>Sorting order: asc (ascending)/ desc (descending order), default desc</p>
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
                     * 获取<p>Sorting field. Default sorting order is by last update time (UpdateTime).</p>
                     * @return By <p>Sorting field. Default sorting order is by last update time (UpdateTime).</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field. Default sorting order is by last update time (UpdateTime).</p>
                     * @param _by <p>Sorting field. Default sorting order is by last update time (UpdateTime).</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter criteria support the following Name:</p><li>Keyword - Vulnerability name/remark, fuzzy matching</li><li>Switch - Switch status, filter value: 0 (off) / 1 (on)</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Page size, default 10, maximum 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset, starting from 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting order: asc (ascending)/ desc (descending order), default desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field. Default sorting order is by last update time (UpdateTime).</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULIGNORERULELISTREQUEST_H_
