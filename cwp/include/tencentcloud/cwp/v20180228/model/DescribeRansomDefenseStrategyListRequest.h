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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRansomDefenseStrategyList request structure.
                */
                class DescribeRansomDefenseStrategyListRequest : public AbstractModel
                {
                public:
                    DescribeRansomDefenseStrategyListRequest();
                    ~DescribeRansomDefenseStrategyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameter (maximum quantity: 100)
                     * @return Limit Pagination parameter (maximum quantity: 100)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter (maximum quantity: 100)
                     * @param _limit Pagination parameter (maximum quantity: 100)
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
                     * 获取Pagination parameter
                     * @return Offset Pagination parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter
                     * @param _offset Pagination parameter
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
                     * 获取Filtering criteria
<li>Ips - String - required: no - IP addresses for querying </li>
<li>MachineNames - String - required: no - instance names for querying </li>
<li>Names - String - required: no - anti-ransomware policy names for querying </li>
<li>Dirs - String - required: no - bait directory </li>
<li>Status - String - required: no - policy status: 0: disabled; 1: enabled </li>
<li>BackupType - String - required: no - backup mode: 0: weekly; 1: daily </li>
                     * @return Filters Filtering criteria
<li>Ips - String - required: no - IP addresses for querying </li>
<li>MachineNames - String - required: no - instance names for querying </li>
<li>Names - String - required: no - anti-ransomware policy names for querying </li>
<li>Dirs - String - required: no - bait directory </li>
<li>Status - String - required: no - policy status: 0: disabled; 1: enabled </li>
<li>BackupType - String - required: no - backup mode: 0: weekly; 1: daily </li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>Ips - String - required: no - IP addresses for querying </li>
<li>MachineNames - String - required: no - instance names for querying </li>
<li>Names - String - required: no - anti-ransomware policy names for querying </li>
<li>Dirs - String - required: no - bait directory </li>
<li>Status - String - required: no - policy status: 0: disabled; 1: enabled </li>
<li>BackupType - String - required: no - backup mode: 0: weekly; 1: daily </li>
                     * @param _filters Filtering criteria
<li>Ips - String - required: no - IP addresses for querying </li>
<li>MachineNames - String - required: no - instance names for querying </li>
<li>Names - String - required: no - anti-ransomware policy names for querying </li>
<li>Dirs - String - required: no - bait directory </li>
<li>Status - String - required: no - policy status: 0: disabled; 1: enabled </li>
<li>BackupType - String - required: no - backup mode: 0: weekly; 1: daily </li>
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
                     * 获取Sorting order: ASC and DESC
                     * @return Order Sorting order: ASC and DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order: ASC and DESC
                     * @param _order Sorting order: ASC and DESC
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
                     * 获取Sorting fields, supporting CreateTime and MachineCount
                     * @return By Sorting fields, supporting CreateTime and MachineCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting fields, supporting CreateTime and MachineCount
                     * @param _by Sorting fields, supporting CreateTime and MachineCount
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
                     * Pagination parameter (maximum quantity: 100)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filtering criteria
<li>Ips - String - required: no - IP addresses for querying </li>
<li>MachineNames - String - required: no - instance names for querying </li>
<li>Names - String - required: no - anti-ransomware policy names for querying </li>
<li>Dirs - String - required: no - bait directory </li>
<li>Status - String - required: no - policy status: 0: disabled; 1: enabled </li>
<li>BackupType - String - required: no - backup mode: 0: weekly; 1: daily </li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting order: ASC and DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting fields, supporting CreateTime and MachineCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYLISTREQUEST_H_
