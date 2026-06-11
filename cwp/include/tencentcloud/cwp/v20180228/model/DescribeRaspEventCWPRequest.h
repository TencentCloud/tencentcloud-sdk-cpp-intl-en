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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPEVENTCWPREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPEVENTCWPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRaspEventCWP request structure.
                */
                class DescribeRaspEventCWPRequest : public AbstractModel
                {
                public:
                    DescribeRaspEventCWPRequest();
                    ~DescribeRaspEventCWPRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria: Keywords: ip or hostname, VulKeywords vulnerability name or CveId for fuzzy query; AttackTypeKeywords attack type for fuzzy query; Quuid, VulId, EventType, Status for precise match, CreateBeginTime, CreateEndTime time period query.
Source is case-sensitive for memory shell injection and vulnerability defense, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * @return Filters Filter criteria: Keywords: ip or hostname, VulKeywords vulnerability name or CveId for fuzzy query; AttackTypeKeywords attack type for fuzzy query; Quuid, VulId, EventType, Status for precise match, CreateBeginTime, CreateEndTime time period query.
Source is case-sensitive for memory shell injection and vulnerability defense, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria: Keywords: ip or hostname, VulKeywords vulnerability name or CveId for fuzzy query; AttackTypeKeywords attack type for fuzzy query; Quuid, VulId, EventType, Status for precise match, CreateBeginTime, CreateEndTime time period query.
Source is case-sensitive for memory shell injection and vulnerability defense, rasp: vulnerability defense, memshell_inject: memory shell injection
                     * @param _filters Filter criteria: Keywords: ip or hostname, VulKeywords vulnerability name or CveId for fuzzy query; AttackTypeKeywords attack type for fuzzy query; Quuid, VulId, EventType, Status for precise match, CreateBeginTime, CreateEndTime time period query.
Source is case-sensitive for memory shell injection and vulnerability defense, rasp: vulnerability defense, memshell_inject: memory shell injection
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
                     * 获取Data offset
                     * @return Offset Data offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset
                     * @param _offset Data offset
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
                     * 获取Data limit
                     * @return Limit Data limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Data limit
                     * @param _limit Data limit
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
                     * 获取Sorting method (case insensitive): asc for ascending order; desc for descending order
                     * @return Order Sorting method (case insensitive): asc for ascending order; desc for descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method (case insensitive): asc for ascending order; desc for descending order
                     * @param _order Sorting method (case insensitive): asc for ascending order; desc for descending order
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
                     * 获取Sort columns, which are strictly equal: CreateTime for creation time, MergeTime for merge time, and Count for event count
                     * @return By Sort columns, which are strictly equal: CreateTime for creation time, MergeTime for merge time, and Count for event count
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort columns, which are strictly equal: CreateTime for creation time, MergeTime for merge time, and Count for event count
                     * @param _by Sort columns, which are strictly equal: CreateTime for creation time, MergeTime for merge time, and Count for event count
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
                     * Filter criteria: Keywords: ip or hostname, VulKeywords vulnerability name or CveId for fuzzy query; AttackTypeKeywords attack type for fuzzy query; Quuid, VulId, EventType, Status for precise match, CreateBeginTime, CreateEndTime time period query.
Source is case-sensitive for memory shell injection and vulnerability defense, rasp: vulnerability defense, memshell_inject: memory shell injection
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Data offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Data limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting method (case insensitive): asc for ascending order; desc for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sort columns, which are strictly equal: CreateTime for creation time, MergeTime for merge time, and Count for event count
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPEVENTCWPREQUEST_H_
