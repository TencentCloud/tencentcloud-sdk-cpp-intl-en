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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKLISTREQUEST_H_

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
                * DescribeVulScanTaskList request structure.
                */
                class DescribeVulScanTaskListRequest : public AbstractModel
                {
                public:
                    DescribeVulScanTaskListRequest();
                    ~DescribeVulScanTaskListRequest() = default;
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
                     * 获取<p>Filtering Conditions, support the following Name: <li>JobId - exact match of task ID</li><li>TaskType - exact match of task type</li></p>
                     * @return Filters <p>Filtering Conditions, support the following Name: <li>JobId - exact match of task ID</li><li>TaskType - exact match of task type</li></p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filtering Conditions, support the following Name: <li>JobId - exact match of task ID</li><li>TaskType - exact match of task type</li></p>
                     * @param _filters <p>Filtering Conditions, support the following Name: <li>JobId - exact match of task ID</li><li>TaskType - exact match of task type</li></p>
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
                     * 获取<p>Page size</p><p>Value ranges from 1 to 100</p><p>Unit: entry</p><p>Default value: 10</p>
                     * @return Limit <p>Page size</p><p>Value ranges from 1 to 100</p><p>Unit: entry</p><p>Default value: 10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Page size</p><p>Value ranges from 1 to 100</p><p>Unit: entry</p><p>Default value: 10</p>
                     * @param _limit <p>Page size</p><p>Value ranges from 1 to 100</p><p>Unit: entry</p><p>Default value: 10</p>
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
                     * 获取<p>Pagination offset</p><p>Value ranges from 0 to 99999</p><p>Unit: piece</p>
                     * @return Offset <p>Pagination offset</p><p>Value ranges from 0 to 99999</p><p>Unit: piece</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset</p><p>Value ranges from 0 to 99999</p><p>Unit: piece</p>
                     * @param _offset <p>Pagination offset</p><p>Value ranges from 0 to 99999</p><p>Unit: piece</p>
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
                     * 获取<p>Filter orientation</p><p>Enumeration value:</p><ul><li>DESC: Descending order</li><li>ASC: Ascending order</li></ul>
                     * @return Order <p>Filter orientation</p><p>Enumeration value:</p><ul><li>DESC: Descending order</li><li>ASC: Ascending order</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Filter orientation</p><p>Enumeration value:</p><ul><li>DESC: Descending order</li><li>ASC: Ascending order</li></ul>
                     * @param _order <p>Filter orientation</p><p>Enumeration value:</p><ul><li>DESC: Descending order</li><li>ASC: Ascending order</li></ul>
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
                     * 获取<p>Sorting field</p><p>Default value: ScanTime</p>
                     * @return By <p>Sorting field</p><p>Default value: ScanTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field</p><p>Default value: ScanTime</p>
                     * @param _by <p>Sorting field</p><p>Default value: ScanTime</p>
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
                     * <p>Filtering Conditions, support the following Name: <li>JobId - exact match of task ID</li><li>TaskType - exact match of task type</li></p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Page size</p><p>Value ranges from 1 to 100</p><p>Unit: entry</p><p>Default value: 10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset</p><p>Value ranges from 0 to 99999</p><p>Unit: piece</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Filter orientation</p><p>Enumeration value:</p><ul><li>DESC: Descending order</li><li>ASC: Ascending order</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field</p><p>Default value: ScanTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKLISTREQUEST_H_
