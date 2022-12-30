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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDISTRIBUTIONL4ACCESSDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDISTRIBUTIONL4ACCESSDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDistributionL4AccessData request structure.
                */
                class DescribeDistributionL4AccessDataRequest : public AbstractModel
                {
                public:
                    DescribeDistributionL4AccessDataRequest();
                    ~DescribeDistributionL4AccessDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time
                     * @return StartTime Query start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time
                     * @param StartTime Query start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time
                     * @return EndTime Query end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time
                     * @param EndTime Query end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Query metric. Vaules: 
<li>`l4Flow_connection_distribution`: Distribution of connection duration</li>
                     * @return MetricNames Query metric. Vaules: 
<li>`l4Flow_connection_distribution`: Distribution of connection duration</li>
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Query metric. Vaules: 
<li>`l4Flow_connection_distribution`: Distribution of connection duration</li>
                     * @param MetricNames Query metric. Vaules: 
<li>`l4Flow_connection_distribution`: Distribution of connection duration</li>
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取IDs of sites to be queried. All sites will be selected if this field is not specified.
                     * @return ZoneIds IDs of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置IDs of sites to be queried. All sites will be selected if this field is not specified.
                     * @param ZoneIds IDs of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取The query granularity. Values:
<li>`min`: 1 minute</li>
<li>`5min`: 5 minutes</li>
<li>`hour`: 1 hour</li>
<li>`day`: 1 day</li>If this field is not specified, the granularity is determined based on the query period. **Query period ≤ 1 hour**: 1-minute granularity; **1 hour < query period ≤ 2 days**: 5-minute granularity; **2 days < query period ≤ 7 days**: 1 hour granularity; **Query period > 7 days**: 1 day granularity.
                     * @return Interval The query granularity. Values:
<li>`min`: 1 minute</li>
<li>`5min`: 5 minutes</li>
<li>`hour`: 1 hour</li>
<li>`day`: 1 day</li>If this field is not specified, the granularity is determined based on the query period. **Query period ≤ 1 hour**: 1-minute granularity; **1 hour < query period ≤ 2 days**: 5-minute granularity; **2 days < query period ≤ 7 days**: 1 hour granularity; **Query period > 7 days**: 1 day granularity.
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query granularity. Values:
<li>`min`: 1 minute</li>
<li>`5min`: 5 minutes</li>
<li>`hour`: 1 hour</li>
<li>`day`: 1 day</li>If this field is not specified, the granularity is determined based on the query period. **Query period ≤ 1 hour**: 1-minute granularity; **1 hour < query period ≤ 2 days**: 5-minute granularity; **2 days < query period ≤ 7 days**: 1 hour granularity; **Query period > 7 days**: 1 day granularity.
                     * @param Interval The query granularity. Values:
<li>`min`: 1 minute</li>
<li>`5min`: 5 minutes</li>
<li>`hour`: 1 hour</li>
<li>`day`: 1 day</li>If this field is not specified, the granularity is determined based on the query period. **Query period ≤ 1 hour**: 1-minute granularity; **1 hour < query period ≤ 2 days**: 5-minute granularity; **2 days < query period ≤ 7 days**: 1 hour granularity; **Query period > 7 days**: 1 day granularity.
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Filter conditions. See below for details: 
<li>`ruleId`:<br>   Filter by the <strong>forwarding rule ID</strong><br>   Type: String<br>   Required: No</li>
<li>`proxyId`:<br>   Filter by the <strong>L4 proxy ID</strong><br>   Type: String<br>   Required: No</li>
                     * @return QueryConditions Filter conditions. See below for details: 
<li>`ruleId`:<br>   Filter by the <strong>forwarding rule ID</strong><br>   Type: String<br>   Required: No</li>
<li>`proxyId`:<br>   Filter by the <strong>L4 proxy ID</strong><br>   Type: String<br>   Required: No</li>
                     */
                    std::vector<QueryCondition> GetQueryConditions() const;

                    /**
                     * 设置Filter conditions. See below for details: 
<li>`ruleId`:<br>   Filter by the <strong>forwarding rule ID</strong><br>   Type: String<br>   Required: No</li>
<li>`proxyId`:<br>   Filter by the <strong>L4 proxy ID</strong><br>   Type: String<br>   Required: No</li>
                     * @param QueryConditions Filter conditions. See below for details: 
<li>`ruleId`:<br>   Filter by the <strong>forwarding rule ID</strong><br>   Type: String<br>   Required: No</li>
<li>`proxyId`:<br>   Filter by the <strong>L4 proxy ID</strong><br>   Type: String<br>   Required: No</li>
                     */
                    void SetQueryConditions(const std::vector<QueryCondition>& _queryConditions);

                    /**
                     * 判断参数 QueryConditions 是否已赋值
                     * @return QueryConditions 是否已赋值
                     */
                    bool QueryConditionsHasBeenSet() const;

                    /**
                     * 获取Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @return Area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @param Area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Query start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Query metric. Vaules: 
<li>`l4Flow_connection_distribution`: Distribution of connection duration</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * IDs of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * The query granularity. Values:
<li>`min`: 1 minute</li>
<li>`5min`: 5 minutes</li>
<li>`hour`: 1 hour</li>
<li>`day`: 1 day</li>If this field is not specified, the granularity is determined based on the query period. **Query period ≤ 1 hour**: 1-minute granularity; **1 hour < query period ≤ 2 days**: 5-minute granularity; **2 days < query period ≤ 7 days**: 1 hour granularity; **Query period > 7 days**: 1 day granularity.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter conditions. See below for details: 
<li>`ruleId`:<br>   Filter by the <strong>forwarding rule ID</strong><br>   Type: String<br>   Required: No</li>
<li>`proxyId`:<br>   Filter by the <strong>L4 proxy ID</strong><br>   Type: String<br>   Required: No</li>
                     */
                    std::vector<QueryCondition> m_queryConditions;
                    bool m_queryConditionsHasBeenSet;

                    /**
                     * Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDISTRIBUTIONL4ACCESSDATAREQUEST_H_
