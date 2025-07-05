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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKEVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKEVENTSREQUEST_H_

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
                * DescribeAttackEvents request structure.
                */
                class DescribeAttackEventsRequest : public AbstractModel
                {
                public:
                    DescribeAttackEventsRequest();
                    ~DescribeAttackEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returns. The maximum value is 100.
                     * @return Limit Number of returns. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns. The maximum value is 100.
                     * @param _limit Number of returns. The maximum value is 100.
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
                     * 获取 Filter criteria
<li>Type - String attack status. 0: attempted attack; 1: attack succeeded - required: no</li>
<li>Status - String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted - required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>Uuids - String CWPP UUID - required: no</li>
<li>Quuids - String CVM UUID - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>AttackTimeBegin - String attack start time - required: no</li>
<li>AttackTimeEnd - String attack end time - required: no</li>
<li>VulSupportDefense - String: whether the vulnerability can be defended: 0: no;1: yes - required: no</li>

                     * @return Filters  Filter criteria
<li>Type - String attack status. 0: attempted attack; 1: attack succeeded - required: no</li>
<li>Status - String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted - required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>Uuids - String CWPP UUID - required: no</li>
<li>Quuids - String CVM UUID - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>AttackTimeBegin - String attack start time - required: no</li>
<li>AttackTimeEnd - String attack end time - required: no</li>
<li>VulSupportDefense - String: whether the vulnerability can be defended: 0: no;1: yes - required: no</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置 Filter criteria
<li>Type - String attack status. 0: attempted attack; 1: attack succeeded - required: no</li>
<li>Status - String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted - required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>Uuids - String CWPP UUID - required: no</li>
<li>Quuids - String CVM UUID - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>AttackTimeBegin - String attack start time - required: no</li>
<li>AttackTimeEnd - String attack end time - required: no</li>
<li>VulSupportDefense - String: whether the vulnerability can be defended: 0: no;1: yes - required: no</li>

                     * @param _filters  Filter criteria
<li>Type - String attack status. 0: attempted attack; 1: attack succeeded - required: no</li>
<li>Status - String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted - required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>Uuids - String CWPP UUID - required: no</li>
<li>Quuids - String CVM UUID - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>AttackTimeBegin - String attack start time - required: no</li>
<li>AttackTimeEnd - String attack end time - required: no</li>
<li>VulSupportDefense - String: whether the vulnerability can be defended: 0: no;1: yes - required: no</li>

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
                     * 获取Sort
                     * @return By Sort
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort
                     * @param _by Sort
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
                     * 获取Sorting method: ASC, DESC
                     * @return Order Sorting method: ASC, DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: ASC, DESC
                     * @param _order Sorting method: ASC, DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Number of returns. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     *  Filter criteria
<li>Type - String attack status. 0: attempted attack; 1: attack succeeded - required: no</li>
<li>Status - String event processing status: 0: pending 1: processed; 2: allowlisted; 3: ignored; 4: deleted - required: no</li>
<li>SrcIP - String source IP - required: no</li>
<li>Uuids - String CWPP UUID - required: no</li>
<li>Quuids - String CVM UUID - required: no</li>
<li>DstPort - String attack target port - required: no</li>
<li>MachineName - String host name - required: no</li>
<li>InstanceID - String host instance ID - required: no</li>
<li>AttackTimeBegin - String attack start time - required: no</li>
<li>AttackTimeEnd - String attack end time - required: no</li>
<li>VulSupportDefense - String: whether the vulnerability can be defended: 0: no;1: yes - required: no</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting method: ASC, DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKEVENTSREQUEST_H_
