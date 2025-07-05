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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHEVENTSNEWREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHEVENTSNEWREQUEST_H_

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
                * DescribeBashEventsNew request structure.
                */
                class DescribeBashEventsNewRequest : public AbstractModel
                {
                public:
                    DescribeBashEventsNewRequest();
                    ~DescribeBashEventsNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * @return Limit Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * @param _limit Quantity of returns. It is 10 by default, and the maximum value is 100.
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
                     * 获取Filter criteria
<li>HostName - String - required: no - host name</li>
<li>Hostip - String - required: no - host's private IP address</li>
<li>HostIp - String - required: no - host's private IP address</li>
<li>RuleCategory - Int - required: no - policy type (all types or a single type): 0: system; 1: user</li><li>RuleName - String - required: no - policy name</li>
<li>RuleLevel - Int - required: no - threat Level (multiple levels supported)</li>
<li>Status - Int - required: no - processing status (multiple statuses supported): 0: pending; 1: processed; 2: added to allowlist; 3: ignored; 4: deleted; 5: blocked</li>
<li>DetectBy - Int - required: no - data source (multiple sources supported): 0: bash logs; 1: real-time monitoring</li>
<li>StartTime - String - required: no - start time</li>
<li>EndTime - String - required: no - end time</li>
                     * @return Filters Filter criteria
<li>HostName - String - required: no - host name</li>
<li>Hostip - String - required: no - host's private IP address</li>
<li>HostIp - String - required: no - host's private IP address</li>
<li>RuleCategory - Int - required: no - policy type (all types or a single type): 0: system; 1: user</li><li>RuleName - String - required: no - policy name</li>
<li>RuleLevel - Int - required: no - threat Level (multiple levels supported)</li>
<li>Status - Int - required: no - processing status (multiple statuses supported): 0: pending; 1: processed; 2: added to allowlist; 3: ignored; 4: deleted; 5: blocked</li>
<li>DetectBy - Int - required: no - data source (multiple sources supported): 0: bash logs; 1: real-time monitoring</li>
<li>StartTime - String - required: no - start time</li>
<li>EndTime - String - required: no - end time</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>HostName - String - required: no - host name</li>
<li>Hostip - String - required: no - host's private IP address</li>
<li>HostIp - String - required: no - host's private IP address</li>
<li>RuleCategory - Int - required: no - policy type (all types or a single type): 0: system; 1: user</li><li>RuleName - String - required: no - policy name</li>
<li>RuleLevel - Int - required: no - threat Level (multiple levels supported)</li>
<li>Status - Int - required: no - processing status (multiple statuses supported): 0: pending; 1: processed; 2: added to allowlist; 3: ignored; 4: deleted; 5: blocked</li>
<li>DetectBy - Int - required: no - data source (multiple sources supported): 0: bash logs; 1: real-time monitoring</li>
<li>StartTime - String - required: no - start time</li>
<li>EndTime - String - required: no - end time</li>
                     * @param _filters Filter criteria
<li>HostName - String - required: no - host name</li>
<li>Hostip - String - required: no - host's private IP address</li>
<li>HostIp - String - required: no - host's private IP address</li>
<li>RuleCategory - Int - required: no - policy type (all types or a single type): 0: system; 1: user</li><li>RuleName - String - required: no - policy name</li>
<li>RuleLevel - Int - required: no - threat Level (multiple levels supported)</li>
<li>Status - Int - required: no - processing status (multiple statuses supported): 0: pending; 1: processed; 2: added to allowlist; 3: ignored; 4: deleted; 5: blocked</li>
<li>DetectBy - Int - required: no - data source (multiple sources supported): 0: bash logs; 1: real-time monitoring</li>
<li>StartTime - String - required: no - start time</li>
<li>EndTime - String - required: no - end time</li>
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Sorting method: sort by number of requests. asc: ascending; desc: descending.
                     * @return Order Sorting method: sort by number of requests. asc: ascending; desc: descending.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: sort by number of requests. asc: ascending; desc: descending.
                     * @param _order Sorting method: sort by number of requests. asc: ascending; desc: descending.
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
                     * 获取Sorting field. CreateTime: occurrence time; ModifyTime: processing time.
                     * @return By Sorting field. CreateTime: occurrence time; ModifyTime: processing time.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field. CreateTime: occurrence time; ModifyTime: processing time.
                     * @param _by Sorting field. CreateTime: occurrence time; ModifyTime: processing time.
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
                     * Quantity of returns. It is 10 by default, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria
<li>HostName - String - required: no - host name</li>
<li>Hostip - String - required: no - host's private IP address</li>
<li>HostIp - String - required: no - host's private IP address</li>
<li>RuleCategory - Int - required: no - policy type (all types or a single type): 0: system; 1: user</li><li>RuleName - String - required: no - policy name</li>
<li>RuleLevel - Int - required: no - threat Level (multiple levels supported)</li>
<li>Status - Int - required: no - processing status (multiple statuses supported): 0: pending; 1: processed; 2: added to allowlist; 3: ignored; 4: deleted; 5: blocked</li>
<li>DetectBy - Int - required: no - data source (multiple sources supported): 0: bash logs; 1: real-time monitoring</li>
<li>StartTime - String - required: no - start time</li>
<li>EndTime - String - required: no - end time</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting method: sort by number of requests. asc: ascending; desc: descending.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field. CreateTime: occurrence time; ModifyTime: processing time.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHEVENTSNEWREQUEST_H_
