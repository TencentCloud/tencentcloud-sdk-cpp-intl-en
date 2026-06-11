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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeK8sApiAbnormalEventList request structure.
                */
                class DescribeK8sApiAbnormalEventListRequest : public AbstractModel
                {
                public:
                    DescribeK8sApiAbnormalEventListRequest();
                    ~DescribeK8sApiAbnormalEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Filter conditions.</p><li>TimeRange - String - Required: No - Time range filter ["2022-03-31 16:55:00", "2022-03-31 17:00:00"];</li><li>MatchRules - String - Required: No - Hit rule filter;</li><li>RiskLevel - String - Required: No - Threat level filter;</li><li>Status - String - Required: No - Event status filter;</li><li>MatchRuleType - String - Required: No - Hit rule type filter;</li><li>ClusterRunningStatus - String - Required: No - Cluster running status;</li><li>ClusterName - String - Required: No - Cluster name;</li><li>ClusterID - String - Required: No - Cluster ID.</li>
                     * @return Filters <p>Filter conditions.</p><li>TimeRange - String - Required: No - Time range filter ["2022-03-31 16:55:00", "2022-03-31 17:00:00"];</li><li>MatchRules - String - Required: No - Hit rule filter;</li><li>RiskLevel - String - Required: No - Threat level filter;</li><li>Status - String - Required: No - Event status filter;</li><li>MatchRuleType - String - Required: No - Hit rule type filter;</li><li>ClusterRunningStatus - String - Required: No - Cluster running status;</li><li>ClusterName - String - Required: No - Cluster name;</li><li>ClusterID - String - Required: No - Cluster ID.</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions.</p><li>TimeRange - String - Required: No - Time range filter ["2022-03-31 16:55:00", "2022-03-31 17:00:00"];</li><li>MatchRules - String - Required: No - Hit rule filter;</li><li>RiskLevel - String - Required: No - Threat level filter;</li><li>Status - String - Required: No - Event status filter;</li><li>MatchRuleType - String - Required: No - Hit rule type filter;</li><li>ClusterRunningStatus - String - Required: No - Cluster running status;</li><li>ClusterName - String - Required: No - Cluster name;</li><li>ClusterID - String - Required: No - Cluster ID.</li>
                     * @param _filters <p>Filter conditions.</p><li>TimeRange - String - Required: No - Time range filter ["2022-03-31 16:55:00", "2022-03-31 17:00:00"];</li><li>MatchRules - String - Required: No - Hit rule filter;</li><li>RiskLevel - String - Required: No - Threat level filter;</li><li>Status - String - Required: No - Event status filter;</li><li>MatchRuleType - String - Required: No - Hit rule type filter;</li><li>ClusterRunningStatus - String - Required: No - Cluster running status;</li><li>ClusterName - String - Required: No - Cluster name;</li><li>ClusterID - String - Required: No - Cluster ID.</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * @return Limit <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * @param _limit <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Sorting method.</p>
                     * @return Order <p>Sorting method.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting method.</p>
                     * @param _order <p>Sorting method.</p>
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
                     * 获取<p>Sorting field.<br>LatestFoundTime: Last generation time.<br>AlarmCount: Number of alarms.</p>
                     * @return By <p>Sorting field.<br>LatestFoundTime: Last generation time.<br>AlarmCount: Number of alarms.</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field.<br>LatestFoundTime: Last generation time.<br>AlarmCount: Number of alarms.</p>
                     * @param _by <p>Sorting field.<br>LatestFoundTime: Last generation time.<br>AlarmCount: Number of alarms.</p>
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
                     * <p>Filter conditions.</p><li>TimeRange - String - Required: No - Time range filter ["2022-03-31 16:55:00", "2022-03-31 17:00:00"];</li><li>MatchRules - String - Required: No - Hit rule filter;</li><li>RiskLevel - String - Required: No - Threat level filter;</li><li>Status - String - Required: No - Event status filter;</li><li>MatchRuleType - String - Required: No - Hit rule type filter;</li><li>ClusterRunningStatus - String - Required: No - Cluster running status;</li><li>ClusterName - String - Required: No - Cluster name;</li><li>ClusterID - String - Required: No - Cluster ID.</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting method.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field.<br>LatestFoundTime: Last generation time.<br>AlarmCount: Number of alarms.</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_
