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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBRUTEATTACKLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBRUTEATTACKLISTREQUEST_H_

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
                * DescribeBruteAttackList request structure.
                */
                class DescribeBruteAttackListRequest : public AbstractModel
                {
                public:
                    DescribeBruteAttackListRequest();
                    ~DescribeBruteAttackListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items to be returned. The maximum value is 100.
                     * @return Limit Number of items to be returned. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items to be returned. The maximum value is 100.
                     * @param _limit Number of items to be returned. The maximum value is 100.
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
                     * 获取Offset, which defaults to 0
                     * @return Offset Offset, which defaults to 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0
                     * @param _offset Offset, which defaults to 0
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
                     * 获取Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>Uuid - String - required: no - CWPP unique UUID</li>
<li>Quuid - String - required: no - CVM UUID</li>
<li>Status - String - required: no - filter by status: failed - FAILED; succeeded - SUCCESS</li>
<li>UserName - String - required: no - filter by UserName</li>
<li>SrcIp - String - required: no - filter by source IP</li>
<li>CreateBeginTime - String - required: no - filter by first attack time, start time</li>
<li>CreateEndTime - String - required: no - filter by first attack time, end time</li>
<li>ModifyBeginTime - String - required: no - filter by last attack time, start time</li>
<li>ModifyEndTime - String - required: no - filter by last attack time, end time</li>
<li>Banned - String - required: no - filter by blocking status (separate multiple items with commas): 0 - not blocked (global ZK switch is off); 82 - not blocked (Non-Pro Edition); 83 - not blocked (allowlisted); 1 - blocked; 2 - not blocked (abnormal program); 3 - not blocked (private network attacks cannot be blocked); 4 - not blocked (Anping is not supported)</li>
                     * @return Filters Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>Uuid - String - required: no - CWPP unique UUID</li>
<li>Quuid - String - required: no - CVM UUID</li>
<li>Status - String - required: no - filter by status: failed - FAILED; succeeded - SUCCESS</li>
<li>UserName - String - required: no - filter by UserName</li>
<li>SrcIp - String - required: no - filter by source IP</li>
<li>CreateBeginTime - String - required: no - filter by first attack time, start time</li>
<li>CreateEndTime - String - required: no - filter by first attack time, end time</li>
<li>ModifyBeginTime - String - required: no - filter by last attack time, start time</li>
<li>ModifyEndTime - String - required: no - filter by last attack time, end time</li>
<li>Banned - String - required: no - filter by blocking status (separate multiple items with commas): 0 - not blocked (global ZK switch is off); 82 - not blocked (Non-Pro Edition); 83 - not blocked (allowlisted); 1 - blocked; 2 - not blocked (abnormal program); 3 - not blocked (private network attacks cannot be blocked); 4 - not blocked (Anping is not supported)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>Uuid - String - required: no - CWPP unique UUID</li>
<li>Quuid - String - required: no - CVM UUID</li>
<li>Status - String - required: no - filter by status: failed - FAILED; succeeded - SUCCESS</li>
<li>UserName - String - required: no - filter by UserName</li>
<li>SrcIp - String - required: no - filter by source IP</li>
<li>CreateBeginTime - String - required: no - filter by first attack time, start time</li>
<li>CreateEndTime - String - required: no - filter by first attack time, end time</li>
<li>ModifyBeginTime - String - required: no - filter by last attack time, start time</li>
<li>ModifyEndTime - String - required: no - filter by last attack time, end time</li>
<li>Banned - String - required: no - filter by blocking status (separate multiple items with commas): 0 - not blocked (global ZK switch is off); 82 - not blocked (Non-Pro Edition); 83 - not blocked (allowlisted); 1 - blocked; 2 - not blocked (abnormal program); 3 - not blocked (private network attacks cannot be blocked); 4 - not blocked (Anping is not supported)</li>
                     * @param _filters Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>Uuid - String - required: no - CWPP unique UUID</li>
<li>Quuid - String - required: no - CVM UUID</li>
<li>Status - String - required: no - filter by status: failed - FAILED; succeeded - SUCCESS</li>
<li>UserName - String - required: no - filter by UserName</li>
<li>SrcIp - String - required: no - filter by source IP</li>
<li>CreateBeginTime - String - required: no - filter by first attack time, start time</li>
<li>CreateEndTime - String - required: no - filter by first attack time, end time</li>
<li>ModifyBeginTime - String - required: no - filter by last attack time, start time</li>
<li>ModifyEndTime - String - required: no - filter by last attack time, end time</li>
<li>Banned - String - required: no - filter by blocking status (separate multiple items with commas): 0 - not blocked (global ZK switch is off); 82 - not blocked (Non-Pro Edition); 83 - not blocked (allowlisted); 1 - blocked; 2 - not blocked (abnormal program); 3 - not blocked (private network attacks cannot be blocked); 4 - not blocked (Anping is not supported)</li>
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
                     * 获取Sorting method: sort by number of requests: asc - ascending order/desc - descending order
                     * @return Order Sorting method: sort by number of requests: asc - ascending order/desc - descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: sort by number of requests: asc - ascending order/desc - descending order
                     * @param _order Sorting method: sort by number of requests: asc - ascending order/desc - descending order
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
                     * 获取Sorting field: CreateTime - first attack time
                     * @return By Sorting field: CreateTime - first attack time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: CreateTime - first attack time
                     * @param _by Sorting field: CreateTime - first attack time
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
                     * Number of items to be returned. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which defaults to 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>Uuid - String - required: no - CWPP unique UUID</li>
<li>Quuid - String - required: no - CVM UUID</li>
<li>Status - String - required: no - filter by status: failed - FAILED; succeeded - SUCCESS</li>
<li>UserName - String - required: no - filter by UserName</li>
<li>SrcIp - String - required: no - filter by source IP</li>
<li>CreateBeginTime - String - required: no - filter by first attack time, start time</li>
<li>CreateEndTime - String - required: no - filter by first attack time, end time</li>
<li>ModifyBeginTime - String - required: no - filter by last attack time, start time</li>
<li>ModifyEndTime - String - required: no - filter by last attack time, end time</li>
<li>Banned - String - required: no - filter by blocking status (separate multiple items with commas): 0 - not blocked (global ZK switch is off); 82 - not blocked (Non-Pro Edition); 83 - not blocked (allowlisted); 1 - blocked; 2 - not blocked (abnormal program); 3 - not blocked (private network attacks cannot be blocked); 4 - not blocked (Anping is not supported)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: sort by number of requests: asc - ascending order/desc - descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field: CreateTime - first attack time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBRUTEATTACKLISTREQUEST_H_
