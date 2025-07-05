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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_

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
                * DescribeMachineClearHistory request structure.
                */
                class DescribeMachineClearHistoryRequest : public AbstractModel
                {
                public:
                    DescribeMachineClearHistoryRequest();
                    ~DescribeMachineClearHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering criteria
Return entries that match both Keywords and TimeBetween when multiple filtering criteria are used
<li> Keywords: instance name, private IP address, public IP address</li>
<li> TimeBetween: time interval</li>
                     * @return Filters Filtering criteria
Return entries that match both Keywords and TimeBetween when multiple filtering criteria are used
<li> Keywords: instance name, private IP address, public IP address</li>
<li> TimeBetween: time interval</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filtering criteria
Return entries that match both Keywords and TimeBetween when multiple filtering criteria are used
<li> Keywords: instance name, private IP address, public IP address</li>
<li> TimeBetween: time interval</li>
                     * @param _filters Filtering criteria
Return entries that match both Keywords and TimeBetween when multiple filtering criteria are used
<li> Keywords: instance name, private IP address, public IP address</li>
<li> TimeBetween: time interval</li>
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
                     * 获取Limit Entries, 10 by default, up to 100.
                     * @return Limit Limit Entries, 10 by default, up to 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit Entries, 10 by default, up to 100.
                     * @param _limit Limit Entries, 10 by default, up to 100.
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
                     * 获取Ascending order, ASC, Descending order DESC, ASC by default.
                     * @return Order Ascending order, ASC, Descending order DESC, ASC by default.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Ascending order, ASC, Descending order DESC, ASC by default.
                     * @param _order Ascending order, ASC, Descending order DESC, ASC by default.
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
                     * 获取AgentLastOfflineTime: last offline time of client
AutoClearTime: clearing time
                     * @return By AgentLastOfflineTime: last offline time of client
AutoClearTime: clearing time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置AgentLastOfflineTime: last offline time of client
AutoClearTime: clearing time
                     * @param _by AgentLastOfflineTime: last offline time of client
AutoClearTime: clearing time
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
                     * Filtering criteria
Return entries that match both Keywords and TimeBetween when multiple filtering criteria are used
<li> Keywords: instance name, private IP address, public IP address</li>
<li> TimeBetween: time interval</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Limit Entries, 10 by default, up to 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Ascending order, ASC, Descending order DESC, ASC by default.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * AgentLastOfflineTime: last offline time of client
AutoClearTime: clearing time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINECLEARHISTORYREQUEST_H_
