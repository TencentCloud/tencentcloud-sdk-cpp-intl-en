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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_

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
                * DescribeTimingL4Data request structure.
                */
                class DescribeTimingL4DataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL4DataRequest();
                    ~DescribeTimingL4DataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time.
                     * @return StartTime The start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param _startTime The start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time.
                     * @return EndTime The end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param _endTime The end time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Query indicator. Values: 
<li>l4Flow_connections: Number of access connections;</li>
<li>l4Flow_flux: Total access traffic;</li>
<li>l4Flow_inFlux: Ingress access traffic;</li>
<li>l4Flow_outFlux: Egress access traffic. </li>
                     * @return MetricNames Query indicator. Values: 
<li>l4Flow_connections: Number of access connections;</li>
<li>l4Flow_flux: Total access traffic;</li>
<li>l4Flow_inFlux: Ingress access traffic;</li>
<li>l4Flow_outFlux: Egress access traffic. </li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Query indicator. Values: 
<li>l4Flow_connections: Number of access connections;</li>
<li>l4Flow_flux: Total access traffic;</li>
<li>l4Flow_inFlux: Ingress access traffic;</li>
<li>l4Flow_outFlux: Egress access traffic. </li>
                     * @param _metricNames Query indicator. Values: 
<li>l4Flow_connections: Number of access connections;</li>
<li>l4Flow_flux: Total access traffic;</li>
<li>l4Flow_inFlux: Ingress access traffic;</li>
<li>l4Flow_outFlux: Egress access traffic. </li>
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取ZoneId set. This parameter is required.
                     * @return ZoneIds ZoneId set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置ZoneId set. This parameter is required.
                     * @param _zoneIds ZoneId set. This parameter is required.
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * @return ProxyIds List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * @param _proxyIds List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @return Interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @param _interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Filter criteria. The detailed Key values of filter criteria are as follows:
<li>ruleId: Filter by forwarding rule ID.</li>
<li>proxyId: Filter by L4 proxy instance ID.</li>
                     * @return Filters Filter criteria. The detailed Key values of filter criteria are as follows:
<li>ruleId: Filter by forwarding rule ID.</li>
<li>proxyId: Filter by L4 proxy instance ID.</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed Key values of filter criteria are as follows:
<li>ruleId: Filter by forwarding rule ID.</li>
<li>proxyId: Filter by L4 proxy instance ID.</li>
                     * @param _filters Filter criteria. The detailed Key values of filter criteria are as follows:
<li>ruleId: Filter by forwarding rule ID.</li>
<li>proxyId: Filter by L4 proxy instance ID.</li>
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @return Area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @param _area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Query indicator. Values: 
<li>l4Flow_connections: Number of access connections;</li>
<li>l4Flow_flux: Total access traffic;</li>
<li>l4Flow_inFlux: Ingress access traffic;</li>
<li>l4Flow_outFlux: Egress access traffic. </li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * ZoneId set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed Key values of filter criteria are as follows:
<li>ruleId: Filter by forwarding rule ID.</li>
<li>proxyId: Filter by L4 proxy instance ID.</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
